// standard C++ headers
#include <cmath>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <chrono>
#include <array>
#include <algorithm>
#include <numeric>
#include <map>
#include <Eigen/Dense>
#include <Eigen/Eigenvalues>
#include <Eigen/Core>
#include <unsupported/Eigen/CXX11/Tensor>
#include <unsupported/Eigen/MatrixFunctions>
#include "mp2noncanon.h"
#include "tensor.h"

//SpinOrbital CCD Class additions below
SpinOrbitalCCD::SpinOrbitalCCD(const TensorRank4 *eriTensor, Eigen::MatrixXd SFCoeffs, const int nbfs, const int numocc, Eigen::VectorXd *Evals, Eigen::MatrixXd *H_core, const Eigen::MatrixXd *S, const double enuc): eriTensor(*eriTensor), SFCoeffs(SFCoeffs), nbfs(nbfs), numocc(numocc), Evals(*Evals), H_core(*H_core), S(*S), enuc(enuc) {

    double tol_E = 1e-12;
    double residconv = 1e-10;
    Eigen::MatrixXd Coeffs = Eigen::MatrixXd::Zero(2*nbfs,2*nbfs);
    for(int p = 0; p < 2*nbfs; p+=2) {//coefficient basis conversion
        for(int q = 0; q < 2*nbfs; q+=2) {//no p,q+1 or p+1, q terms as that would be alpha*beta=0
            Coeffs(p,q) = (SFCoeffs)(p/2,q/2);
            Coeffs(p+1,q+1) = (SFCoeffs)(p/2,q/2);
        }
    }
    
    TensorRank4 eriTensorSO = SpinOrbitalCCD::construct_so_ao_electron_integral_tensor();//this should be untouched AO tensor.
    Eigen::MatrixXd H_core_SO = SpinOrbitalCCD::fock_build_so(H_core);
    Eigen::MatrixXd one_electron_integrals = SpinOrbitalCCD::rotate_so_sized_matrix(&H_core_SO, &Coeffs);

    Eigen::MatrixXd P = Eigen::MatrixXd::Zero(2*nbfs,2*nbfs);//density reconstructed from coefficients: needed to construct fock matrix which is in turn needed for non-canonical MP2
    for(int i = 0; i < 2*nbfs; i++) {//construct P matrix
        for(int j = 0; j < 2*nbfs; j++) {
            for(int m = 0; m < 2*numocc; m++) {
                P(i,j) += (Coeffs)(i,m) * (Coeffs)(j,m);
            }
        }
    }

    Eigen::MatrixXd F_SO = Eigen::MatrixXd::Zero(2*nbfs,2*nbfs);
    F_SO = SpinOrbitalCCD::fock_build_sf(&P, &Coeffs);
    P.resize(0,0);
    TensorRank4 two_electron_integrals(2*nbfs,2*nbfs,2*nbfs,2*nbfs);
    two_electron_integrals = SpinOrbitalCCD::basic_convert_ERI_tensor_AO_to_soMO(&Coeffs);
    double E_ccd_ee = 0.0;
    int residcounterSO = 1;

    TensorRank4 doublesSO(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
    doublesSO.setZero();
    for(int i = 0; i < 2*numocc; i++){//first do MP2
        for(int j = 0; j < 2*numocc; j++){
            for(int a = 0; a < 2*nbfs-2*numocc; a++){
                for(int b = 0; b < 2*nbfs-2*numocc; b++){
                    doublesSO(i,a,j,b) = 0.25*(two_electron_integrals(i,a+2*numocc,j,b+2*numocc) - two_electron_integrals(i,b+2*numocc,j,a+2*numocc))/(F_SO(i,i)+F_SO(j,j)-F_SO(a+2*numocc,a+2*numocc)-F_SO(b+2*numocc,b+2*numocc));
                }
            }
        }
    }

    for(int i = 0; i < 2*numocc; i++) {//get MP2 energy, even though it's called E_ccd_ee
        for(int j = 0; j < 2*numocc; j++) {
            for(int a = 0; a < 2*nbfs - 2*numocc; a++) {
                for(int b = 0; b < 2*nbfs - 2*numocc; b++) {
                    E_ccd_ee += 0.25 * (two_electron_integrals(i,a+2*numocc,j,b+2*numocc) - two_electron_integrals(i,b+2*numocc,j,a+2*numocc)) * doublesSO(i,a,j,b);
                }
            }
        }
    }
    printf("  E_MP2_ee = %20.12f\n", E_ccd_ee);//END OF STEP 2.

    //TUNABLE DIIS PARAMETERS
    bool stanton_CCD = false;
    bool use_DIIS=true;
    int DIIS_max_num_iters = 4;//Scuseria, Lee, Schaefer Chem Phys Lett 1896 recommend 8
    double DIIS_storage_threshhold = 1e-0;
    double DIIS_threshhold = 1e-0;

    bool earlybird = false;//This runs a step before loop starts, removing the mp2 amplitude from the picture for DIIS. Found to be helpful in certain circumstances.
    bool enforce_well_behaved_DIIS = true;
    std::string CN_handling;
    if(enforce_well_behaved_DIIS) {CN_handling = "reset";} //"shutoff" for permanent DIIS shutoff, "relax" to start DIIS relaxation scheme, "reset" for DIIS purge & immediate restart, "delay" for DIIS purge & delayed restart
    

    //if(DIIS_storage_threshhold > 1e-3) {earlybird=true;}
    
    bool ccpvdz = false;
    if(nbfs > 20) {ccpvdz = true;}
    
    //DON'T NEED TO CHANGE THESE.
    double diff_E = 0.9;
    double old_E = 0.0;
    double E_ccd= 0.0;
    int diiscount = -1;
    int count =-1;
    bool DIIS_time = false;
    int effective_DIIS_num_iters = 0;//for count < DIIS_max_num_iters, we want to use DIIS if energy threshhold is passed. So we need an expanding DIIS infrastructure that caps at DIIS_max_num_iters
    std::vector<Eigen::VectorXd> DIIS_error_vectors;
    std::vector<TensorRank4> DIIS_Tensors(0, TensorRank4(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc));
    std::vector<double> DIIS_energies;
    Eigen::MatrixXd DIIS_error_matrix;
    TensorRank4 DIIS_doublesSO(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
    bool DIIS_store_switch = false;//to prevent deactivating DIIS if we go back above E threshhold
    bool MK_DIIS_time = true;
    int diiscount_at_reset = 0;
    bool recent_reset = false;
    bool DIIS_restart_given_time_to_be_used = true;
    int until_next_DIIS_restart = 0;
    int CN_DIIS_reset_delay = DIIS_max_num_iters - 1;
    int DIIS_reset_delay = 0;//let the code run a few pure theory runs before re-activating DIIS after reset. Changed to CN_DIIS_reset_delay if "relax" DIIS reset scheme is used.

    //Poor input tests for DIIS
    if(DIIS_max_num_iters == 0){
        std::cout << "ERROR: DIIS_max_num_iters cannot be zero." << std::endl;
        exit(EXIT_FAILURE);
    }
    else if (DIIS_max_num_iters == 0) {
        std::cout << "WARNING: You have selected only one tensor to be used in DIIS, equivalent to not using DIIS. Increase DIIS_num_iters for speedup." << std::endl;
    }
    if(DIIS_storage_threshhold < DIIS_threshhold) {
        std::cout << "ERROR: DIIS_storage_threshhold cannot be smaller than DIIS_threshhold." << std::endl;
        exit(EXIT_FAILURE);
    }
    //End poor input tests for DIIS

    std::cout << "CCD: " << std::endl;
    if(stanton_CCD){std::cout << "Iteration             E_CCD" << std::endl;}
    else{std::cout << "Iteration             E_CCD            # residuals" << std::endl;}

    if(earlybird) {
        count++;
        Eigen::MatrixXd one_particle_intermediate = SpinOrbitalCCD::construct_one_particle_intermediate(F_SO, doublesSO, two_electron_integrals, stanton_CCD);
        TensorRank4 two_particle_intermediate = SpinOrbitalCCD::construct_two_particle_intermediate(doublesSO, two_electron_integrals);
        TensorRank4 residualSO(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
        residualSO.setZero();
        residualSO = SpinOrbitalCCD::calculate_residuals_so(&residcounterSO, residconv, &two_electron_integrals, &doublesSO, &one_particle_intermediate, two_particle_intermediate);
        doublesSO = SpinOrbitalCCD::update_doubles_so(&doublesSO, &residualSO, &F_SO);
        E_ccd = SpinOrbitalCCD::canonical_E_ee_so(two_electron_integrals, doublesSO);
        diff_E = E_ccd - old_E;
        old_E = E_ccd;
        if(stanton_CCD){printf("%3i        %20.12f                           Energy step:   %9.2e    earlybird\n", count, E_ccd, diff_E);}
        else{printf("%3i        %20.12f            %i            Energy step:   %9.2e    earlybird\n", count, E_ccd, residcounterSO, diff_E);}
    }
    
    bool checkpoint_assessment = false;
    bool print_diis_results = false;

    //doubles update routine
    while(fabs(diff_E) > tol_E || residcounterSO > 0) {//Stanton CCD only needs to pass energy test, while residuals will have to pass both energy and residcount.
        count++;        
        if(use_DIIS && fabs(diff_E) < DIIS_storage_threshhold){
            DIIS_store_switch = true;//to prevent deactivating DIIS if we go back above E threshhold
        }
        if((DIIS_store_switch && diiscount == -1) || recent_reset) {//AT START OF DIIS. store the doubles of the previous round as t_-1, as in er(0) = t_0 - t_-1, and t(0)=t_0. This is useful if DIIS didn't start immediately, but also works if it does as t_-1 will be t_mp2.
            DIIS_error_vectors.push_back(doublesSO.resizeR4TensortoVector(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc));
        }
        //get doublesSO and check for convergence
        if(DIIS_time && MK_DIIS_time){
            Eigen::MatrixXd one_particle_intermediate = SpinOrbitalCCD::construct_one_particle_intermediate(F_SO, DIIS_doublesSO, two_electron_integrals, stanton_CCD);
            TensorRank4 two_particle_intermediate = SpinOrbitalCCD::construct_two_particle_intermediate(DIIS_doublesSO, two_electron_integrals);
            if(stanton_CCD){
                doublesSO = SpinOrbitalCCD::stanton_t2_eqn(&two_electron_integrals,&DIIS_doublesSO,&one_particle_intermediate,&F_SO,two_particle_intermediate);
                E_ccd = SpinOrbitalCCD::canonical_E_ee_so(two_electron_integrals, doublesSO);
                diff_E = E_ccd - old_E;
                old_E = E_ccd;
                printf("%3i        %20.12f                           Energy step:   %9.2e    DIIS\n", count, E_ccd, diff_E);
                if (fabs(diff_E) < tol_E) {
                    double true_E = 0.0;
                    if (nbfs == 7) {true_E= -0.070162245032;}
                    else if (ccpvdz) {true_E = -0.222564795889;}
                    else {true_E = 0.0;}
                    printf("Calculation completed in %i iterations. Final E: %20.12f. Target E: %20.12f. Difference in E: %1.1e\n", count, E_ccd, true_E, true_E - E_ccd);
                    exit(EXIT_SUCCESS);
                }
            }
            else{
                TensorRank4 residualSO(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
                residualSO.setZero();
                residualSO = SpinOrbitalCCD::calculate_residuals_so(&residcounterSO, residconv, &two_electron_integrals, &DIIS_doublesSO, &one_particle_intermediate, two_particle_intermediate);
                doublesSO = SpinOrbitalCCD::update_doubles_so(&DIIS_doublesSO, &residualSO, &F_SO);//BE VERY CAREFUL: THIS IS FIRST CHANGING DIIS_doubles_so AND THEN EQUATING doublesSO TO IT.
                E_ccd = SpinOrbitalCCD::canonical_E_ee_so(two_electron_integrals, doublesSO);
                diff_E = E_ccd - old_E;
                old_E = E_ccd;
                printf("%3i        %20.12f          %5i            Energy step:   %9.2e    DIIS\n", count, E_ccd,residcounterSO, diff_E);
                if (fabs(diff_E) < tol_E && residcounterSO == 0) {//technically not needed, as while loop handles it, but although ugly, it prevents waste this way.
                    double true_E = 0.0;
                    if (nbfs == 7) {true_E= -0.070162245032;}
                    else if (ccpvdz) {true_E = -0.222564795889;}
                    else {true_E = 0.0;}
                    printf("Calculation completed in %i iterations. Final E: %20.12f. Target E: %20.12f. Difference in E: %1.1e\n", count, E_ccd, true_E, true_E - E_ccd);
                    exit(EXIT_SUCCESS);
                }
            }
            //if(unorthodox_error_construction){
                //if I did this here, I'd need to reformulate doubles update function, as running it currently affects DIIS_doublesSO
                //DIIS_error_vectors.push_back(DIIS_doublesSO.resizeR4TensortoVector(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc));
            //}

        }
        else {
            Eigen::MatrixXd one_particle_intermediate = SpinOrbitalCCD::construct_one_particle_intermediate(F_SO, doublesSO, two_electron_integrals, stanton_CCD);
            TensorRank4 two_particle_intermediate = SpinOrbitalCCD::construct_two_particle_intermediate(doublesSO, two_electron_integrals);
            if(stanton_CCD){
                doublesSO = SpinOrbitalCCD::stanton_t2_eqn(&two_electron_integrals,&doublesSO,&one_particle_intermediate,&F_SO,two_particle_intermediate);
                E_ccd = SpinOrbitalCCD::canonical_E_ee_so(two_electron_integrals, doublesSO);
                diff_E = E_ccd - old_E;
                old_E = E_ccd;
                printf("%3i        %20.12f                           Energy step:   %9.2e\n", count, E_ccd, diff_E);
                if (fabs(diff_E) < tol_E) {
                    double true_E = 0.0;
                    if (nbfs == 7) {true_E= -0.070162245032;}
                    else if (ccpvdz) {true_E = -0.222564795889;}
                    else {true_E = 0.0;}
                    printf("Calculation completed in %i iterations. Final E: %20.12f. Target E: %20.12f. Difference in E: %1.1e\n", count, E_ccd, true_E, true_E - E_ccd);
                    exit(EXIT_SUCCESS);
                }
            }
            else{
                TensorRank4 residualSO(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
                residualSO.setZero();
                residualSO = SpinOrbitalCCD::calculate_residuals_so(&residcounterSO, residconv, &two_electron_integrals, &doublesSO, &one_particle_intermediate, two_particle_intermediate);
                doublesSO = SpinOrbitalCCD::update_doubles_so(&doublesSO, &residualSO, &F_SO);
                E_ccd = SpinOrbitalCCD::canonical_E_ee_so(two_electron_integrals, doublesSO);
                diff_E = E_ccd - old_E;
                old_E = E_ccd;
                printf("%3i        %20.12f          %5i            Energy step:   %9.2e\n", count, E_ccd,residcounterSO, diff_E);
                if (fabs(diff_E) < tol_E && residcounterSO == 0) {
                    double true_E = 0.0;
                    if (nbfs == 7) {true_E= -0.070162245032;}
                    else if (ccpvdz) {true_E = -0.222564795889;}
                    else {true_E = 0.0;}
                    printf("Calculation completed in %i iterations. Final E: %20.12f. Target E: %20.12f. Difference in E: %1.1e\n", count, E_ccd, true_E, true_E - E_ccd);
                    exit(EXIT_SUCCESS);
                }
            }
        }
        //end get doublesSO and convergence check
        if(checkpoint_assessment){std::cout << "line " << __LINE__ << " reached." << std::endl;}

        //DIIS storage, cleanup, and logic board
        if(DIIS_store_switch && MK_DIIS_time){
            diiscount++;

            //DIIS storage and cleanup
            DIIS_energies.push_back(E_ccd);
            DIIS_Tensors.push_back(doublesSO);
            if (!DIIS_time) {//still storing pre-DIIS trigger
                //        if(diiscount == 0 || recent_reset) {
                if(diiscount == 0 || recent_reset) {
                    recent_reset = false;
                    DIIS_error_vectors[diiscount] = DIIS_Tensors[diiscount].resizeR4TensortoVector(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc) - DIIS_error_vectors[diiscount];
                }
                else { DIIS_error_vectors.push_back(DIIS_Tensors[diiscount].resizeR4TensortoVector(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc) - DIIS_Tensors[diiscount - 1].resizeR4TensortoVector(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc)); }
            }
            else {//Now storage changes after DIIS has been triggered.
                DIIS_error_vectors[diiscount] = DIIS_Tensors[diiscount].resizeR4TensortoVector(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc) - DIIS_error_vectors[diiscount];//this looks weird but is er(i)=t(i)-t_interpolated(i-1), where t_interpolated(i-1) is the DIIS interpolated t that immediately led to t(i).
            }
            if(diiscount - diiscount_at_reset >= DIIS_max_num_iters){//trailing cleanup of previous iterates:only keep the needed! diiscount + 1?//unsure if need diiscount_at_reset here
                DIIS_energies[diiscount - DIIS_max_num_iters] = 0.0;
                DIIS_error_vectors[diiscount - DIIS_max_num_iters].resize(0);//CAREFUL: IF we change DIIS_max_num_iters upon reset, this cleanup routine will miss entries.
                DIIS_Tensors[diiscount - DIIS_max_num_iters].clear();
            }
            //end DIIS storage and cleanup
            if(checkpoint_assessment){std::cout << "line " << __LINE__ << " reached." << std::endl;}

            //DIIS control flow, instruction flags
            if(fabs(diff_E) < DIIS_threshhold && --DIIS_reset_delay<=0){//example of short circuit evaluation: don't want to decrement DIIS_reset_delay without it being DIIS_time.
                DIIS_time = true;
            }

            if(DIIS_time && --until_next_DIIS_restart <=0) {DIIS_restart_given_time_to_be_used = true;}

            if(enforce_well_behaved_DIIS && effective_DIIS_num_iters == DIIS_max_num_iters && DIIS_restart_given_time_to_be_used){//make sure some DIIS gets done. also paves way for later, more advanced resets.
                double condition_number = SpinOrbitalCCD::compute_condition_number(effective_DIIS_num_iters, DIIS_error_matrix);
                if(print_diis_results) {std::cout << "condition number: " << condition_number << std::endl;}
                if(condition_number == -1.0) {
                    if(CN_handling == "shutoff"){//when error matrix becomes ill-conditioned, shut off DIIS forever (with masterkey == MK).This approach should be used if the others have no speed-up
                        std::cout << "DIIS shutoff" << std::endl; 
                        MK_DIIS_time = false;
                    }
                    else if(CN_handling == "relax"){//When error matrix becomes ill-conditioned, shut off DIIS, rebuild tensors with no DIIS, then do one DIIS step when the error matrix is max dimensions. Repeat once matrix becomes ill-conditioned again.
                        std::cout << "DIIS relaxation sequence" << std::endl;
                        DIIS_reset_delay = CN_DIIS_reset_delay;
                        effective_DIIS_num_iters = 0;
                        diiscount_at_reset = diiscount;
                        DIIS_time = false;
                        for(int i = 1; i < DIIS_max_num_iters; i++){
                            DIIS_energies[diiscount - i] = 0.0;
                            DIIS_error_vectors[diiscount - i].resize(0);
                            DIIS_Tensors[diiscount - i].clear();
                        }
                        DIIS_error_vectors[diiscount] = DIIS_Tensors[diiscount].resizeR4TensortoVector(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
                        recent_reset=true;
                    }
                    else if(CN_handling == "reset"){//When error matrix becomes ill-condtioned, shut off DIIS, do one step of non-DIIS, then begin reconstruction of DIIS tensors.
                        std::cout << "DIIS reset" << std::endl;
                        effective_DIIS_num_iters = 0;
                        diiscount_at_reset = diiscount;
                        DIIS_time = false;
                        for(int i = 1; i < DIIS_max_num_iters; i++){
                            DIIS_energies[diiscount - i] = 0.0;
                            DIIS_error_vectors[diiscount - i].resize(0);
                            DIIS_Tensors[diiscount - i].clear();
                        }
                        DIIS_error_vectors[diiscount] = DIIS_Tensors[diiscount].resizeR4TensortoVector(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
                        recent_reset=true;
                    }
                    else if(CN_handling == "delay"){//When error matrix becomes ill-conditioned, shut off DIIS, run a few steps of non-DIIS, then run DIIS until error matrix becomes ill-conditioned again. This is equivalent to relax unless matrix somehow doesn't immediately become ill-conditioned again after DIIS step.
                        std::cout << "DIIS delayed reset" << std::endl;
                        DIIS_restart_given_time_to_be_used = false;
                        DIIS_reset_delay = CN_DIIS_reset_delay;//let the code run a few pure theory runs before re-activating DIIS after reset
                        effective_DIIS_num_iters = 0;
                        until_next_DIIS_restart = DIIS_max_num_iters;
                        diiscount_at_reset = diiscount;
                        DIIS_time = false;
                        for(int i = 1; i < DIIS_max_num_iters; i++){
                            DIIS_energies[diiscount - i] = 0.0;
                            DIIS_error_vectors[diiscount - i].resize(0);
                            DIIS_Tensors[diiscount - i].clear();
                        }
                        DIIS_error_vectors[diiscount] = DIIS_Tensors[diiscount].resizeR4TensortoVector(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
                        recent_reset=true;
                    }
                }
            }


            if(diiscount - diiscount_at_reset >= DIIS_max_num_iters){
                effective_DIIS_num_iters = DIIS_max_num_iters;
            }
            else {
                effective_DIIS_num_iters++;
            }
            
            if(checkpoint_assessment){std::cout << "line " << __LINE__ << " reached." << std::endl;}

            //end DIIS control flow, instruction flags
            DIIS_error_matrix = Eigen::MatrixXd::Zero(effective_DIIS_num_iters+1, effective_DIIS_num_iters+1);
        }
        //end DIIS storage, cleanup, and logic board

        //DIIS interpolation and storage of interpolated doubles tensor to new iteration's error matrix
        if(DIIS_time && MK_DIIS_time){
            //std::cout << "length of tensors (errors) vector : " << DIIS_Tensors.size() << " (" << DIIS_error_vectors.size() << ")" <<std::endl;
            if(checkpoint_assessment){std::cout << "line " << __LINE__ << " reached." << std::endl;}
            for(int i = 0 ; i < effective_DIIS_num_iters; i++){
                for(int j = 0; j < effective_DIIS_num_iters; j++){
                    DIIS_error_matrix(i,j) = (DIIS_error_vectors[i + diiscount + 1 - effective_DIIS_num_iters].transpose() * DIIS_error_vectors[j + diiscount + 1 - effective_DIIS_num_iters]);//This bugger was all 0 for i,j < num_iters 
                }
                DIIS_error_matrix(effective_DIIS_num_iters,i) = -1.0;
                DIIS_error_matrix(i,effective_DIIS_num_iters) = -1.0;
                DIIS_error_matrix(effective_DIIS_num_iters,effective_DIIS_num_iters) = 0.0;
            }
            
            if(checkpoint_assessment){std::cout << "line " << __LINE__ << " reached." << std::endl;}

            //std::cout << "Error Matrix: " << std::endl << DIIS_error_matrix << std::endl;
            //check condition of error matrix: if ill-conditioned set a reset. But first, get a feel for CN and its magnitude when convergence starts to dwindle, ie when a lot of weightings are 0 and one weighting is 1.
            //std::cout << "Condition number : " << SpinOrbitalCCD::compute_condition_number(effective_DIIS_num_iters, DIIS_error_matrix) << std::endl << std::endl;
            //Eigensolver here;
            Eigen::VectorXd Desiredvec(effective_DIIS_num_iters + 1);
            for(int i = 0; i < effective_DIIS_num_iters; i++){
                Desiredvec(i) = 0.0;
            }
            Desiredvec(effective_DIIS_num_iters) = -1.0;

            Eigen::VectorXd x = DIIS_error_matrix.colPivHouseholderQr().solve(Desiredvec);
            //Eigen::VectorXd x = DIIS_error_matrix.fullPivHouseholderQr().solve(Desiredvec);
            if(print_diis_results) {
                std::cout << "weighting: " << x.transpose() << std::endl;
                std::cout << "error matrix at count " << count << " is "<< std::endl << DIIS_error_matrix << std::endl;
            }

            //TensorRank4 DIIS_doublesSO(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
            DIIS_doublesSO.setZero();
            for (int s = 0; s < effective_DIIS_num_iters; s++ ) {
                for (auto i = 0; i < 2*numocc; i++) {
                    for (auto a = 0; a < 2*nbfs-2*numocc; a++) {
                        for (auto j = 0; j < 2*numocc; j++) {
                            for (auto b = 0; b < 2*nbfs-2*numocc; b++) {
                                DIIS_doublesSO(i,a,j,b) += x(s) * (DIIS_Tensors[s + diiscount - effective_DIIS_num_iters + 1])(i,a,j,b);
                            }
                        }
                    }
                }
            }

            if(checkpoint_assessment){std::cout << "line " << __LINE__ << " reached." << std::endl;}

            //if(!stanton_CCD){//DO THIS WAY FOR OMP2: IT REMOVES THE NEED TO STORE A NEW TENSOR = DIIS_doublesSO AND INSTEAD PUTS IT INTO doublesSO, BUT ONLY WORKS FOR RESIDUAL CONSTRUCTION
            //    doublesSO = DIIS_doublesSO;
            //    DIIS_doublesSO.clear();
            //    DIIS_error_vectors.push_back(doublesSO.resizeR4TensortoVector(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc));
            //}
            DIIS_error_vectors.push_back(DIIS_doublesSO.resizeR4TensortoVector(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc));

        }
        //end DIIS interpolation and storage of interpolated doubles tensor to new iteration's error matrix
    }
}

double SpinOrbitalCCD::compute_condition_number(const int dim1, const Eigen::MatrixXd &A){
    Eigen::FullPivLU<Eigen::MatrixXd> lu(A);
    if(lu.isInvertible()) {//do invertibility check
        Eigen::MatrixXd Ainv = lu.inverse();
        double maxcol_Ainv = 0.0;
        double maxcol_A = 0.0;
        double temp_abs_sum_Ainv = 0.0;
        double temp_abs_sum_A = 0.0;
        for(int j = 0; j < dim1; j++ ){
            for(int i = 0; i < dim1; i++) {
                temp_abs_sum_Ainv += fabs(Ainv(i,j));
                temp_abs_sum_A += fabs(A(i,j));
            }
            if(temp_abs_sum_Ainv > maxcol_Ainv) {maxcol_Ainv = temp_abs_sum_Ainv;}
            temp_abs_sum_Ainv = 0.0;
            if(temp_abs_sum_A > maxcol_A) {maxcol_A = temp_abs_sum_A;}
            temp_abs_sum_A = 0.0;
        }
        return maxcol_Ainv*maxcol_A;
    }
    else{
        //std::cout << "Warning: Matrix not invertible for condition number estimate. Error Matrix ill-conditioned." <<std::endl;
        return -1.0;//condition number is never negative, so this is valid signal to switch away from CN.
    }

}

double SpinOrbitalCCD::canonical_E_ee_so(const TensorRank4 &two_electron_integrals, const TensorRank4 &doublesSO){
    double E_ccd_ee = 0.0;
    for(int i = 0; i < 2*numocc; i++) {
        for(int j = 0; j < 2*numocc; j++) {
            for(int a = 0; a < 2*nbfs - 2*numocc; a++) {
                for(int b = 0; b < 2*nbfs - 2*numocc; b++) {
                    E_ccd_ee += 0.25 * (two_electron_integrals(i,a+2*numocc,j,b+2*numocc) - two_electron_integrals(i,b+2*numocc,j,a+2*numocc)) * doublesSO(i,a,j,b);
                }
            }
        }
    }
    return E_ccd_ee;
}

Eigen::MatrixXd SpinOrbitalCCD::construct_one_particle_intermediate(const Eigen::MatrixXd &F_SO, const TensorRank4 &doublesSO, const TensorRank4 &two_electron_integrals, bool stanton_CCD){
    Eigen::MatrixXd one_particle_intermediate = Eigen::MatrixXd::Zero(2*nbfs, 2*nbfs);
    for(int a = 2*numocc; a < 2*nbfs; a++){
        for(int b = 2*numocc; b < 2*nbfs; b++){
            if(stanton_CCD) {one_particle_intermediate(a,b) = (1-(a==b))*F_SO(a,b);}
            else {one_particle_intermediate(a,b) = F_SO(a,b);}

            for(int i = 0; i < 2*numocc; i++){
                for(int j = 0; j < 2*numocc; j++){
                    for(int c = 2*numocc; c < 2*nbfs; c++){
                        one_particle_intermediate(a,b) -= 0.5 * doublesSO(i,a-2*numocc,j,c-2*numocc) * (two_electron_integrals(i,b,j,c) - two_electron_integrals(i,c,j,b));
                    }
                }
            }
        }
    }

    for(int i = 0; i < 2*numocc; i++){
        for(int j = 0; j < 2*numocc; j++){
            if(stanton_CCD) {one_particle_intermediate(i,j) = (1-(i==j))*F_SO(i,j);}
            else {one_particle_intermediate(i,j) = F_SO(i,j);}


            for(int k = 0; k < 2*numocc; k++){
                for(int a = 2*numocc; a < 2*nbfs; a++){
                    for(int b = 2*numocc; b < 2*nbfs; b++){
                        one_particle_intermediate(i,j) += 0.5 * doublesSO(j,a-2*numocc,k,b-2*numocc) * (two_electron_integrals(i,a,k,b) - two_electron_integrals(i,b,k,a));
                    }
                }
            }
        }

    }
    for(int i = 0; i < 2*numocc; i++){
        for(int a = 2*numocc; a < 2*nbfs; a++){
            one_particle_intermediate(i,a) = F_SO(i,a);
        }
    }
    
    return one_particle_intermediate;
}

TensorRank4 SpinOrbitalCCD::construct_two_particle_intermediate(const TensorRank4 &doublesSO, const TensorRank4 &two_electron_integrals){
    TensorRank4 two_particle_intermediate(2*nbfs, 2*nbfs, 2*nbfs, 2*nbfs);
    two_particle_intermediate.setZero();
    for(int i = 0; i < 2*numocc; i++){
        for(int j = 0; j < 2*numocc; j++){
            //eqn 6
            for(int k = 0; k < 2*numocc; k++){
                for(int l = 0; l < 2*numocc; l++){
                    two_particle_intermediate(k,i,l,j) = two_electron_integrals(k,i,l,j) - two_electron_integrals(k,j,l,i);
                    for(int a = 2*numocc; a < 2*nbfs; a++){
                        for(int b = 2*numocc; b < 2*nbfs; b++){
                            two_particle_intermediate(k,i,l,j) += 0.25 * doublesSO(i,a-2*numocc,j,b-2*numocc) * (two_electron_integrals(k,a,l,b) - two_electron_integrals(k,b,l,a));
                        }
                    }
                }
            }
            //eqn 8
            for(int a = 2*numocc; a < 2*nbfs; a++){
                for(int b = 2*numocc; b < 2*nbfs; b++){
                    two_particle_intermediate(i,a,b,j) = two_electron_integrals(i,a,b,j) - two_electron_integrals(i,j,b,a);
                    for(int k = 0; k < 2*numocc; k++){
                        for(int c = 2*numocc; c < 2*nbfs; c++){
                            two_particle_intermediate(i,a,b,j) -= 0.5 * doublesSO(j,c-2*numocc,k,b-2*numocc) * (two_electron_integrals(i,a,k,c) - two_electron_integrals(i,c,k,a));
                        }
                    }
                }
            }
        }
    }
    //eqn 7
    for(int a = 2*numocc; a < 2*nbfs; a++){
        for(int b = 2*numocc; b < 2*nbfs; b++){
            for(int c = 2*numocc; c < 2*nbfs; c++){
                for(int d = 2*numocc; d < 2*nbfs; d++){
                    two_particle_intermediate(a,c,b,d) = two_electron_integrals(a,c,b,d) - two_electron_integrals(a,d,b,c);
                    for(int i = 0; i < 2*numocc; i++){
                        for(int j = 0; j < 2*numocc; j++){
                            two_particle_intermediate(a,c,b,d) += 0.25 * doublesSO(i,a-2*numocc,j,b-2*numocc) * (two_electron_integrals(i,c,j,d) - two_electron_integrals(i,d,j,c));
                        }
                    }
                }
            }
        }
    }
    return two_particle_intermediate;
}

Eigen::MatrixXd SpinOrbitalCCD::fock_build_sf(const Eigen::MatrixXd *P, const Eigen::MatrixXd *Coeffs) {//rename to fock_spinorbitalbuildforMP2
    Eigen::MatrixXd F_ao(nbfs, nbfs);
    for (int mu = 0; mu < nbfs; mu++) {
        for (int nu = 0; nu < nbfs; nu++) {
            double integral = 0.0;
            for (int sigma = 0; sigma < 2*nbfs; sigma++) {
                for (int lamda = 0; lamda < 2*nbfs; lamda++) {
                    integral += (*P)(lamda,sigma)*(2.0*(eriTensor)(mu,nu,sigma/2,lamda/2)-1.0*(eriTensor)(mu,lamda/2,sigma/2,nu))/2.0;//if I've done this correctly: as the eritensor is in SF and P is in SO, I need to divide the SO index by 2 in the eritensor index, but then I'm double counting, so I divide by 2.
                }
            }
        F_ao(mu,nu) = (H_core)(mu,nu) + integral;
        }
    }
    Eigen::MatrixXd F_so = Eigen::MatrixXd::Zero(2*nbfs,2*nbfs);
    for(int p = 0; p < 2*nbfs; p+=2) {
        for(int q = 0; q < 2*nbfs; q+=2) {
            F_so(p,q) = (F_ao)(p/2,q/2);
            F_so(p+1,q+1) = (F_ao)(p/2,q/2);
        }
    }
    F_ao.resize(0,0);

    Eigen::MatrixXd F_mo = Eigen::MatrixXd::Zero(2*nbfs,2*nbfs);
    for (int i = 0; i < 2*nbfs; i++) {
        for(int j = 0; j < 2*nbfs; j++) {
            for(int k = 0; k < 2*nbfs; k++) {
                for(int l = 0; l < 2*nbfs; l++){
                    F_mo(i,j) += (*Coeffs)(l,i) * F_so(l,k) * (*Coeffs)(k,j);//Make the first coeffs complex conjugate, but then new data type required: INDICES ARE ALREADY CORRECTLY ORDERED
                }
            }
        }
    }
    return F_mo;
}

Eigen::MatrixXd SpinOrbitalCCD::rotate_so_sized_matrix(const Eigen::MatrixXd *matrix_to_rotate, const Eigen::MatrixXd *coefficients){
    Eigen::MatrixXd rotated_matrix = Eigen::MatrixXd::Zero(2*nbfs,2*nbfs);
    for (int i = 0; i < 2*nbfs; i++) {
        for(int j = 0; j < 2*nbfs; j++) {
            for(int k = 0; k < 2*nbfs; k++) {
                for(int l = 0; l < 2*nbfs; l++){
                    rotated_matrix(i,j) += (*coefficients)(l,i) * (*matrix_to_rotate)(l,k) * (*coefficients)(k,j);
                }
            }
        }
    }
    return rotated_matrix;
}

Eigen::MatrixXd SpinOrbitalCCD::fock_build_so(const Eigen::MatrixXd *F_mo) {
    Eigen::MatrixXd FockSO = Eigen::MatrixXd::Zero(2*nbfs, 2*nbfs);
    for(int p = 0; p < 2*nbfs; p+=2) {
        for(int q = 0; q < 2*nbfs; q+=2) {
            FockSO(p,q) = (*F_mo)(p/2,q/2);
            FockSO(p+1,q+1) = (*F_mo)(p/2,q/2);
        }
    }
    return FockSO;
}

TensorRank4 SpinOrbitalCCD::basic_convert_ERI_tensor_AO_to_soMO(const Eigen::MatrixXd *Coeffs) {//cut this in half, [p/2 will never give decimal, so I don't need different indices for the two tensor sizes]
    TensorRank4 eriTensorSObasis(2*nbfs, 2*nbfs, 2*nbfs, 2*nbfs);
    eriTensorSObasis.setZero();
    for(int p = 0; p < 2*nbfs; p+=2) {
        for(int q = 0; q < 2*nbfs; q+=2) {
            for(int r = 0; r < 2*nbfs; r+=2) {
                for(int s = 0; s < 2*nbfs; s+=2) {
                    eriTensorSObasis(p,q,r,s) = (eriTensor)(p/2,q/2,r/2,s/2);
                    eriTensorSObasis(p+1,q+1,r,s) = (eriTensor)(p/2,q/2,r/2,s/2);
                    eriTensorSObasis(p,q,r+1,s+1) = (eriTensor)(p/2,q/2,r/2,s/2);
                    eriTensorSObasis(p+1,q+1,r+1,s+1) = (eriTensor)(p/2,q/2,r/2,s/2);
                }
            }
        }
    }
    TensorRank4 TensorStepl(2*nbfs, 2*nbfs, 2*nbfs, 2*nbfs); //make a tensor rank 4 to store the two electron integrals--will simplify to compound indexing later
    TensorStepl.setZero();
    for(int s = 0; s < 2*nbfs; s++) {
        for(int i = 0; i < 2*nbfs; i++) {
            for(int j = 0; j < 2*nbfs; j++) {
                for(int k = 0; k < 2*nbfs; k++) {
                    for(int l = 0; l < 2*nbfs; l++) {
                        TensorStepl(i,j,k,s) += (*Coeffs)(l,s) * (eriTensorSObasis)(i,j,k,l);
                    }
                }
            }
        }
    }

    TensorRank4 TensorStepk(2*nbfs, 2*nbfs, 2*nbfs, 2*nbfs); //make a tensor rank 4 to store the two electron integrals--will simplify to compound indexing later
    TensorStepk.setZero();
    for(int r = 0; r < 2*nbfs; r++) {
        for(int i = 0; i < 2*nbfs; i++) {
            for(int j = 0; j < 2*nbfs; j++) {
                for(int k = 0; k < 2*nbfs; k++) {
                    for(int l = 0; l < 2*nbfs; l++) {
                        TensorStepk(i,j,r,l) += (*Coeffs)(k,r) * TensorStepl(i,j,k,l);
                    }
                }
            }
        }
    }

    //TensorStepl = Eigen::Tensor<double, 4>(0,0,0,0);
    TensorStepl.clear();
    TensorRank4 TensorStepj(2*nbfs, 2*nbfs, 2*nbfs, 2*nbfs); //make a tensor rank 4 to store the two electron integrals--will simplify to compound indexing later
    TensorStepj.setZero();
    for(int q = 0; q < 2*nbfs; q++) {
        for(int i = 0; i < 2*nbfs; i++) { 
            for(int j = 0; j < 2*nbfs; j++) {
                for(int k = 0; k < 2*nbfs; k++) {
                    for(int l = 0; l < 2*nbfs; l++) {
                        TensorStepj(i,q,k,l) += (*Coeffs)(j,q) * TensorStepk(i,j,k,l);
                    }
                }
            }
        }
    }

    TensorStepk.clear();
    TensorRank4 MP2TensorSO(2*nbfs, 2*nbfs, 2*nbfs, 2*nbfs); //make a tensor rank 4 to store the two electron integrals--will simplify to compound indexing later
    MP2TensorSO.setZero();
    for(int p = 0; p < 2*nbfs; p++) {
        for(int i = 0; i < 2*nbfs; i++) {
            for(int j = 0; j < 2*nbfs; j++) {
                for(int k = 0; k < 2*nbfs; k++) {
                    for(int l = 0; l < 2*nbfs; l++) {
                        MP2TensorSO(p,j,k,l) += (*Coeffs)(i,p) * TensorStepj(i,j,k,l);
                    }
                }
            }
        }
    }
    return MP2TensorSO;
}

TensorRank4 SpinOrbitalCCD::basic_convert_ERI_tensor_sfMO_to_soMO(const TensorRank4 *MP2Tensor) {//I sped this up by setting to 0 rather than populating with 0.0
    TensorRank4 MP2TensorSO(2*nbfs, 2*nbfs, 2*nbfs, 2*nbfs);
    MP2TensorSO.setZero();
    for(int p = 0; p < 2*nbfs; p+=2) {
        for(int q = 0; q < 2*nbfs; q+=2) {
            for(int r = 0; r < 2*nbfs; r+=2) {
                for(int s = 0; s < 2*nbfs; s+=2) {
                    MP2TensorSO(p,q,r,s) = (*MP2Tensor)(p/2,q/2,r/2,s/2);
                    MP2TensorSO(p+1,q+1,r,s) = (*MP2Tensor)(p/2,q/2,r/2,s/2);
                    MP2TensorSO(p,q,r+1,s+1) = (*MP2Tensor)(p/2,q/2,r/2,s/2);
                    MP2TensorSO(p+1,q+1,r+1,s+1) = (*MP2Tensor)(p/2,q/2,r/2,s/2);
                }
            }
        }
    }
    return MP2TensorSO;
}

TensorRank4 SpinOrbitalCCD::calculate_residuals_so(int *residcounter, const double residconv, const TensorRank4 *two_electron_integral, const TensorRank4 *doubles, const Eigen::MatrixXd *F, const TensorRank4 &two_particle_intermediate) {
    //F is what Crawdad calls the one particle intermediate. It's the generalized fock operator
    //what Crawdad calls the two_particle_intermediate is W. It's the fluctuation operator.
    TensorRank4 residual(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
    residual.setZero();
    *residcounter=0;
        for(int i = 0; i < 2*numocc; i++) {
            for(int j = 0; j < 2*numocc; j++) {
                for(int a = 0; a < 2*nbfs-2*numocc; a++) {
                    for(int b = 0; b < 2*nbfs-2*numocc; b++) {
                        residual(i,a,j,b) = (*two_electron_integral)(i,a+2*numocc,j,b+2*numocc) - (*two_electron_integral)(i,b+2*numocc,j,a+2*numocc);//1. ijab (gbar^i,j_a,b)
                        for(int c = 0; c < 2*nbfs-2*numocc; c++) {
                            residual(i,a,j,b) += (*doubles)(i,a,j,c) * (*F)(b+2*numocc,c+2*numocc) - (*doubles)(i,b,j,c) * (*F)(a+2*numocc,c+2*numocc);//2. ijabc
                            
                            for(int d = 0; d < 2*nbfs-2*numocc; d++) {
                                residual(i,a,j,b) += 0.5 * (*doubles)(i,c,j,d) * two_particle_intermediate(a+2*numocc,c+2*numocc,b+2*numocc,d+2*numocc);//3. ijabcd
                            }

                            for(int k = 0; k < 2*numocc; k++){
                                residual(i,a,j,b) += (*doubles)(i,a,k,c) * two_particle_intermediate(k,c+2*numocc,b+2*numocc,j) - (*doubles)(i,b,k,c) * two_particle_intermediate(k,c+2*numocc,a+2*numocc,j)
                                                   - (*doubles)(j,a,k,c) * two_particle_intermediate(k,c+2*numocc,b+2*numocc,i) + (*doubles)(j,b,k,c) * two_particle_intermediate(k,c+2*numocc,a+2*numocc,i);//4. ijabck
                            }
                        }
                        for(int k = 0; k < 2*numocc; k++) {
                            residual(i,a,j,b) += - (*doubles)(i,a,k,b) * (*F)(k,j) + (*doubles)(j,a,k,b) * (*F)(k,i);//5. ijabk
                            
                            for(int l = 0; l < 2*numocc; l++){
                                residual(i,a,j,b) += 0.5 * (*doubles)(k,a,l,b) * two_particle_intermediate(k,i,l,j);//6. ijabkl
                            }
                        }
                        
                        if (fabs(residual(i,a,j,b)) > residconv) {
                            *residcounter += 1;
                        }
                    }
                }
            }
        }
    return residual;
}

TensorRank4 SpinOrbitalCCD::update_doubles_so(TensorRank4 *doubles, const TensorRank4 *residual, const Eigen::MatrixXd *F){
    for(int i = 0; i < 2*numocc; i++) {
        for(int j = 0; j < 2*numocc; j++) {
            for(int a = 0; a < 2*nbfs-2*numocc; a++) {
                for(int b = 0; b < 2*nbfs-2*numocc; b++) {
                    (*doubles)(i,a,j,b) += ((*residual)(i,a,j,b))/((*F)(i,i) + (*F)(j,j) - (*F)(a+2*numocc,a+2*numocc) - (*F)(b+2*numocc,b+2*numocc));
                }
            }
        }
    }
    return *doubles;
}

TensorRank4 SpinOrbitalCCD::stanton_t2_eqn(const TensorRank4 *g, const TensorRank4 *doubles, const Eigen::MatrixXd *F, const Eigen::MatrixXd *f, const TensorRank4 &two_particle_intermediate){
    //f is the regular fock operator we know and love.
    //g is the non-antisymmetrized two electron integral tensor
    //F is what Crawdad calls the one particle intermediate. It's the generalized fock operator
    //what Crawdad calls the two_particle_intermediate is W. It's the fluctuation operator.
    TensorRank4 newdoubles(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
    newdoubles.setZero();
    for(int i = 0; i < 2*numocc; i++) {
        for(int j = 0; j < 2*numocc; j++) {
            for(int a = 0; a < 2*nbfs-2*numocc; a++) {
                for(int b = 0; b < 2*nbfs-2*numocc; b++) {
                    newdoubles(i,a,j,b) = (*g)(i,a+2*numocc,j,b+2*numocc) - (*g)(i,b+2*numocc,j,a+2*numocc);//1. ijab (gbar^i,j_a,b)
                    for(int c = 0; c < 2*nbfs-2*numocc; c++) {
                        newdoubles(i,a,j,b) += (*doubles)(i,a,j,c) * (*F)(b+2*numocc,c+2*numocc) - (*doubles)(i,b,j,c) * (*F)(a+2*numocc,c+2*numocc);//2. ijabc
                        
                        for(int d = 0; d < 2*nbfs-2*numocc; d++) {
                            newdoubles(i,a,j,b) += 0.5 * (*doubles)(i,c,j,d) * two_particle_intermediate(a+2*numocc,c+2*numocc,b+2*numocc,d+2*numocc);//3. ijabcd
                        }
                        for(int k = 0; k < 2*numocc; k++){
                            newdoubles(i,a,j,b) += (*doubles)(i,a,k,c) * two_particle_intermediate(k,c+2*numocc,b+2*numocc,j) - (*doubles)(i,b,k,c) * two_particle_intermediate(k,c+2*numocc,a+2*numocc,j)
                                               - (*doubles)(j,a,k,c) * two_particle_intermediate(k,c+2*numocc,b+2*numocc,i) + (*doubles)(j,b,k,c) * two_particle_intermediate(k,c+2*numocc,a+2*numocc,i);//4. ijabck
                        }
                    }
                    for(int k = 0; k < 2*numocc; k++) {
                        newdoubles(i,a,j,b) += - (*doubles)(i,a,k,b) * (*F)(k,j) + (*doubles)(j,a,k,b) * (*F)(k,i);//5. ijabk
                        
                        for(int l = 0; l < 2*numocc; l++){
                            newdoubles(i,a,j,b) += 0.5 * (*doubles)(k,a,l,b) * two_particle_intermediate(k,i,l,j);//6. ijabkl
                        }
                    }
                }
            }
        }
    }

    for(int i = 0; i < 2*numocc; i++) {
        for(int j = 0; j < 2*numocc; j++) {
            for(int a = 0; a < 2*nbfs-2*numocc; a++) {
                for(int b = 0; b < 2*nbfs-2*numocc; b++) {
                    newdoubles(i,a,j,b) = newdoubles(i,a,j,b)/((*f)(i,i) + (*f)(j,j) - (*f)(a+2*numocc,a+2*numocc) - (*f)(b+2*numocc,b+2*numocc));
                }
            }
        }
    }
    return newdoubles;
}

Eigen::MatrixXd SpinOrbitalCCD::construct_generalized_fock(const TensorRank4 *eriTensorSO, const Eigen::MatrixXd *H_core_SO, const Eigen::MatrixXd *one_particle_density, const TensorRank4 *two_particle_density){
    Eigen::MatrixXd gen_fock = Eigen::MatrixXd::Zero(2*nbfs,2*nbfs);
    for (int p = 0; p < 2*nbfs; p++){
        for(int q = 0; q < 2*nbfs; q++){
            for (int r = 0; r < 2*nbfs; r++){
                gen_fock(p,q) += (*H_core_SO)(p,r) * (*one_particle_density)(r,q);
            }
            
            for (int r = 0; r < 2*nbfs; r++){
                for(int s = 0; s < 2*nbfs; s++){
                    for (int t = 0; t < 2*nbfs; t++){
                        gen_fock(p,q) += 0.5*((*eriTensorSO)(p,s,r,t) - (*eriTensorSO)(p,t,r,s)) * (*two_particle_density)(s,q,t,r);
                    }
                }
            }
        }
    }
    return gen_fock;
}

Eigen::MatrixXd SpinOrbitalCCD::build_one_particle_density_hf(){
    Eigen::MatrixXd rdm1e_hf = Eigen::MatrixXd::Zero(2*nbfs,2*nbfs);
    for (int i = 0; i < 2*numocc; i++) {
        for (int j = 0; j < 2*numocc; j++) {
            if( i == j ){
                rdm1e_hf(j,i) += 1.0;
            }
        }
    }
    return rdm1e_hf;
}

Eigen::MatrixXd SpinOrbitalCCD::build_one_particle_density_ccd(TensorRank4 *doubles){
    Eigen::MatrixXd one_particle_density_mp2 = Eigen::MatrixXd::Zero(2*nbfs,2*nbfs);
    for (int i = 0; i < 2*numocc; i++) {
        for (int j = 0; j < 2*numocc; j++) {
 //            for (int a = 2*numocc; a < 2*nbfs; a++) {//check indexing of doubles here
 //                for (int b = 2*numocc; b < 2*nbfs; b++) {
 //                    for (int c = 2*numocc; c < 2*nbfs; c++) {//build the unoccupied one-particle density block
            for (int a = 0; a < 2*nbfs - 2*numocc; a++) {//check indexing of doubles here
                for (int b = 0; b < 2*nbfs - 2*numocc; b++) {
                    for (int c = 0; c < 2*nbfs - 2*numocc; c++) {//build the unoccupied one-particle density block
 //                        one_particle_density(a+2*numocc,b+2*numocc) += 0.5 * (*doubles)(i,a,j,c) * (*doubles)(b,i,c,j);
                        one_particle_density_mp2(a+2*numocc,b+2*numocc) += 0.5 * (*doubles)(i,a,j,c) * (*doubles)(i,b,j,c);
                    }

                    for (int k = 0; k < 2*numocc; k++) {//build the occupied one particle density block
 //                        one_particle_density(i,j) -= 0.5 * (*doubles)(j,a,k,b) * (*doubles)(a,i,b,k);
                        one_particle_density_mp2(i,j) -= 0.5 * (*doubles)(j,a,k,b) * (*doubles)(i,a,k,b);
                    }
                }
            }
        }
    }
    return one_particle_density_mp2;
}

Eigen::MatrixXd SpinOrbitalCCD::build_total_one_particle_density(const Eigen::MatrixXd &rdm1e_hf, const Eigen::MatrixXd &rdm1e_mp2){
    Eigen::MatrixXd one_particle_density = rdm1e_hf + rdm1e_mp2;
    
    return one_particle_density;
}

TensorRank4 SpinOrbitalCCD::build_two_particle_density(TensorRank4 *doubles, const Eigen::MatrixXd &rdm1e_hf, const Eigen::MatrixXd &rdm1e_mp2){
    TensorRank4 two_particle_density(2*nbfs, 2*nbfs, 2*nbfs, 2*nbfs);
    two_particle_density.setZero();
    for (int i = 0; i < 2*numocc; i++) {
        for (int j = 0; j < 2*numocc; j++) {
            for (int a = 0; a < 2*nbfs-2*numocc; a++) {//check indexing of doubles here
                for (int b = 0; b < 2*nbfs-2*numocc; b++) {
                    two_particle_density(i,a+2*numocc,j,b+2*numocc) = (*doubles)(i,a,j,b);

                    /*
                    two_particle_density_mp2(i,b+2*numocc,j,a+2*numocc) = -1.0*(*doubles)(i,a,j,b);
                    two_particle_density_mp2(j,a+2*numocc,i,b+2*numocc) = -1.0*(*doubles)(i,a,j,b);
                    two_particle_density_mp2(j,b+2*numocc,i,a+2*numocc) = (*doubles)(i,a,j,b);*/
                    two_particle_density(a+2*numocc,i,b+2*numocc,j) = (*doubles)(i,a,j,b);//should this just be i,a,j,b?
                    /*
                    two_particle_density_mp2(a+2*numocc,j,b+2*numocc,i) = -1.0*(*doubles)(a,i,b,j);
                    two_particle_density_mp2(b+2*numocc,i,a+2*numocc,j) = -1.0*(*doubles)(a,i,b,j);
                    two_particle_density_mp2(b+2*numocc,j,a+2*numocc,i) = (*doubles)(a,i,b,j);*/
                }
            }
            /*
            for(int l = 0; l < 2*numocc; l++){
                for(int k = 0; k < 2*numocc; k++){
                    for (int a = 0; a < 2*nbfs-2*numocc; a++) {
                        for (int b = 0; b < 2*nbfs-2*numocc; b++) {
                            two_particle_density_mp2(i,i,l,j) -= (*doubles)(l,a,k,b) * (*doubles)(a,j,b,k);
                            two_particle_density_mp2(l,j,i,i) -= (*doubles)(l,a,k,b) * (*doubles)(a,j,b,k);
                            two_particle_density_mp2(l,i,i,j) += (*doubles)(l,a,k,b) * (*doubles)(a,j,b,k);
                            two_particle_density_mp2(i,j,l,i) += (*doubles)(l,a,k,b) * (*doubles)(a,j,b,k);
                        }
                    }
                }
            }*/
        }
    }
    //TensorRank4 two_particle_density(2*nbfs, 2*nbfs, 2*nbfs, 2*nbfs);
    //two_particle_density.setZero();
    for(int p = 0; p < 2*nbfs; p++){
        for(int q = 0; q < 2*nbfs; q++){
            for(int r = 0; r < 2*nbfs; r++){
                for(int s = 0; s < 2*nbfs; s++){
                    two_particle_density(p,r,q,s) += rdm1e_hf(p,r)*rdm1e_hf(q,s) - rdm1e_hf(p,s)*rdm1e_hf(q,r) + rdm1e_mp2(p,r)*rdm1e_hf(q,s)-rdm1e_mp2(p,s)*rdm1e_hf(q,r) - rdm1e_mp2(q,r)*rdm1e_hf(p,s) + rdm1e_mp2(q,s)*rdm1e_hf(p,r);
                }
            }
        }
    }
    return two_particle_density;
}

//Compute the Newton-Raphson orbital rotation matrix
Eigen::MatrixXd SpinOrbitalCCD::compute_newton_raphson_step(const Eigen::MatrixXd *generalized_fock, const Eigen::MatrixXd *fso){
    //Eigen::MatrixXd step7_f(); // This is just the fock matrix in second quantization, and I can just pass to this function (or class if it ends up being inside one) the build_fock subroutine.
    Eigen::MatrixXd x_vo = Eigen::MatrixXd::Zero(2*nbfs, 2*nbfs);//calculate newton-raphson step
    for ( int i = 0; i < 2*numocc; i++) {
        for ( int a = 2*numocc; a < 2*nbfs; a++ ) {
        //    X_vo(a,i) = ((*Fock)(i,a) - (*Fock)(a,i))/((Evals)(i) - (Evals)(a));//POSSIBLE PROBLEM HERE WITH EVALS
        //    X_vo(a,i) = ((*Fock)(i,a) - (*Fock)(a,i))/((Evals)(i/2) - (Evals)(a/2));//POSSIBLE PROBLEM HERE WITH EVALS
            x_vo(a,i) = ((*generalized_fock)(a,i) - (*generalized_fock)(i,a))/((*fso)(i,i) - (*fso)(a,a));//Is this a workaround that will allow updates to equivalent of Evals?
        }
    }
    //std::cout << "orbital rotation exponent (non-hermitianized):" << std::endl << X_vo << std::endl <<std::endl;
    Eigen::MatrixXd orbital_rotation_matrix_exponent = x_vo - x_vo.transpose();//build orbital rotation matrix
    //std::cout << "orbital rotation exponent (hermitianized):" << std::endl << orbital_rotation_matrix_exponent << std::endl<< std::endl;
    Eigen::MatrixXd orbital_rotation_matrix = orbital_rotation_matrix_exponent.exp();//both transpose and exp are part of eigen-unsupported
    //std::cout << "orbital rotation matrix : "<< std::endl << orbital_rotation_matrix << std::endl;
    return orbital_rotation_matrix;
}

Eigen::MatrixXd SpinOrbitalCCD::rotate_so_coefficients(Eigen::MatrixXd coefficients, const Eigen::MatrixXd *orbital_rotation_matrix){
    Eigen::MatrixXd rotated_coeffs = Eigen::MatrixXd::Zero(2*nbfs, 2*nbfs);
 //    rotated_coeffs.noalias() += Coeffs * *orbital_rotation_matrix;
    rotated_coeffs = coefficients * *orbital_rotation_matrix;
    return rotated_coeffs;
}
//Step 10: recreate the one- and two-electron integrals using the rotate coefficients. Use one function Eigen::MatrixXd and another function TensorRank4.
Eigen::MatrixXd SpinOrbitalCCD::rotate_one_electron_integrals(const Eigen::MatrixXd *rotated_coefficients, const Eigen::MatrixXd *h_core_so_sized){
    Eigen::MatrixXd rotated_one_electron_integrals = Eigen::MatrixXd::Zero(2*nbfs, 2*nbfs);
    //auto T = compute_1body_ints(shells, Operator::kinetic);
    rotated_one_electron_integrals = (*rotated_coefficients).transpose() * *h_core_so_sized * *rotated_coefficients;//check this isn't an aliasing issue: transposing a reference
    return rotated_one_electron_integrals;
    // compute nuclear-attraction integrals
    //Matrix V = compute_1body_ints(shells, Operator::nuclear, atoms);
    //will i need to change T and/or V? I'm not sure I do... I think I just take my AO built H (H_core + eri) (H_core = T+V)
}

TensorRank4 SpinOrbitalCCD::construct_so_ao_electron_integral_tensor(){
    TensorRank4 eriTensorSObasis(2*nbfs, 2*nbfs, 2*nbfs, 2*nbfs);
    //eriTensorSO.setZero(); // Use this later to not have to populate with zeros in the loops below.

    for(int p = 0; p < 2*nbfs; p+=2) {
        for(int q = 0; q < 2*nbfs; q+=2) {
            for(int r = 0; r < 2*nbfs; r+=2) {
                for(int s = 0; s < 2*nbfs; s+=2) {//no p,q+1 or p+1, q terms as that would be alpha*beta=0
                    eriTensorSObasis(p,q,r,s) = (eriTensor)(p/2,q/2,r/2,s/2);
                    eriTensorSObasis(p+1,q+1,r,s) = (eriTensor)(p/2,q/2,r/2,s/2);
                    eriTensorSObasis(p,q,r+1,s+1) = (eriTensor)(p/2,q/2,r/2,s/2);
                    eriTensorSObasis(p+1,q+1,r+1,s+1) = (eriTensor)(p/2,q/2,r/2,s/2);
                }
            }
        }
    }
    return eriTensorSObasis;
}

TensorRank4 SpinOrbitalCCD::rotate_two_electron_integrals(const Eigen::MatrixXd *rotated_coefficients, const TensorRank4 *eriTensorSO){
    TensorRank4 rotated_two_electron_integrals(2*nbfs, 2*nbfs, 2*nbfs, 2*nbfs);
    rotated_two_electron_integrals.setZero();
    //rotated_two_electron_integrals += (*rotated_coefficients).transpose() * (*rotated_coefficients).transpose() * (*eriTensorSO).operator() *rotated_coefficients * *rotated_coefficients;
    for (int mu = 0; mu < 2 * nbfs; mu++){
        for (int nu = 0; nu < 2 * nbfs; nu++){
            for (int rho = 0; rho < 2 * nbfs; rho++){
                for (int sigma = 0; sigma < 2 * nbfs; sigma++){
                    for (int p = 0; p < 2 * nbfs; p++){
                        for (int q = 0; q < 2 * nbfs; q++){
                            for (int r = 0; r < 2 * nbfs; r++){
                                for (int s = 0; s < 2 * nbfs; s++){
                                    //rotated_two_electron_integrals(p,r,q,s) += (*rotated_coefficients)(p,mu) * (*rotated_coefficients)(q,nu) * ((*eriTensorSO)(mu,rho,nu,sigma)-(*eriTensorSO)(mu,sigma,nu,rho)) * (*rotated_coefficients)(rho,r) * (*rotated_coefficients)(sigma,s);
                                    //rotated_two_electron_integrals(p,r,q,s) += (*rotated_coefficients)(p,mu) * (*rotated_coefficients)(q,nu) * ((*eriTensorSO)(mu,rho,nu,sigma)) * (*rotated_coefficients)(rho,r) * (*rotated_coefficients)(sigma,s);
                                    rotated_two_electron_integrals(p,r,q,s) += (*rotated_coefficients)(mu,p) * (*rotated_coefficients)(nu,q) * ((*eriTensorSO)(mu,rho,nu,sigma)) * (*rotated_coefficients)(rho,r) * (*rotated_coefficients)(sigma,s);//this one doesnt switch order upon complex conjugate
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return rotated_two_electron_integrals;
}

double SpinOrbitalCCD::calculate_E_ccd(const Eigen::MatrixXd *one_particle_density, const TensorRank4 *two_particle_density, const Eigen::MatrixXd *rotated_one_electron_integrals, const TensorRank4 *rotated_two_electron_integrals){
    double OOEMP2 = 0.0;
    for(int p = 0; p < 2*nbfs; p++) {
        for(int q = 0; q < 2*nbfs; q++) {
            for(int r = 0; r < 2*nbfs; r++) {
                for(int s = 0; s < 2*nbfs; s++) {
                    OOEMP2 += 0.25 * ((*rotated_two_electron_integrals)(p,r,q,s) - (*rotated_two_electron_integrals)(p,s,q,r)) * (*two_particle_density)(p,r,q,s);
                }
            }
            OOEMP2+=(*rotated_one_electron_integrals)(p,q)*(*one_particle_density)(q,p);
        }
    }
    return OOEMP2;
}

//END OF SpinOrbitalCCD CLASS.