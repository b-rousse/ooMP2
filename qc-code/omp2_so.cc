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


//Spinorbital OMP2 Class additions below
OOSpinOrbitalMP2::OOSpinOrbitalMP2(const TensorRank4 *eriTensor, Eigen::MatrixXd SFCoeffs, const int nbfs, const int numocc, Eigen::VectorXd *Evals, Eigen::MatrixXd *H_core, const Eigen::MatrixXd *S, const double enuc): eriTensor(*eriTensor), SFCoeffs(SFCoeffs), nbfs(nbfs), numocc(numocc), Evals(*Evals), H_core(*H_core), S(*S), enuc(enuc) {

    double tol_E = 1e-12;
    double residconv = 1e-10;

    Eigen::MatrixXd Coeffs = Eigen::MatrixXd::Zero(2*nbfs,2*nbfs);
    for(int p = 0; p < 2*nbfs; p+=2) {//coefficient basis conversion
        for(int q = 0; q < 2*nbfs; q+=2) {//no p,q+1 or p+1, q terms as that would be alpha*beta=0
            Coeffs(p,q) = (SFCoeffs)(p/2,q/2);
            Coeffs(p+1,q+1) = (SFCoeffs)(p/2,q/2);
        }
    }
    
    const Eigen::MatrixXd canon_coeffs = Coeffs;

    TensorRank4 eriTensorSO = OOSpinOrbitalMP2::construct_so_ao_electron_integral_tensor();//this should be untouched AO tensor.
    Eigen::Tensor<double,4> standard_eri_tensor = OOSpinOrbitalMP2::experimental_copy_eriTensorSO_to_standard_tensor_format(eriTensorSO);
    Eigen::MatrixXd H_core_SO = OOSpinOrbitalMP2::fock_build_so(H_core);
    Eigen::MatrixXd one_electron_integrals = OOSpinOrbitalMP2::rotate_so_sized_matrix(&H_core_SO, &Coeffs);

    Eigen::MatrixXd P = Eigen::MatrixXd::Zero(2*nbfs,2*nbfs);//density reconstructed from coefficients: needed to construct fock matrix which is in turn needed for non-canonical MP2
    for(int i = 0; i < 2*nbfs; i++) {//construct P matrix
        for(int j = 0; j < 2*nbfs; j++) {
            for(int m = 0; m < 2*numocc; m++) {
                P(i,j) += (Coeffs)(i,m) * (Coeffs)(j,m);
            }
        }
    }

    Eigen::MatrixXd F_SO = Eigen::MatrixXd::Zero(2*nbfs,2*nbfs);
    F_SO = OOSpinOrbitalMP2::fock_build_sf(&P, &Coeffs);
    P.resize(0,0);
    TensorRank4 two_electron_integrals(2*nbfs,2*nbfs,2*nbfs,2*nbfs);
    two_electron_integrals = OOSpinOrbitalMP2::basic_convert_ERI_tensor_AO_to_soMO(&Coeffs);//Here, how do I reconcile calculating doubles with the oo format of generating tensor?
    double E_mp2_ee=0.0;
    int residcounterSO = 1;


    TensorRank4 doublesSO(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
    doublesSO.setZero();
    for(int i = 0; i < 2*numocc; i++){//first do MP2: equivalent to using residuals and update functions, as input doubles is 0 tensor.
        for(int j = 0; j < 2*numocc; j++){
            for(int a = 0; a < 2*nbfs-2*numocc; a++){
                for(int b = 0; b < 2*nbfs-2*numocc; b++){
                    doublesSO(i,a,j,b) = 0.25*(two_electron_integrals(i,a+2*numocc,j,b+2*numocc) - two_electron_integrals(i,b+2*numocc,j,a+2*numocc))/(F_SO(i,i)+F_SO(j,j)-F_SO(a+2*numocc,a+2*numocc)-F_SO(b+2*numocc,b+2*numocc));
                }
            }
        }
    }

    for(int i = 0; i < 2*numocc; i++) {//get MP2 energy
        for(int j = 0; j < 2*numocc; j++) {
            for(int a = 0; a < 2*nbfs - 2*numocc; a++) {
                for(int b = 0; b < 2*nbfs - 2*numocc; b++) {
                    E_mp2_ee += 0.25 * (two_electron_integrals(i,a+2*numocc,j,b+2*numocc) - two_electron_integrals(i,b+2*numocc,j,a+2*numocc)) * doublesSO(i,a,j,b);
                }
            }
        }
    }
    printf("  E_MP2_ee = %20.12f\n", E_mp2_ee);

    //START MP2 LOOP
    //
     int count_mp2 = 0;
     double E_mp2 = 0.0;
     std::cout << "MP2" << std::endl;
     while(residcounterSO > 0) {
        count_mp2++;
        residcounterSO = 0;
        TensorRank4 residualSO = OOSpinOrbitalMP2::calculate_residuals_so(&residcounterSO, residconv, &two_electron_integrals, &doublesSO, &F_SO);
        doublesSO = OOSpinOrbitalMP2::update_doubles_so(&doublesSO, &residualSO, &F_SO);
        Eigen::MatrixXd rdm1e_hf = OOSpinOrbitalMP2::build_one_particle_density_hf();
        Eigen::MatrixXd rdm1e_mp2 = OOSpinOrbitalMP2::build_one_particle_density_mp2(&doublesSO);
        Eigen::MatrixXd one_particle_density = OOSpinOrbitalMP2::build_total_one_particle_density(rdm1e_hf, rdm1e_mp2);
        TensorRank4 two_particle_density = OOSpinOrbitalMP2::build_two_particle_density(&doublesSO, rdm1e_hf, rdm1e_mp2);
        E_mp2 = OOSpinOrbitalMP2::calculate_E_oomp2(&one_particle_density, &two_particle_density, &one_electron_integrals, &two_electron_integrals);
        E_mp2 += enuc;
        printf("%3i        %20.12f          %5i\n", count_mp2, E_mp2,residcounterSO);
     }
    //END MP2 LOOP

    //Modifiable DIIS parameters
    //
     bool use_DIIS=true;
     double level_shift = 0.0; //How much to shift the denominator in the newton-raphson step. Can be helpful with tricky convergence cases. MHG recommends 0.4

     int DIIS_max_num_iters = 8;//Scuseria, Lee, Schaefer Chem Phys Lett 1896 recommend 8
     double DIIS_storage_threshhold = 1e-2;
     double DIIS_threshhold = 1e-2;
     bool earlybird = false;//This runs a step before loop starts, removing the mp2 amplitude from the picture for DIIS. Found to be helpful in certain circumstances.
     bool enforce_well_behaved_DIIS = true;
     std::string CN_handling;
     if(enforce_well_behaved_DIIS) {CN_handling = "reset";} //"shutoff" for permanent DIIS shutoff, "relax" to start DIIS relaxation scheme, "reset" for DIIS purge & immediate restart, "delay" for DIIS purge & delayed restart
     //if(DIIS_storage_threshhold > 1e-3) {earlybird=true;}
     bool ccpvdz = false;
     if(nbfs > 20) {ccpvdz = true;}
     bool checkpoint_assessment = true;
     bool print_diis_results = false;
    //end Modifiable DIIS parameters

    //unchangeable DIIS settings.
    //
     double diff_E = 0.9;
     double old_E = 0.0;
     double E_omp2= 0.0;
     int diiscount = -1;
     int count =-1;
     bool DIIS_time = false;
     int effective_DIIS_num_iters = 0;//for count < DIIS_max_num_iters, we want to use DIIS if energy threshhold is passed. So we need an expanding DIIS infrastructure that caps at DIIS_max_num_iters
     std::vector<Eigen::VectorXd> DIIS_error_vectors_t2;
     std::vector<Eigen::MatrixXd> DIIS_error_vectors_rot;
     std::vector<Eigen::MatrixXd> DIIS_orbital_rotation_parameters(0, Eigen::MatrixXd(2*nbfs, 2*nbfs));
     std::vector<TensorRank4> DIIS_Tensors(0, TensorRank4(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc));
     std::vector<double> DIIS_energies;
     Eigen::MatrixXd DIIS_error_matrix;

     TensorRank4 DIIS_doublesSO(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
     Eigen::MatrixXd DIIS_orbitalsSO = Eigen::MatrixXd::Zero(2*nbfs,2*nbfs);

     Eigen::MatrixXd orbital_gradient;
     Eigen::MatrixXd running_sum_orbital_rotation_parameters = Eigen::MatrixXd::Zero(2*nbfs, 2*nbfs);
     bool DIIS_store_switch = false;//to prevent deactivating DIIS if we go back above E threshhold
     bool MK_DIIS_time = true;
     int diiscount_at_reset = 0;
     bool recent_reset = false;
     bool DIIS_restart_given_time_to_be_used = true;
     int until_next_DIIS_restart = 0;
     int CN_DIIS_reset_delay = DIIS_max_num_iters - 1;
     int DIIS_reset_delay = 0;//let the code run a few pure theory runs before re-activating DIIS after reset. Changed to CN_DIIS_reset_delay if "relax" DIIS reset scheme is used.
    //end unchangeable DIIS settings


    //Tests for poor DIIS inputs
    //
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
    //end tests for poor DIIS inputs

    //
    //START OO LOOP
    //
    std::cout << "omp2: " << std::endl;
    std::cout << "Iteration             E_omp2            # residuals" << std::endl;
    /*
    if(earlybird) {
        count++;
        Eigen::MatrixXd one_particle_intermediate = OOSpinOrbitalMP2::construct_one_particle_intermediate(F_SO, doublesSO, two_electron_integrals, stanton_CCD);
        TensorRank4 two_particle_intermediate = OOSpinOrbitalMP2::construct_two_particle_intermediate(doublesSO, two_electron_integrals);
        TensorRank4 residualSO(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
        residualSO.setZero();
        residualSO = OOSpinOrbitalMP2::calculate_residuals_so(&residcounterSO, residconv, &two_electron_integrals, &doublesSO, &one_particle_intermediate, two_particle_intermediate);
        doublesSO = OOSpinOrbitalMP2::update_doubles_so(&doublesSO, &residualSO, &F_SO);
        E_ccd = OOSpinOrbitalMP2::canonical_E_ee_so(two_electron_integrals, doublesSO);
        diff_E = E_ccd - old_E;
        old_E = E_ccd;
        if(stanton_CCD){printf("%3i        %20.12f                           Energy step:   %9.2e    earlybird\n", count, E_ccd, diff_E);}
        else{printf("%3i        %20.12f            %i            Energy step:   %9.2e    earlybird\n", count, E_ccd, residcounterSO, diff_E);}
    }*/
    
    Eigen::MatrixXd Gen_fock = Eigen::MatrixXd::Zero(2*nbfs,2*nbfs);
    F_SO = Eigen::MatrixXd::Zero(2*nbfs, 2*nbfs);

    while(fabs(diff_E) > tol_E || residcounterSO > 0) {
        count++;
        for(int p = 0; p < 2*nbfs; p++){
            for(int q = 0; q < 2*nbfs; q++){
                F_SO(p,q) = one_electron_integrals(p,q);
                for(int i = 0; i < 2*numocc; i++){
                    F_SO(p,q) += two_electron_integrals(p,q,i,i) - two_electron_integrals(p,i,i,q);//this needs to be updateable.
                }
            }
        }

        if(use_DIIS && fabs(diff_E) < DIIS_storage_threshhold){
            DIIS_store_switch = true;//to prevent deactivating DIIS if we go back above E threshhold
        }
        if((DIIS_store_switch && diiscount == -1) || recent_reset) {//AT START OF DIIS. Will I have to get a meaningful orbital gradient before this..
            DIIS_error_vectors_t2.push_back(doublesSO.resizeR4TensortoVector(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc));
            //do something for rot? No, as its iterative construction doesn't overlap other iterations
        }
        //get doublesSO and check for convergence
        if(DIIS_time && MK_DIIS_time){
            TensorRank4 residualSO(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
            residualSO = OOSpinOrbitalMP2::calculate_residuals_so(&residcounterSO, residconv, &two_electron_integrals, &DIIS_doublesSO, &F_SO);
            doublesSO = OOSpinOrbitalMP2::update_doubles_so(&DIIS_doublesSO, &residualSO, &F_SO);
            Eigen::MatrixXd rdm1e_hf = OOSpinOrbitalMP2::build_one_particle_density_hf();
            Eigen::MatrixXd rdm1e_mp2 = OOSpinOrbitalMP2::build_one_particle_density_mp2(&DIIS_doublesSO);
            Eigen::MatrixXd one_particle_density = OOSpinOrbitalMP2::build_total_one_particle_density(rdm1e_hf, rdm1e_mp2);
            TensorRank4 two_particle_density = OOSpinOrbitalMP2::build_two_particle_density(&DIIS_doublesSO, rdm1e_hf, rdm1e_mp2);
            Gen_fock = OOSpinOrbitalMP2::construct_generalized_fock(&two_electron_integrals, &one_electron_integrals, &one_particle_density, &two_particle_density);
            orbital_gradient = OOSpinOrbitalMP2::compute_orbital_gradient(Gen_fock);
            Eigen::MatrixXd orbital_rotation_parameter = OOSpinOrbitalMP2::compute_orbital_rotation_parameter(orbital_gradient, F_SO, level_shift);
            running_sum_orbital_rotation_parameters = DIIS_orbital_rotation_parameters[diiscount] + orbital_rotation_parameter;
            Eigen::MatrixXd orbital_rotation_matrix = OOSpinOrbitalMP2::diis_newton_raphson_step(running_sum_orbital_rotation_parameters);
            //Eigen::MatrixXd orbital_rotation_matrix = OOSpinOrbitalMP2::compute_newton_raphson_step(&Gen_fock, &F_SO, level_shift);
            Coeffs = OOSpinOrbitalMP2::rotate_spin_orbital_coefficients(Coeffs, &orbital_rotation_matrix);
            one_electron_integrals = OOSpinOrbitalMP2::rotate_one_electron_integrals(&Coeffs, &H_core_SO);
            two_electron_integrals = OOSpinOrbitalMP2::rotate_two_electron_integrals_experimental(Coeffs, standard_eri_tensor);
            //two_electron_integrals = OOSpinOrbitalMP2::rotate_two_electron_integrals(Coeffs, eriTensorSO);
            E_omp2 = OOSpinOrbitalMP2::calculate_E_oomp2(&one_particle_density, &two_particle_density, &one_electron_integrals, &two_electron_integrals);
            E_omp2 += enuc;
            diff_E = E_omp2 - old_E;
            old_E = E_omp2;
            printf("%3i        %20.12f          %5i            Energy step:   %9.2e    DIIS\n", count, E_omp2, residcounterSO, diff_E);
            if (fabs(diff_E) < tol_E && residcounterSO == 0) {//technically not needed, as while loop handles it, but although ugly, it prevents waste this way.
                double true_E = 0.0;
                if (nbfs == 7) {true_E= -74.991464031377;}
                else if (ccpvdz) {true_E = -0.222564795889;}
                else {true_E = 0.0;}
                printf("Calculation completed in %i iterations. Final E: %20.12f. Target E: %20.12f. Difference in E: %1.1e\n", count, E_omp2, true_E, true_E - E_omp2);
                exit(EXIT_SUCCESS);
            }
            //if(unorthodox_error_construction){
                //if I did this here, I'd need to reformulate doubles update function, as running it currently affects DIIS_doublesSO
                //DIIS_error_vectors_t2.push_back(DIIS_doublesSO.resizeR4TensortoVector(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc));
            //}

        }
        else {
            TensorRank4 residualSO(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
            residualSO = OOSpinOrbitalMP2::calculate_residuals_so(&residcounterSO, residconv, &two_electron_integrals, &doublesSO, &F_SO);
            doublesSO = OOSpinOrbitalMP2::update_doubles_so(&doublesSO, &residualSO, &F_SO);
            Eigen::MatrixXd rdm1e_hf = OOSpinOrbitalMP2::build_one_particle_density_hf();
            Eigen::MatrixXd rdm1e_mp2 = OOSpinOrbitalMP2::build_one_particle_density_mp2(&doublesSO);
            Eigen::MatrixXd one_particle_density = OOSpinOrbitalMP2::build_total_one_particle_density(rdm1e_hf, rdm1e_mp2);
            TensorRank4 two_particle_density = OOSpinOrbitalMP2::build_two_particle_density(&doublesSO, rdm1e_hf, rdm1e_mp2);
            Gen_fock = OOSpinOrbitalMP2::construct_generalized_fock(&two_electron_integrals, &one_electron_integrals, &one_particle_density, &two_particle_density);
            orbital_gradient = OOSpinOrbitalMP2::compute_orbital_gradient(Gen_fock);
            Eigen::MatrixXd orbital_rotation_parameter = OOSpinOrbitalMP2::compute_orbital_rotation_parameter(orbital_gradient, F_SO, level_shift);
            running_sum_orbital_rotation_parameters = running_sum_orbital_rotation_parameters + orbital_rotation_parameter;
            Eigen::MatrixXd orbital_rotation_matrix = OOSpinOrbitalMP2::compute_newton_raphson_step(&Gen_fock, &F_SO, level_shift);
            Coeffs = OOSpinOrbitalMP2::rotate_spin_orbital_coefficients(Coeffs, &orbital_rotation_matrix);
            one_electron_integrals = OOSpinOrbitalMP2::rotate_one_electron_integrals(&Coeffs, &H_core_SO);//CHECK IF CORRECT H_core!
            two_electron_integrals = OOSpinOrbitalMP2::rotate_two_electron_integrals_experimental(Coeffs, standard_eri_tensor);//CHECK IF CORRECT ERITENSOR!
            //two_electron_integrals = OOSpinOrbitalMP2::rotate_two_electron_integrals(Coeffs, eriTensorSO);//CHECK IF CORRECT ERITENSOR!
            E_omp2 = OOSpinOrbitalMP2::calculate_E_oomp2(&one_particle_density, &two_particle_density, &one_electron_integrals, &two_electron_integrals);
            E_omp2 += enuc;
            diff_E = E_omp2 - old_E;
            old_E = E_omp2;
            printf("%3i        %20.12f          %5i            Energy step:   %9.2e\n", count, E_omp2,residcounterSO, diff_E);
            if (fabs(diff_E) < tol_E && residcounterSO == 0) {
                double true_E = 0.0;
                if (nbfs == 7) {true_E= -74.991464031377;}
                else if (ccpvdz) {true_E = -0.222564795889;}
                else {true_E = 0.0;}
                printf("Calculation completed in %i iterations. Final E: %20.12f. Target E: %20.12f. Difference in E: %1.1e\n", count, E_omp2, true_E, true_E - E_omp2);
                exit(EXIT_SUCCESS);
            }
        }
        //end get doublesSO and convergence check
        if(checkpoint_assessment){std::cout << "line " << __LINE__ << " reached." << std::endl;}

        //DIIS storage, cleanup, and logic board
        if(DIIS_store_switch && MK_DIIS_time){
            diiscount++;

            //DIIS storage and cleanup
            DIIS_energies.push_back(E_omp2);
            DIIS_Tensors.push_back(doublesSO);
            DIIS_orbital_rotation_parameters.push_back(running_sum_orbital_rotation_parameters);
            if (!DIIS_time) {//still storing pre-DIIS trigger
                //        if(diiscount == 0 || recent_reset) {
                if(diiscount == 0 || recent_reset) {
                    recent_reset = false;
                    DIIS_error_vectors_t2[diiscount] = DIIS_Tensors[diiscount].resizeR4TensortoVector(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc) - DIIS_error_vectors_t2[diiscount];
                    DIIS_error_vectors_rot.push_back(orbital_gradient);
                }
                else {
                    DIIS_error_vectors_t2.push_back(DIIS_Tensors[diiscount].resizeR4TensortoVector(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc) - DIIS_Tensors[diiscount - 1].resizeR4TensortoVector(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc)); 
                    DIIS_error_vectors_rot.push_back(orbital_gradient);
                }
            }
            else {//Now storage changes after DIIS has been triggered.
                DIIS_error_vectors_t2[diiscount] = DIIS_Tensors[diiscount].resizeR4TensortoVector(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc) - DIIS_error_vectors_t2[diiscount];//this looks weird but is er(i)=t(i)-t_interpolated(i-1), where t_interpolated(i-1) is the DIIS interpolated t that immediately led to t(i).
                DIIS_error_vectors_rot.push_back(orbital_gradient);
            }
            if(diiscount - diiscount_at_reset >= DIIS_max_num_iters){//trailing cleanup of previous iterates:only keep the needed! diiscount + 1?//unsure if need diiscount_at_reset here
                DIIS_error_vectors_t2[diiscount - DIIS_max_num_iters].resize(0);//CAREFUL: IF we change DIIS_max_num_iters upon reset, this cleanup routine will miss entries.
                DIIS_Tensors[diiscount - DIIS_max_num_iters].clear();
                DIIS_error_vectors_rot[diiscount - DIIS_max_num_iters].resize(0,0);
                DIIS_orbital_rotation_parameters[diiscount - DIIS_max_num_iters].resize(0,0);
            }
            //end DIIS storage and cleanup
            if(checkpoint_assessment){std::cout << "line " << __LINE__ << " reached." << std::endl;}

            //DIIS control flow, instruction flags
            if(fabs(diff_E) < DIIS_threshhold && --DIIS_reset_delay<=0){//example of short circuit evaluation: don't want to decrement DIIS_reset_delay without it being DIIS_time.
                DIIS_time = true;
            }

            if(DIIS_time && --until_next_DIIS_restart <=0) {DIIS_restart_given_time_to_be_used = true;}

            if(enforce_well_behaved_DIIS && effective_DIIS_num_iters == DIIS_max_num_iters && DIIS_restart_given_time_to_be_used){//make sure some DIIS gets done. also paves way for later, more advanced resets.
                double condition_number = OOSpinOrbitalMP2::compute_condition_number(effective_DIIS_num_iters, DIIS_error_matrix);
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
                            DIIS_error_vectors_t2[diiscount - i].resize(0);
                            DIIS_Tensors[diiscount - i].clear();
                            DIIS_error_vectors_rot[diiscount - i].resize(0,0);
                            DIIS_orbital_rotation_parameters[diiscount - i].resize(0,0);
                        }
                        DIIS_error_vectors_t2[diiscount] = DIIS_Tensors[diiscount].resizeR4TensortoVector(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
                        DIIS_error_vectors_rot[diiscount] = orbital_gradient;
                        recent_reset=true;
                    }
                    else if(CN_handling == "reset"){//When error matrix becomes ill-condtioned, shut off DIIS, do one step of non-DIIS, then begin reconstruction of DIIS tensors.
                        std::cout << "DIIS reset" << std::endl;
                        effective_DIIS_num_iters = 0;
                        diiscount_at_reset = diiscount;
                        DIIS_time = false;
                        for(int i = 1; i < DIIS_max_num_iters; i++){
                            DIIS_error_vectors_t2[diiscount - i].resize(0);
                            DIIS_Tensors[diiscount - i].clear();
                            DIIS_error_vectors_rot[diiscount-i].resize(0,0);
                            DIIS_orbital_rotation_parameters[diiscount - i].resize(0,0);
                        }
                        DIIS_error_vectors_t2[diiscount] = DIIS_Tensors[diiscount].resizeR4TensortoVector(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
                        DIIS_error_vectors_rot[diiscount] = orbital_gradient;
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
                            DIIS_error_vectors_t2[diiscount - i].resize(0);
                            DIIS_Tensors[diiscount - i].clear();
                            DIIS_error_vectors_rot[diiscount-i].resize(0,0);
                            DIIS_orbital_rotation_parameters[diiscount - i].resize(0,0);
                        }
                        DIIS_error_vectors_t2[diiscount] = DIIS_Tensors[diiscount].resizeR4TensortoVector(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
                        DIIS_error_vectors_rot[diiscount] = orbital_gradient;
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
            if(diiscount==0 && DIIS_orbital_rotation_parameters.size()==0){
                DIIS_orbital_rotation_parameters.push_back(running_sum_orbital_rotation_parameters);
            }
            //std::cout << "length of tensors (errors) vector : " << DIIS_Tensors.size() << " (" << DIIS_error_vectors_t2.size() << ")" <<std::endl;
            if(checkpoint_assessment){std::cout << "line " << __LINE__ << " reached." << std::endl;}
            for(int i = 0 ; i < effective_DIIS_num_iters; i++){
                for(int j = 0; j < effective_DIIS_num_iters; j++){
                    DIIS_error_matrix(i,j) = (DIIS_error_vectors_t2[i + diiscount + 1 - effective_DIIS_num_iters].transpose() * DIIS_error_vectors_t2[j + diiscount + 1 - effective_DIIS_num_iters]);//This bugger was all 0 for i,j < num_iters 
                    //DIIS_error_matrix(i,j) += (DIIS_error_vectors_rot[i + diiscount + 1 - effective_DIIS_num_iters] * DIIS_error_vectors_rot[j + diiscount + 1 - effective_DIIS_num_iters]).sum();//This bugger was all 0 for i,j < num_iters                 
                    DIIS_error_matrix(i,j) += (DIIS_error_vectors_rot[i + diiscount + 1 - effective_DIIS_num_iters].transpose() * DIIS_error_vectors_rot[j + diiscount + 1 - effective_DIIS_num_iters]).sum();//This bugger was all 0 for i,j < num_iters                 
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
            DIIS_orbitalsSO.setZero();
            if(checkpoint_assessment){std::cout << "line " << __LINE__ << " reached." << std::endl;}

            for (int s = 0; s < effective_DIIS_num_iters; s++ ) {
                for (auto i = 0; i < 2*numocc; i++) {
                    for (auto j = 0; j < 2*numocc; j++) {
                        for (auto a = 0; a < 2*nbfs-2*numocc; a++) {
                            for (auto b = 0; b < 2*nbfs-2*numocc; b++) {
                                DIIS_doublesSO(i,a,j,b) += x(s) * (DIIS_Tensors[s + diiscount - effective_DIIS_num_iters + 1])(i,a,j,b);
                            }
                        }
                    }
                }
                for(int p = 0; p < 2*nbfs; p++){
                    for (int q = 0; q < 2*nbfs; q++){
                        DIIS_orbitalsSO(p,q) += x(s) * (DIIS_orbital_rotation_parameters[s + diiscount - effective_DIIS_num_iters + 1])(p,q);
                    }
                }
                //DIIS_rotation_matrix_SO += x(s) * DIIS_rotation_matrices[s + diiscount - effective_DIIS_num_iters + 1];
            }

            if(checkpoint_assessment){std::cout << "line " << __LINE__ << " reached." << std::endl;}

            //if(!stanton_CCD){//DO THIS WAY FOR OMP2: IT REMOVES THE NEED TO STORE A NEW TENSOR = DIIS_doublesSO AND INSTEAD PUTS IT INTO doublesSO, BUT ONLY WORKS FOR RESIDUAL CONSTRUCTION
            //    doublesSO = DIIS_doublesSO;
            //    DIIS_doublesSO.clear();
            //    DIIS_error_vectors_t2.push_back(doublesSO.resizeR4TensortoVector(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc));
            //}
            DIIS_error_vectors_t2.push_back(DIIS_doublesSO.resizeR4TensortoVector(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc));
        }
        //end DIIS interpolation and storage of interpolated doubles tensor to new iteration's error matrix
    }
};

double OOSpinOrbitalMP2::compute_condition_number(const int dim1, const Eigen::MatrixXd &A){
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

Eigen::MatrixXd OOSpinOrbitalMP2::fock_build_sf(const Eigen::MatrixXd *P, const Eigen::MatrixXd *Coeffs) {//rename to fock_spinorbitalbuildforMP2
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

Eigen::MatrixXd OOSpinOrbitalMP2::rotate_so_sized_matrix(const Eigen::MatrixXd *matrix_to_rotate, const Eigen::MatrixXd *coefficients){
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

Eigen::MatrixXd OOSpinOrbitalMP2::fock_build_so(const Eigen::MatrixXd *F_mo) {
    Eigen::MatrixXd FockSO = Eigen::MatrixXd::Zero(2*nbfs, 2*nbfs);
    for(int p = 0; p < 2*nbfs; p+=2) {
        for(int q = 0; q < 2*nbfs; q+=2) {
            FockSO(p,q) = (*F_mo)(p/2,q/2);
            FockSO(p+1,q+1) = (*F_mo)(p/2,q/2);
        }
    }
    return FockSO;
}

TensorRank4 OOSpinOrbitalMP2::basic_convert_ERI_tensor_AO_to_soMO(const Eigen::MatrixXd *Coeffs) {//cut this in half, [p/2 will never give decimal, so I don't need different indices for the two tensor sizes]
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

TensorRank4 OOSpinOrbitalMP2::basic_convert_ERI_tensor_sfMO_to_soMO(const TensorRank4 *MP2Tensor) {//I could speed this up by setting to 0 rather than populating with 0.0
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

TensorRank4 OOSpinOrbitalMP2::calculate_residuals_so(int *residcounter, const double residconv, const TensorRank4 *two_electron_integral, const TensorRank4 *doubles, const Eigen::MatrixXd *F) {
    TensorRank4 residual(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
    residual.setZero();
    *residcounter=0;
        for(int i = 0; i < 2*numocc; i++) {
            for(int j = 0; j < 2*numocc; j++) {
                for(int a = 0; a < 2*nbfs-2*numocc; a++) {
                    for(int b = 0; b < 2*nbfs-2*numocc; b++) {
                        residual(i,a,j,b) = (*two_electron_integral)(i,a+2*numocc,j,b+2*numocc) - (*two_electron_integral)(i,b+2*numocc,j,a+2*numocc);//gbar^i,j_a,b
                        for(int k = 0; k < 2*numocc; k++) {
                            residual(i,a,j,b) += - (*F)(i,k) * (*doubles)(k,a,j,b) - (*F)(j,k) * (*doubles)(i,a,k,b);
                        }
                        for(int c = 0; c < 2*nbfs-2*numocc; c++) {
                            residual(i,a,j,b) += (*F)(c+2*numocc,a+2*numocc) * (*doubles)(i,c,j,b) + (*F)(c+2*numocc,b+2*numocc) * (*doubles)(i,a,j,c);
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

TensorRank4 OOSpinOrbitalMP2::update_doubles_so(TensorRank4 *doubles, const TensorRank4 *residual, const Eigen::MatrixXd *F){
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

Eigen::MatrixXd OOSpinOrbitalMP2::construct_generalized_fock(const TensorRank4 *eriTensorSO, const Eigen::MatrixXd *H_core_SO, const Eigen::MatrixXd *one_particle_density, const TensorRank4 *two_particle_density){
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

Eigen::MatrixXd OOSpinOrbitalMP2::build_one_particle_density_hf(){
    Eigen::MatrixXd rdm1e_hf = Eigen::MatrixXd::Zero(2*nbfs,2*nbfs);
    for (int i = 0; i < 2*numocc; i++) {
        rdm1e_hf(i,i) += 1.0;
    }
    return rdm1e_hf;
}

Eigen::MatrixXd OOSpinOrbitalMP2::build_one_particle_density_mp2(TensorRank4 *doubles){
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

Eigen::MatrixXd OOSpinOrbitalMP2::build_total_one_particle_density(const Eigen::MatrixXd &rdm1e_hf, const Eigen::MatrixXd &rdm1e_mp2){
    Eigen::MatrixXd one_particle_density = rdm1e_hf + rdm1e_mp2;
    
    return one_particle_density;
}


TensorRank4 OOSpinOrbitalMP2::build_two_particle_density(TensorRank4 *doubles, const Eigen::MatrixXd &rdm1e_hf, const Eigen::MatrixXd &rdm1e_mp2){
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

Eigen::MatrixXd OOSpinOrbitalMP2::compute_orbital_gradient(const Eigen::MatrixXd &generalized_fock){
    //calculate the orbital gradient, w. It's the numerator in kappa or x_vo in our lingo. in turn, the exponentiated skew of kappa, e^(kappa - kappa*), is the orbital rotation matrix.
    Eigen::MatrixXd w = Eigen::MatrixXd::Zero(2*nbfs, 2*nbfs);
    for ( int i = 0; i < 2*numocc; i++) {
        for ( int a = 2*numocc; a < 2*nbfs; a++ ) {
            w(a,i) = (generalized_fock(a,i) - generalized_fock(i,a)); //This is the orbital gradient, w.
        }
    }
    return w;
}

Eigen::MatrixXd OOSpinOrbitalMP2::compute_orbital_rotation_parameter(const Eigen::MatrixXd &w, const Eigen::MatrixXd &fso, double level_shift){//DO LEVEL SHIFTING???
    //calculate the orbital gradient, w. It's the numerator in kappa or x_vo in our lingo. in turn, the exponentiated skew of kappa, e^(kappa - kappa*), is the orbital rotation matrix.
    Eigen::MatrixXd x_vo = Eigen::MatrixXd::Zero(2*nbfs, 2*nbfs);
    for ( int i = 0; i < 2*numocc; i++) {
        for ( int a = 2*numocc; a < 2*nbfs; a++ ) {
            x_vo(a,i) = w(a,i)/(fso(i,i) - fso(a,a) - level_shift);//level shifting the denominator, the very approximate orbital Hessian, A. The numerator is the orbital gradient, w.
        }
    }
    return x_vo;
}

Eigen::MatrixXd OOSpinOrbitalMP2::diis_newton_raphson_step(const Eigen::MatrixXd &collective_rotation){
    Eigen::MatrixXd orbital_rotation_matrix_exponent = collective_rotation - collective_rotation.transpose();//this is uppercase kappa bar in 2013 Bozkaya OOCEPA (eqn 49)
    Eigen::MatrixXd orbital_rotation_matrix = orbital_rotation_matrix_exponent.exp();//build orbital rotation matrix. eqn 50 in 2013 Bozkaya OOCEPA
    return orbital_rotation_matrix;
}

//Compute the Newton-Raphson orbital rotation matrix
Eigen::MatrixXd OOSpinOrbitalMP2::compute_newton_raphson_step(const Eigen::MatrixXd *generalized_fock, const Eigen::MatrixXd *fso, double level_shift){
    //Eigen::MatrixXd step7_f(); // This is just the fock matrix in second quantization, and I can just pass to this function (or class if it ends up being inside one) the build_fock subroutine.
    Eigen::MatrixXd x_vo = Eigen::MatrixXd::Zero(2*nbfs, 2*nbfs);//calculate newton-raphson step
    for ( int i = 0; i < 2*numocc; i++) {
        for ( int a = 2*numocc; a < 2*nbfs; a++ ) {
            x_vo(a,i) = ((*generalized_fock)(a,i) - (*generalized_fock)(i,a))/((*fso)(i,i) - (*fso)(a,a) - level_shift);//level shifting the Hessian
        }
    }
    Eigen::MatrixXd orbital_rotation_matrix_exponent = x_vo - x_vo.transpose();//this is kappa in 2013 Bozkaya OOCEPA(0)
    Eigen::MatrixXd orbital_rotation_matrix = orbital_rotation_matrix_exponent.exp();//build orbital rotation matrix
    return orbital_rotation_matrix;
}

Eigen::MatrixXd OOSpinOrbitalMP2::rotate_spin_orbital_coefficients(Eigen::MatrixXd coefficients, const Eigen::MatrixXd *orbital_rotation_matrix){
    Eigen::MatrixXd rotated_coeffs = Eigen::MatrixXd::Zero(2*nbfs, 2*nbfs);
    rotated_coeffs = coefficients * *orbital_rotation_matrix;
    return rotated_coeffs;
}
//Step 10: recreate the one- and two-electron integrals using the rotate coefficients. Use one function Eigen::MatrixXd and another function TensorRank4.
//START WITH AO INTS AGAIN??

Eigen::MatrixXd OOSpinOrbitalMP2::rotate_one_electron_integrals(const Eigen::MatrixXd *rotated_coefficients, const Eigen::MatrixXd *h_core_so_sized){
    Eigen::MatrixXd rotated_one_electron_integrals = Eigen::MatrixXd::Zero(2*nbfs, 2*nbfs);
    //auto T = compute_1body_ints(shells, Operator::kinetic);
    rotated_one_electron_integrals = (*rotated_coefficients).transpose() * *h_core_so_sized * *rotated_coefficients;//check this isn't an aliasing issue: transposing a reference
    return rotated_one_electron_integrals;
    // compute nuclear-attraction integrals
    //Matrix V = compute_1body_ints(shells, Operator::nuclear, atoms);
    //will i need to change T and/or V? I'm not sure I do... I think I just take my AO built H (H_core + eri) (H_core = T+V)
}

//In conventional MP2, I don't change MO eri tensor after construction, so it's fine to convert to MO tensor then convert to spin orbital MO tensor.
//HOWEVER, in OOMP2, I change the eri tensor every iteration, so it seems smarter to convert AO tensor to spin orbital AO tensor, THEN to convert to MO with that iteration's coefficients.
//That way, I avoid having to "stretch out" the tensor on every iteration, as I start with the AO tensor in spin orbital basis.
//But, applicability to actual open-shell systems aside, isn't it faster to rotate the AO tensor in spin-free, THEN stretch to spin-orbital basis? 
//I JUST REMEMBERED, I need the AO tensor to be in spin-orbital basis to do the tensor rotation, as the rotation matrices are already in spin-orbital basis.
//THEREFORE, I will convert the AO tensor to spin-orbital AO tensor once, then keep it in memory and rotate it into new tensors every iteration.
//Those new tensors will go out of scope / be cleared, but the spin-orbital AO tensor will stay in memory, saving us the pain of reconstructing it with every iteration.
//Hold on. It's faster to reconstruct large memory items than hold them in memory.
TensorRank4 OOSpinOrbitalMP2::construct_so_ao_electron_integral_tensor(){
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

TensorRank4 OOSpinOrbitalMP2::rotate_two_electron_integrals_experimental(const Eigen::MatrixXd &rotated_coefficients, const Eigen::Tensor<double, 4> &standard_eri_tensor){
    Eigen::MatrixXd transposed_rotated_coefficients = rotated_coefficients.transpose();//need to transpose?
    Eigen::Tensor<double,4> std_eri_tensor = standard_eri_tensor;
    Eigen::Tensor<double,2> rotated_coefficients_tensor(2*nbfs,2*nbfs);
    for(int p = 0; p < 2*nbfs; p++) {
        for(int q = 0; q < 2*nbfs; q++) {
            rotated_coefficients_tensor(p,q) = rotated_coefficients(p,q);
        }
    }

    Eigen::array<Eigen::IndexPair<int>,1> product_dimensions = {Eigen::IndexPair<int>(0,0)};
    Eigen::Tensor<double,4> rot1 = std_eri_tensor.contract(rotated_coefficients_tensor, product_dimensions);
    product_dimensions = {Eigen::IndexPair<int>(0,0)};
    Eigen::Tensor<double,4> rot2 = rot1.contract(rotated_coefficients_tensor, product_dimensions);
    rot1.resize(0,0,0,0);
    product_dimensions = {Eigen::IndexPair<int>(0,0)};
    Eigen::Tensor<double,4> rot3 = rot2.contract(rotated_coefficients_tensor, product_dimensions);
    rot2.resize(0,0,0,0);
    product_dimensions = {Eigen::IndexPair<int>(0,0)};
    Eigen::Tensor<double,4> rot4 = rot3.contract(rotated_coefficients_tensor, product_dimensions);
    rot3.resize(0,0,0,0);

    //Eigen::array<Eigen::IndexPair<int>, 2> product_dimensions = {Eigen::IndexPair<int>(0, 0), Eigen::IndexPair<int>(1, 0) };
    //Eigen::Tensor<double,4> rot1 = std_eri_tensor.contract(rotated_coefficients_tensor, product_dimensions);
    //product_dimensions = {Eigen::IndexPair<int>(2, 1), Eigen::IndexPair<int>(3, 1) };//31 or 13?
    //Eigen::Tensor<double,4> rot2 = rot1.contract(rotated_coefficients_tensor, product_dimensions);

    TensorRank4 rotated_two_electron_integrals(2*nbfs,2*nbfs,2*nbfs,2*nbfs);
    for(int p = 0; p < 2*nbfs; p++) {
        for(int q = 0; q < 2*nbfs; q++) {
            for(int r = 0; r < 2*nbfs; r++) {
                for(int s = 0; s < 2*nbfs; s++) {
                    rotated_two_electron_integrals(p,q,r,s) = rot4(p,q,r,s);
                }
            }
        }
    }    
    return rotated_two_electron_integrals;
}

Eigen::Tensor<double,4> OOSpinOrbitalMP2::experimental_copy_eriTensorSO_to_standard_tensor_format(const TensorRank4 &eriTensorSO){
    Eigen::Tensor<double,4> standard_eri_tensor(2*nbfs,2*nbfs,2*nbfs,2*nbfs);
    for(int p = 0; p < 2*nbfs; p++) {
        for(int q = 0; q < 2*nbfs; q++) {
            for(int r = 0; r < 2*nbfs; r++) {
                for(int s = 0; s < 2*nbfs; s++) {
                    standard_eri_tensor(p,q,r,s) = eriTensorSO(p,q,r,s);
                }
            }
        }
    }
    return standard_eri_tensor;
}

TensorRank4 OOSpinOrbitalMP2::rotate_two_electron_integrals(const Eigen::MatrixXd &rotated_coefficients, const TensorRank4 &eriTensorSO){
    //rotated_two_electron_integrals += (*rotated_coefficients).transpose() * (*rotated_coefficients).transpose() * (*eriTensorSO).operator() *rotated_coefficients * *rotated_coefficients;
    TensorRank4 tensor_step_mu(2*nbfs, 2*nbfs, 2*nbfs, 2*nbfs);
    tensor_step_mu.setZero();
    for (int p = 0; p < 2 * nbfs; p++){
         for (int q = 0; q < 2 * nbfs; q++){
            for (int r = 0; r < 2 * nbfs; r++){
                for (int s = 0; s < 2 * nbfs; s++){
                    for (int mu = 0; mu < 2 * nbfs; mu++){
                        tensor_step_mu(p,r,q,s) += rotated_coefficients(mu,p) * eriTensorSO(mu,r,q,s);
                    }
                }
            }
        }
    }
    TensorRank4 tensor_step_nu(2*nbfs, 2*nbfs, 2*nbfs, 2*nbfs);
    tensor_step_nu.setZero();
    for (int p = 0; p < 2 * nbfs; p++){
         for (int q = 0; q < 2 * nbfs; q++){
            for (int r = 0; r < 2 * nbfs; r++){
                for (int s = 0; s < 2 * nbfs; s++){
                    for (int nu = 0; nu < 2 * nbfs; nu++){
                        tensor_step_nu(p,r,q,s) += rotated_coefficients(nu,q) * tensor_step_mu(p,r,nu,s);
                    }
                }
            }
        }
    }
    tensor_step_mu.clear();
    TensorRank4 tensor_step_rho(2*nbfs, 2*nbfs, 2*nbfs, 2*nbfs);
    tensor_step_rho.setZero();
    for (int p = 0; p < 2 * nbfs; p++){
         for (int q = 0; q < 2 * nbfs; q++){
            for (int r = 0; r < 2 * nbfs; r++){
                for (int s = 0; s < 2 * nbfs; s++){
                    for (int rho = 0; rho < 2 * nbfs; rho++){
                        tensor_step_rho(p,r,q,s) += rotated_coefficients(rho,r) * tensor_step_nu(p,rho,q,s);
                    }
                }
            }
        }
    }
    tensor_step_nu.clear();
    TensorRank4 rotated_two_electron_integrals(2*nbfs, 2*nbfs, 2*nbfs, 2*nbfs);
    rotated_two_electron_integrals.setZero();
    for (int p = 0; p < 2 * nbfs; p++){
         for (int q = 0; q < 2 * nbfs; q++){
            for (int r = 0; r < 2 * nbfs; r++){
                for (int s = 0; s < 2 * nbfs; s++){
                    for (int sigma = 0; sigma < 2 * nbfs; sigma++){
                        rotated_two_electron_integrals(p,r,q,s) += rotated_coefficients(sigma,s) * tensor_step_rho(p,r,q,sigma);
                    }
                }
            }
        }
    }
    return rotated_two_electron_integrals;
}

double OOSpinOrbitalMP2::calculate_E_oomp2(const Eigen::MatrixXd *one_particle_density, const TensorRank4 *two_particle_density, const Eigen::MatrixXd *rotated_one_electron_integrals, const TensorRank4 *rotated_two_electron_integrals){
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
//END OF SpinOrbital OMP2 CLASS.

