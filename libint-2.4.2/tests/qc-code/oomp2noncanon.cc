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
Eigen::IOFormat FockFmt(6);


//SpinFreeMP2 Class additions below.
SpinFreeMP2::SpinFreeMP2(const TensorRank4 *eriTensor, Eigen::MatrixXd *Coeffs, const int nbfs, const int numocc, const Eigen::VectorXd *Evals, const Eigen::MatrixXd *H_core, const Eigen::MatrixXd *S): eriTensor(*eriTensor), Coeffs(*Coeffs), nbfs(nbfs), numocc(numocc), Evals(*Evals), H_core(*H_core), S(*S) {
    int numMP2steps = 40;
    double residconv = 0.0000000000001;

    //*Coeffs = Test_Spinfree_Noncanonical_MP2(nbfs,Coeffs);//comment this out to instead get coefficients from HF, this was to test non-canonical orbital coefficients.
    /* for(int i =0; i < nbfs; i++) {
        for(int j = 0; j< nbfs; j++) {
            if(abs((*Coeffs)(i,j)) < 0.00000000001) {
                (*Coeffs)(i,j) = 0;
            }
        }
    } */
    //std::cout << "Canonical MO coefficient Matrix: " << std::endl << (*Coeffs).format(FockFmt) << std::endl;
    
    Eigen::MatrixXd P = Eigen::MatrixXd::Zero(nbfs,nbfs);//density reconstructed from coefficients: needed to construct fock matrix which is in turn needed for non-canonical MP2
    for(int i = 0; i < nbfs; i++) {
        for(int j = 0; j < nbfs; j++) {
            for(int m = 0; m < numocc; m++) {
                P(i,j) += (*Coeffs)(i,m) * (*Coeffs)(j,m);
            }
        }
    }
    Eigen::MatrixXd F = Eigen::MatrixXd::Zero(nbfs,nbfs);  
    F = fock_spinfreebuildforMP2(&P);
    /* for(int i =0; i < nbfs; i++) {
        for(int j = 0; j< nbfs; j++) {
            if(abs(F(i,j)) < 0.00000000001) {
                (F)(i,j) = 0;
            }
        }
    } */
    //std::cout << std::endl << "Fock matrix from Coeffs " << std::endl << F << std::endl <<std::endl;
    P.resize(0,0);
    TensorRank4 MP2Tensor(nbfs,nbfs,nbfs,nbfs);
    MP2Tensor = SpinFreeMP2::Basic_convert_ERI_Tensor_AOtospinfreeMO();
    TensorRank4 doubles(numocc, nbfs-numocc, numocc, nbfs-numocc);
    doubles.setZero();
    TensorRank4 residual(numocc, nbfs-numocc, numocc, nbfs-numocc);
    std::cout << "Iteration       EMP2        residcounter of last step" << std::endl;
    double EMP2;
    int residcounter;
    for(int s = 1; s < numMP2steps; s++) {
        residual.setZero();
        residual = SpinFreeMP2::Calculate_MP2_residuals(&residcounter, residconv, &MP2Tensor, &doubles, &F);
        doubles = SpinFreeMP2::Update_MP2_doubles(&doubles, &residual, &F);
        EMP2 = SpinFreeMP2::Spinfree_EMP2(&MP2Tensor, &doubles);
        //EMP2 = Canonical_EMP2_Spinfree(nbfs, numocc, &MP2Tensor, Evals);

        if (residcounter == 0) {break;}
        if (residcounter > 0 && s == numMP2steps - 1) {
            std::cout << "Error: Unable to converge doubles in non-canonical MP2. Increase numMP2steps." << std::endl;
            exit(EXIT_FAILURE);
        }
        std::cout << s << "            " << EMP2 << "            " << residcounter << std::endl;
    }

    std::cout << "BEN: TO ACCESS THE EMP2 USE THIS TERM" << SpinFreeMP2::Spinfree_EMP2(&MP2Tensor, &doubles) << std::endl;
}

Eigen::MatrixXd SpinFreeMP2::fock_spinfreebuildforMP2(const Eigen::MatrixXd *P) {

  Eigen::MatrixXd F_ao(nbfs, nbfs);

    for (auto mu = 0; mu < nbfs; mu++) {
        for (auto nu = 0; nu < nbfs; nu++) {
            double integral = 0.0;
            for (auto sigma = 0; sigma < nbfs; sigma++) {
                for (auto lamda = 0; lamda < nbfs; lamda++) {
                    integral += (*P)(lamda,sigma)*(2.0*(eriTensor)(mu,nu,sigma,lamda)-1.0*(eriTensor)(mu,lamda,sigma,nu));
                }
            }
        F_ao(mu,nu) = (H_core)(mu,nu) + integral;
        }
    }

    Eigen::MatrixXd F_mo = Eigen::MatrixXd::Zero(nbfs,nbfs);
    
    for (int i = 0; i < nbfs; i++) {
        for(int j = 0; j < nbfs; j++) {
            for(int k = 0; k < nbfs; k++) {
                for(int l = 0; l < nbfs; l++){
                    F_mo(i,j) += (Coeffs)(l,i) * F_ao(l,k) * (Coeffs)(k,j);//Make the first coeffs complex conjugate, but then new data type required: INDICES ARE ALREADY CORRECTLY ORDERED
                }
            }
        }
    }

  return F_mo;
}

TensorRank4 SpinFreeMP2::Basic_convert_ERI_Tensor_AOtospinfreeMO() {
    TensorRank4 TensorStepl(nbfs, nbfs, nbfs, nbfs); //make a tensor rank 4 to store the two electron integrals--will simplify to compound indexing later
    TensorStepl.setZero();
    for(int s = 0; s < nbfs; s++) {
        for(int i = 0; i < nbfs; i++) {
            for(int j = 0; j < nbfs; j++) {
                for(int k = 0; k < nbfs; k++) {
                    for(int l = 0; l < nbfs; l++) {
                        TensorStepl(i,j,k,s) += (Coeffs)(l,s) * (eriTensor)(i,j,k,l);
                    }
                }
            }
        }
    }

    TensorRank4 TensorStepk(nbfs, nbfs, nbfs, nbfs); //make a tensor rank 4 to store the two electron integrals--will simplify to compound indexing later
    TensorStepk.setZero();
    for(int r = 0; r < nbfs; r++) {
        for(int i = 0; i < nbfs; i++) {
            for(int j = 0; j < nbfs; j++) {
                for(int k = 0; k < nbfs; k++) {
                    for(int l = 0; l < nbfs; l++) {
                        TensorStepk(i,j,r,l) += (Coeffs)(k,r) * TensorStepl(i,j,k,l);
                    }
                }
            }
        }
    }

    //TensorStepl = Eigen::Tensor<double, 4>(0,0,0,0);
    TensorStepl.clear();
    TensorRank4 TensorStepj(nbfs, nbfs, nbfs, nbfs); //make a tensor rank 4 to store the two electron integrals--will simplify to compound indexing later
    TensorStepj.setZero();
    for(int q = 0; q < nbfs; q++) {
        for(int i = 0; i < nbfs; i++) { 
            for(int j = 0; j < nbfs; j++) {
                for(int k = 0; k < nbfs; k++) {
                    for(int l = 0; l < nbfs; l++) {
                        TensorStepj(i,q,k,l) += (Coeffs)(j,q) * TensorStepk(i,j,k,l);
                    }
                }
            }
        }
    }

    TensorStepk.clear();
    TensorRank4 MP2Tensor(nbfs, nbfs, nbfs, nbfs); //make a tensor rank 4 to store the two electron integrals--will simplify to compound indexing later
    MP2Tensor.setZero();
    for(int p = 0; p < nbfs; p++) {
        for(int i = 0; i < nbfs; i++) {
            for(int j = 0; j < nbfs; j++) {
                for(int k = 0; k < nbfs; k++) {
                    for(int l = 0; l < nbfs; l++) {
                        MP2Tensor(p,j,k,l) += (Coeffs)(i,p) * TensorStepj(i,j,k,l);
                    }
                }
            }
        }
    }
    return MP2Tensor;
}

double SpinFreeMP2::Canonical_EMP2_Spinfree(const TensorRank4 *MP2Tensor, const Eigen::VectorXd *Fockevals){
    double EMP2 = 0.0;
    for(int i = 0; i < numocc; i++) {
        for(int j = 0; j < numocc; j++) {
            for(int k = numocc; k < nbfs; k++) {
                for(int l = numocc; l < nbfs; l++) {
                    EMP2 += ((*MP2Tensor)(i,k,j,l) * (2.0 * (*MP2Tensor)(i,k,j,l) - (*MP2Tensor)(i,l,j,k)))/((*Fockevals)(i,i) + (*Fockevals)(j,j) - (*Fockevals)(k,k) - (*Fockevals)(l,l));
                }
            }
        }
    }
    return EMP2;
}

double SpinFreeMP2::Spinfree_EMP2(const TensorRank4 *MP2Tensor, const TensorRank4 *doubles){
    double EMP2 = 0.0;
    for(int i = 0; i < numocc; i++) {
        for(int j = 0; j < numocc; j++) {
            for(int a = 0; a < nbfs-numocc; a++) {
                for(int b = 0; b < nbfs-numocc; b++) {
                    EMP2 += (2*(*MP2Tensor)(i,a+numocc,j,b+numocc) - (*MP2Tensor)(i,b+numocc,j,a+numocc)) * (*doubles)(i,a,j,b);
                }
            }
        }
    }
    return EMP2;
}

TensorRank4 SpinFreeMP2::Calculate_MP2_residuals(int *residcounter, const double residconv, const TensorRank4 *MP2Tensor, const TensorRank4 *doubles, const Eigen::MatrixXd *F) {
    TensorRank4 residual(numocc, nbfs-numocc, numocc, nbfs-numocc);
    residual.setZero();
    *residcounter=0;
        for(int i = 0; i < numocc; i++) {
            for(int j = 0; j < numocc; j++) {
                for(int a = 0; a < nbfs-numocc; a++) {
                    for(int b = 0; b < nbfs-numocc; b++) {
                        residual(i,a,j,b) = (*MP2Tensor)(i,a+numocc,j,b+numocc);
                        for(int k = 0; k < numocc; k++) {
                            residual(i,a,j,b) += - (*F)(i,k) * (*doubles)(k,a,j,b) - (*F)(j,k) * (*doubles)(i,a,k,b);
                        }
                        for(int c = 0; c < nbfs-numocc; c++) {
                            residual(i,a,j,b) += (*F)(c+numocc,a+numocc) * (*doubles)(i,c,j,b) + (*F)(c+numocc,b+numocc) * (*doubles)(i,a,j,c);
                        }
                        if (abs(residual(i,a,j,b)) > residconv) {
                            *residcounter += 1;
                        }
                    }
                }
            }
        }
    return residual;
}

TensorRank4 SpinFreeMP2::Update_MP2_doubles(TensorRank4 *doubles, const TensorRank4 *residual, const Eigen::MatrixXd *F){
    for(int i = 0; i < numocc; i++) {
        for(int j = 0; j < numocc; j++) {
            for(int a = 0; a < nbfs-numocc; a++) {
                for(int b = 0; b < nbfs-numocc; b++) {
                    (*doubles)(i,a,j,b) += (*residual)(i,a,j,b)/((*F)(i,i) + (*F)(j,j) - (*F)(a+numocc,a+numocc) - (*F)(b+numocc,b+numocc));
                }
            }
        }
    }
    return *doubles;
}

#if 0
/*Eigen::MatrixXd SpinFreeMP2::Test_Spinfree_Noncanonical_MP2() {//Test the code with localized MOs on water; easiest to get from GAMESS with LOCAL keyword.
    for(int i =0; i < nbfs; i++) {
        for(int j = 0; j< nbfs; j++) {
            if(abs((Coeffs)(i,j)) < 0.000000001) {
                (Coeffs)(i,j) = 0;
            }
        }
    }
    std::cout << "Canonical MO coefficient Matrix: " << std::endl << (Coeffs).format(FockFmt) << std::endl;
    Eigen::MatrixXd CanonicalCoeff(nbfs,nbfs);
    CanonicalCoeff=Coeffs;
    //std::ifstream lmo_input("qc-code/water-ccpvdz-fullMOs.txt", std::ios::in);
    //std::ifstream lmo_input("qc-code/water-ccpvdz-fullMOs-gaussian.txt", std::ios::in);
    std::ifstream lmo_input("qc-code/water-sto3g-fullMOs-gaussian.txt", std::ios::in);
    //std::ifstream lmo_input("qc-code/water-ccpvdz-LMOs.txt", std::ios::in);
    //std::ifstream lmo_input("qc-code/water-sto3g-fullMOs-from-GAMESS.txt", std::ios::in);
    //std::ifstream lmo_input("qc-code/water-sto3g-LMOs-from-GAMESS.txt", std::ios::in);
    double coeffentry;
    int j = 0;
    int i = 0;
    //add quality check here, in the event that the input matrix is smaller than it should be. Currently, my code only catches if it's too long.
    while(lmo_input >> coeffentry) {//even though each line of lmo_input has many entries, only one will be depleted at a time iwht a single <<.
    //while will pull the next entry of lmo_input into a when it reaches the end of the commands inside the loop 
        (Coeffs)(i,j) = coeffentry;
        j++;//first update the column index, consistent with the manner in which the matrix was stored and >> reads (by line, not column.)
        if(j == nbfs) {
            j = 0;
            i++;//once we reach the end of the row, reset the index of the column and increase by one the index of the row.
        }
        if(j == nbfs && i == nbfs) {//if this is caught, there seem to be more than nbf^2 entries in the matrix you're trying to read.
            std::cout << "Error while reading test coefficient matrix. Make sure input matrix is properly formatted." << std::endl;
            exit(EXIT_FAILURE);
        }
    }

    std::cout << std::endl << "GAMESS MO Coefficient matrix: " << std::endl << (Coeffs).format(FockFmt) << std::endl<< std::endl;
    lmo_input.close();
    Eigen::MatrixXd Coeffdiff(nbfs,nbfs);
    Eigen::MatrixXd basistransform(nbfs,nbfs);
    basistransform.setIdentity();
    basistransform(10,10) = 0;
    basistransform(11,11) = 0;
    basistransform(12,12) = 0;
    basistransform(13,13) = 0;
    basistransform(14,14) = 0;
    basistransform(10,12) = 1;
    basistransform(11,13) = 1;
    basistransform(12,10) = 1;
    basistransform(13,14) = 1;
    basistransform(14,11) = 1;
    //    std::cout << "transformation matrix " <<std::endl << basistransform << std::endl;
    //Coeffs= basistransform*(Coeffs);

    std::cout << std::endl << "Transformed GAMESS MO Coefficient matrix " << std::endl << (Coeffs).format(FockFmt) << std::endl<< std::endl<< std::endl;
    std::cout << std::endl << "LIBINT Canonical MO Coefficient matrix: " << std::endl << CanonicalCoeff.format(FockFmt) << std::endl<< std::endl;

    Coeffdiff =  CanonicalCoeff.cwiseAbs() - (Coeffs).cwiseAbs();
    for(int i =0; i < nbfs; i++) {
        for(int j = 0; j< nbfs; j++) {
            if(abs(Coeffdiff(i,j)) < 0.000001) {
                (Coeffdiff)(i,j) = 0;
            }
        }
    }
    std::cout << "difference between Canonical MO coefficient matrices (LIBINT-GAMESS)" << std::endl << Coeffdiff << std::endl;
    return Coeffs;
}*/

//double RunMP2noncanon(const TensorRank4 *eriTensor, const Eigen::MatrixXd *Coeffs, const int nbfs, const int numocc, const Eigen::VectorXd *Evals, const Eigen::MatrixXd *H_core, const Eigen::MatrixXd *S) {
double RunMP2spinfreenoncanon(const TensorRank4 *eriTensor, Eigen::MatrixXd *Coeffs, const int nbfs, const int numocc, const Eigen::VectorXd *Evals, const Eigen::MatrixXd *H_core, const Eigen::MatrixXd *S) {
    int numMP2steps = 40;
    double residconv = 0.0000000000001;

    //*Coeffs = Test_Spinfree_Noncanonical_MP2(nbfs,Coeffs);//comment this out to instead get coefficients from HF, this was to test non-canonical orbital coefficients.
    /* for(int i =0; i < nbfs; i++) {
        for(int j = 0; j< nbfs; j++) {
            if(abs((*Coeffs)(i,j)) < 0.00000000001) {
                (*Coeffs)(i,j) = 0;
            }
        }
    } */
    std::cout << "Canonical MO coefficient Matrix: " << std::endl << (*Coeffs).format(FockFmt) << std::endl;
    
    Eigen::MatrixXd P = Eigen::MatrixXd::Zero(nbfs,nbfs);//density reconstructed from coefficients: needed to construct fock matrix which is in turn needed for non-canonical MP2
    for(int i = 0; i < nbfs; i++) {
        for(int j = 0; j < nbfs; j++) {
            for(int m = 0; m < numocc; m++) {
                P(i,j) += (*Coeffs)(i,m) * (*Coeffs)(j,m);
            }
        }
    }

    Eigen::MatrixXd F = Eigen::MatrixXd::Zero(nbfs,nbfs);  
    F = fock_spinfreebuildforMP2(nbfs,&P,Coeffs,H_core,eriTensor);
    /* for(int i =0; i < nbfs; i++) {
        for(int j = 0; j< nbfs; j++) {
            if(abs(F(i,j)) < 0.00000000001) {
                (F)(i,j) = 0;
            }
        }
    } */
    std::cout << std::endl << "Fock matrix from Coeffs " << std::endl << F << std::endl <<std::endl;
    P.resize(0,0);
    TensorRank4 MP2Tensor(nbfs,nbfs,nbfs,nbfs);
    MP2Tensor = Basic_convert_ERI_Tensor_AOtospinfreeMO(nbfs, numocc, Coeffs, eriTensor);
    TensorRank4 doubles(numocc, nbfs-numocc, numocc, nbfs-numocc);
    doubles.setZero();
    TensorRank4 residual(numocc, nbfs-numocc, numocc, nbfs-numocc);
    std::cout << "Iteration       EMP2        residcounter of last step" << std::endl;
    double EMP2;
    int residcounter;
    for(int s = 1; s < numMP2steps; s++) {
        residual.setZero();
        residual = Calculate_MP2_residuals(&residcounter, residconv, numocc, nbfs, &MP2Tensor, &doubles, &F);
        doubles = Update_MP2_doubles(numocc, nbfs, &doubles, &residual, &F);
        //EMP2 = Spinfree_EMP2(numocc, nbfs, &MP2Tensor, &doubles);
        EMP2 = Canonical_EMP2_Spinfree(nbfs, numocc, &MP2Tensor, Evals);

        if (residcounter == 0) {break;}
        if (residcounter > 0 && s == numMP2steps - 1) {
            std::cout << "Error: Unable to converge doubles in non-canonical MP2. Increase numMP2steps." << std::endl;
            exit(EXIT_FAILURE);
        }
        std::cout << s << "            " << EMP2 << "            " << residcounter << std::endl;
    }

    return EMP2;
}
#endif
//END OF SpinFreeMP2 CLASS



//SpinOrbitalMP2 Class additions below
//with the parameters passed in the initialization the line below, run the following code upon instantialization of this class.
SpinOrbitalMP2::SpinOrbitalMP2(const TensorRank4 *eriTensor, Eigen::MatrixXd *Coeffs, const int nbfs, const int numocc, const Eigen::VectorXd *Evals, const Eigen::MatrixXd *H_core, const Eigen::MatrixXd *S): eriTensor(*eriTensor), Coeffs(*Coeffs), nbfs(nbfs), numocc(numocc), Evals(*Evals), H_core(*H_core), S(*S) {
    int numMP2steps = 100;
    double residconv = 0.00000000001;
    Eigen::MatrixXd P = Eigen::MatrixXd::Zero(nbfs,nbfs);//density reconstructed from coefficients: needed to construct fock matrix which is in turn needed for non-canonical MP2
    for(int i = 0; i < nbfs; i++) {
        for(int j = 0; j < nbfs; j++) {
            for(int m = 0; m < numocc; m++) {
                P(i,j) += (*Coeffs)(i,m) * (*Coeffs)(j,m);
            }
        }
    }
    std::cout << "P Matrix: " << std::endl << P << std::endl;

    Eigen::MatrixXd F = Eigen::MatrixXd::Zero(nbfs,nbfs);  
    Eigen::MatrixXd F_SO = Eigen::MatrixXd::Zero(2*nbfs,2*nbfs); 
    F = SpinOrbitalMP2::fock_spinfreebuildforMP2(&P);
    P.resize(0,0);
    TensorRank4 MP2Tensor(nbfs,nbfs,nbfs,nbfs);
    MP2Tensor = SpinOrbitalMP2::Basic_convert_ERI_Tensor_AOtospinfreeMO();
    TensorRank4 MP2TensorSO(2*nbfs,2*nbfs,2*nbfs,2*nbfs);
    MP2TensorSO = SpinOrbitalMP2::Basic_convert_ERI_Tensor_SpinfreeMOtoSpinorbitalMO(&MP2Tensor);
    F_SO = SpinOrbitalMP2::fock_spinorbitalbuildforMP2(&F);
    // for(int i =0; i < 2*nbfs; i++) {
    //     for(int j = 0; j < 2*nbfs; j++) {
    //         if(abs(F_SO(i,j)) < 0.000000001) {
    //             (F_SO)(i,j) = 0;
    //         }
    //     }
    // } 
    //std::cout << "SO Fock matrix ? :" <<std::endl << F_SO << std::endl << std::endl;
    //TensorRank4 doubles(numocc, nbfs-numocc, numocc, nbfs-numocc);
    TensorRank4 doublesSO(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
    //doubles.setZero();
    doublesSO.setZero();
    //TensorRank4 residual(numocc, nbfs-numocc, numocc, nbfs-numocc);
    TensorRank4 residualSO(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
    std::cout << "Iteration         EMP2SO        residcounterSO" << std::endl;
    //std::cout << "Iteration       EMP2      EMP2SO        residcounter of last step        residcounterSO" << std::endl;
    //double EMP2;
    double EMP2SO;
    //int residcounter;
    int residcounterSO;
    for(int s = 1; s < numMP2steps; s++) {
        residualSO.setZero();
        residualSO = SpinOrbitalMP2::Calculate_MP2_residualsspinorbital(&residcounterSO, residconv, &MP2TensorSO, &doublesSO, &F_SO);
        doublesSO = SpinOrbitalMP2::Update_MP2_doublesspinorbital(&doublesSO, &residualSO, &F_SO);
        EMP2SO = SpinOrbitalMP2::Spinorbital_EMP2(&MP2TensorSO, &doublesSO);
        if (residcounterSO == 0) {break;}
        if (residcounterSO > 0 && s == numMP2steps - 1) {
            std::cout << "Error: Unable to converge doubles in non-canonical MP2. Increase numMP2steps." << std::endl;
            exit(EXIT_FAILURE);
        }
        std::cout << s << "            " <<  EMP2SO << "        " <<  residcounterSO << std::endl;
    }
    std::cout << "BEN: TO ACCESS THE EMP2 USE THIS TERM: " << SpinOrbitalMP2::Spinorbital_EMP2(&MP2TensorSO, &doublesSO) << std::endl;
};

Eigen::MatrixXd SpinOrbitalMP2::fock_spinfreebuildforMP2(const Eigen::MatrixXd *P) {
    Eigen::MatrixXd F_ao(nbfs, nbfs);
    for (auto mu = 0; mu < nbfs; mu++) {
        for (auto nu = 0; nu < nbfs; nu++) {
            double integral = 0.0;
            for (auto sigma = 0; sigma < nbfs; sigma++) {
                for (auto lamda = 0; lamda < nbfs; lamda++) {
                    integral += (*P)(lamda,sigma)*(2.0*(eriTensor)(mu,nu,sigma,lamda)-1.0*(eriTensor)(mu,lamda,sigma,nu));
                }
            }
        F_ao(mu,nu) = (H_core)(mu,nu) + integral;
        }
    }

    Eigen::MatrixXd F_mo = Eigen::MatrixXd::Zero(nbfs,nbfs);
    for (int i = 0; i < nbfs; i++) {
        for(int j = 0; j < nbfs; j++) {
            for(int k = 0; k < nbfs; k++) {
                for(int l = 0; l < nbfs; l++){
                    F_mo(i,j) += (Coeffs)(l,i) * F_ao(l,k) * (Coeffs)(k,j);//Make the first coeffs complex conjugate, but then new data type required: INDICES ARE ALREADY CORRECTLY ORDERED
                }
            }
        }
    }
    return F_mo;
}

Eigen::MatrixXd SpinOrbitalMP2::fock_spinorbitalbuildforMP2(const Eigen::MatrixXd *F_mo) {
    Eigen::MatrixXd FockSO = Eigen::MatrixXd::Zero(2*nbfs, 2*nbfs);
    for(int p = 0; p < 2*nbfs; p+=2) {
        for(int q = 0; q < 2*nbfs; q+=2) {
            for(int r = 0; r < nbfs; r++) {
                for(int s = 0; s < nbfs; s++) {
                    if(p/2==r && q/2==s) {
                        FockSO(p,q) = (*F_mo)(r,s);
                        FockSO(p,q+1) = 0.0;
                        FockSO(p+1,q) = 0.0;
                        FockSO(p+1,q+1) = (*F_mo)(r,s);
                    }
                }
            }
        }
    }
    return FockSO;
}

TensorRank4 SpinOrbitalMP2::Basic_convert_ERI_Tensor_AOtospinfreeMO() {
    TensorRank4 TensorStepl(nbfs, nbfs, nbfs, nbfs); //make a tensor rank 4 to store the two electron integrals--will simplify to compound indexing later
    TensorStepl.setZero();
    for(int s = 0; s < nbfs; s++) {
        for(int i = 0; i < nbfs; i++) {
            for(int j = 0; j < nbfs; j++) {
                for(int k = 0; k < nbfs; k++) {
                    for(int l = 0; l < nbfs; l++) {
                        TensorStepl(i,j,k,s) += (Coeffs)(l,s) * (eriTensor)(i,j,k,l);
                    }
                }
            }
        }
    }

    TensorRank4 TensorStepk(nbfs, nbfs, nbfs, nbfs); //make a tensor rank 4 to store the two electron integrals--will simplify to compound indexing later
    TensorStepk.setZero();
    for(int r = 0; r < nbfs; r++) {
        for(int i = 0; i < nbfs; i++) {
            for(int j = 0; j < nbfs; j++) {
                for(int k = 0; k < nbfs; k++) {
                    for(int l = 0; l < nbfs; l++) {
                        TensorStepk(i,j,r,l) += (Coeffs)(k,r) * TensorStepl(i,j,k,l);
                    }
                }
            }
        }
    }

    //TensorStepl = Eigen::Tensor<double, 4>(0,0,0,0);
    TensorStepl.clear();
    TensorRank4 TensorStepj(nbfs, nbfs, nbfs, nbfs); //make a tensor rank 4 to store the two electron integrals--will simplify to compound indexing later
    TensorStepj.setZero();
    for(int q = 0; q < nbfs; q++) {
        for(int i = 0; i < nbfs; i++) { 
            for(int j = 0; j < nbfs; j++) {
                for(int k = 0; k < nbfs; k++) {
                    for(int l = 0; l < nbfs; l++) {
                        TensorStepj(i,q,k,l) += (Coeffs)(j,q) * TensorStepk(i,j,k,l);
                    }
                }
            }
        }
    }

    TensorStepk.clear();
    TensorRank4 MP2Tensor(nbfs, nbfs, nbfs, nbfs); //make a tensor rank 4 to store the two electron integrals--will simplify to compound indexing later
    MP2Tensor.setZero();
    for(int p = 0; p < nbfs; p++) {
        for(int i = 0; i < nbfs; i++) {
            for(int j = 0; j < nbfs; j++) {
                for(int k = 0; k < nbfs; k++) {
                    for(int l = 0; l < nbfs; l++) {
                        MP2Tensor(p,j,k,l) += (Coeffs)(i,p) * TensorStepj(i,j,k,l);
                    }
                }
            }
        }
    }
    return MP2Tensor;
}

TensorRank4 SpinOrbitalMP2::Basic_convert_ERI_Tensor_SpinfreeMOtoSpinorbitalMO(const TensorRank4 *MP2Tensor) {//I could speed this up by setting to 0 rather than populating with 0.0
    TensorRank4 MP2TensorSO(2*nbfs, 2*nbfs, 2*nbfs, 2*nbfs);
    for(int p = 0; p < 2*nbfs; p+=2) {
        for(int q = 0; q < 2*nbfs; q+=2) {
            for(int r = 0; r < 2*nbfs; r+=2) {
                for(int s = 0; s < 2*nbfs; s+=2) {
                    for(int i = 0; i < nbfs; i++) {
                        for(int j = 0; j < nbfs; j++) {
                            for(int k = 0; k < nbfs; k++) {
                                for(int l = 0; l < nbfs; l++) {
                                    if(p/2==i && q/2==j && r/2==k && s/2 ==l) {
                                        MP2TensorSO(p,q,r,s) = (*MP2Tensor)(i,j,k,l);
                                        MP2TensorSO(p+1,q,r,s) = 0.0;
                                        MP2TensorSO(p,q+1,r,s) = 0.0;
                                        MP2TensorSO(p,q,r+1,s) = 0.0;
                                        MP2TensorSO(p,q,r,s+1) = 0.0;
                                        MP2TensorSO(p+1,q+1,r,s) = (*MP2Tensor)(i,j,k,l);
                                        MP2TensorSO(p+1,q,r+1,s) = 0.0;
                                        MP2TensorSO(p+1,q,r,s+1) = 0.0;
                                        MP2TensorSO(p,q+1,r+1,s) = 0.0;
                                        MP2TensorSO(p,q+1,r,s+1) = 0.0;
                                        MP2TensorSO(p,q,r+1,s+1) = (*MP2Tensor)(i,j,k,l);
                                        MP2TensorSO(p+1,q+1,r+1,s) = 0.0;                    
                                        MP2TensorSO(p+1,q+1,r,s+1) = 0.0;
                                        MP2TensorSO(p+1,q,r+1,s+1) = 0.0;
                                        MP2TensorSO(p,q+1,r+1,s+1) = 0.0;
                                        MP2TensorSO(p+1,q+1,r+1,s+1) = (*MP2Tensor)(i,j,k,l);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return MP2TensorSO;
}

double SpinOrbitalMP2::Canonical_EMP2_Spinorbital(const TensorRank4 *MP2Tensor, const Eigen::MatrixXd *CanFock){
    double EMP2SO = 0.0;
    for(int i = 0; i < 2*numocc; i++) {
        for(int j = 0; j < 2*numocc; j++) {
            for(int a = 2*numocc; a < 2*nbfs; a++) {
                for(int b = 2*numocc; b < 2*nbfs; b++) {
                    EMP2SO += 0.25 * (((*MP2Tensor)(i,a,j,b) - (*MP2Tensor)(i,b,j,a)) * ((*MP2Tensor)(i,a,j,b) - (*MP2Tensor)(i,b,j,a)))/((*CanFock)(i,i) + (*CanFock)(j,j) - (*CanFock)(a,a) - (*CanFock)(b,b));
                }
            }
        }
    }
    return EMP2SO;
}

double SpinOrbitalMP2::Spinorbital_EMP2(const TensorRank4 *MP2Tensor, const TensorRank4 *doubles){
    double EMP2 = 0.0;
    for(int i = 0; i < 2*numocc; i++) {
        for(int j = 0; j < 2*numocc; j++) {
            for(int a = 0; a < 2*nbfs - 2*numocc; a++) {
                for(int b = 0; b < 2*nbfs - 2*numocc; b++) {
                    EMP2 += 0.25 * ((*MP2Tensor)(i,a+2*numocc,j,b+2*numocc) - (*MP2Tensor)(i,b+2*numocc,j,a+2*numocc)) * (*doubles)(i,a,j,b);
                }
            }
        }
    }
    return EMP2;
}

TensorRank4 SpinOrbitalMP2::Calculate_MP2_residualsspinorbital(int *residcounter, const double residconv, const TensorRank4 *MP2Tensor, const TensorRank4 *doubles, const Eigen::MatrixXd *F) {
    TensorRank4 residual(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
    residual.setZero();
    *residcounter=0;
        for(int i = 0; i < 2*numocc; i++) {
            for(int j = 0; j < 2*numocc; j++) {
                for(int a = 0; a < 2*nbfs-2*numocc; a++) {
                    for(int b = 0; b < 2*nbfs-2*numocc; b++) {
                        residual(i,a,j,b) = (*MP2Tensor)(i,a+2*numocc,j,b+2*numocc) - (*MP2Tensor)(i,b+2*numocc,j,a+2*numocc);//gbar^i,j_a,b
                        for(int k = 0; k < 2*numocc; k++) {
                            residual(i,a,j,b) += - (*F)(i,k) * (*doubles)(k,a,j,b) - (*F)(j,k) * (*doubles)(i,a,k,b);
                        }
                        for(int c = 0; c < 2*nbfs-2*numocc; c++) {
                            residual(i,a,j,b) += (*F)(c+2*numocc,a+2*numocc) * (*doubles)(i,c,j,b) + (*F)(c+2*numocc,b+2*numocc) * (*doubles)(i,a,j,c);
                        }
                        if (abs(residual(i,a,j,b)) > residconv) {
                            *residcounter += 1;
                        }
                    }
                }
            }
        }
    return residual;
}

TensorRank4 SpinOrbitalMP2::Update_MP2_doublesspinorbital(TensorRank4 *doubles, const TensorRank4 *residual, const Eigen::MatrixXd *F){
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
//END OF SpinOrbitalMP2 CLASS.

//Figure how to make this a class later, possible one that inherits from the respective MP2 class (regarding spin). To make it smarter to avoid recalculating stuff, may have to restructure MP2 class... 
//Using the doubles tensor, build the one and two-particle density matrices for OO-MP2
//For now, this is all in spin orbital basis.

OOSpinOrbitalMP2::OOSpinOrbitalMP2(const TensorRank4 *eriTensor, Eigen::MatrixXd SFCoeffs, const int nbfs, const int numocc, Eigen::VectorXd *Evals, Eigen::MatrixXd *H_core, const Eigen::MatrixXd *S, const double enuc): eriTensor(*eriTensor), SFCoeffs(SFCoeffs), nbfs(nbfs), numocc(numocc), Evals(*Evals), H_core(*H_core), S(*S), enuc(enuc) {

    double E_diff_convergence = 0.0000001;
    int numMP2steps = 100;
    int numOOMP2steps = 30;
    double residconv = 0.00000000001;

    Eigen::MatrixXd Coeffs = Eigen::MatrixXd::Zero(2*nbfs,2*nbfs);
    for(int p = 0; p < 2*nbfs; p+=2) {
        for(int q = 0; q < 2*nbfs; q+=2) {
            for(int r = 0; r < nbfs; r++) {
                for(int s = 0; s < nbfs; s++) {
                    if(p/2==r && q/2==s) {
                        Coeffs(p,q) = (SFCoeffs)(r,s);
                        Coeffs(p+1,q+1) = (SFCoeffs)(r,s);
                    }
                }
            }
        }
    }
    
    TensorRank4 eriTensorSO = OOSpinOrbitalMP2::construct_spinorbital_ao_electron_integral_tensor(eriTensor);//this should be untouched AO tensor.

    TensorRank4 doublesSO(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
    doublesSO.setZero();//PUT INSIDE OR OUTSIDE ss LOOP? OUTSIDE.
    Eigen::MatrixXd H_core_SO = OOSpinOrbitalMP2::fock_spinorbitalbuildforMP2(H_core);
    Eigen::MatrixXd one_electron_integrals = OOSpinOrbitalMP2::rotate_so_sized_matrix(&H_core_SO, &Coeffs);

    //
    //START OO LOOP
    //
    std::cout << "Iteration         EMP2SO        residcounterSO" << std::endl;
    Eigen::MatrixXd P = Eigen::MatrixXd::Zero(2*nbfs,2*nbfs);//density reconstructed from coefficients: needed to construct fock matrix which is in turn needed for non-canonical MP2
    for(int i = 0; i < 2*nbfs; i++) {
        for(int j = 0; j < 2*nbfs; j++) {
            for(int m = 0; m < 2*numocc; m++) {
                P(i,j) += (Coeffs)(i,m) * (Coeffs)(j,m);
            }
        }
    }
    Eigen::MatrixXd F_SO = Eigen::MatrixXd::Zero(2*nbfs,2*nbfs);
    F_SO = OOSpinOrbitalMP2::fock_spinfreebuildforMP2(&P, &Coeffs);
    P.resize(0,0);
    TensorRank4 two_electron_integrals(2*nbfs,2*nbfs,2*nbfs,2*nbfs);
    two_electron_integrals = OOSpinOrbitalMP2::Basic_convert_ERI_Tensor_AOtospinorbitalMO(&Coeffs);//Here, how do I reconcile calculating doubles with the oo format of generating tensor?
    double EMP2SO=0.0;
    int residcounterSO = 1;
    TensorRank4 residualSO(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
    residualSO.setZero();
    residualSO = OOSpinOrbitalMP2::Calculate_MP2_residualsspinorbital(&residcounterSO, residconv, &two_electron_integrals, &doublesSO, &F_SO);
    doublesSO = OOSpinOrbitalMP2::Update_MP2_doublesspinorbital(&doublesSO, &residualSO, &F_SO);
    for(int i = 0; i < 2*numocc; i++) {
        for(int j = 0; j < 2*numocc; j++) {
            for(int a = 0; a < 2*nbfs - 2*numocc; a++) {
                for(int b = 0; b < 2*nbfs - 2*numocc; b++) {
                    EMP2SO += 0.25 * (two_electron_integrals(i,a+2*numocc,j,b+2*numocc) - two_electron_integrals(i,b+2*numocc,j,a+2*numocc)) * doublesSO(i,a,j,b);
                }
            }
        }
    }
    printf("  E_MP2_ee = %20.12f\n", EMP2SO);

    int count = 0;
    double diff_E = 1.0;
    double tol_E = 1e-8;
    double old_E = 0.0;
    double OOEMP2SO= 0.0;

    std::cout << "MP2" << std::endl;
    while(residcounterSO > 0) {
        count++;
        residcounterSO = 0;
        residualSO.setZero();
        residualSO = OOSpinOrbitalMP2::Calculate_MP2_residualsspinorbital(&residcounterSO, residconv, &two_electron_integrals, &doublesSO, &F_SO);
        doublesSO = OOSpinOrbitalMP2::Update_MP2_doublesspinorbital(&doublesSO, &residualSO, &F_SO);
        Eigen::MatrixXd rdm1e_hf = OOSpinOrbitalMP2::build_one_particle_density_hf();
        Eigen::MatrixXd rdm1e_mp2 = OOSpinOrbitalMP2::build_one_particle_density_mp2(&doublesSO);
        Eigen::MatrixXd one_particle_density = OOSpinOrbitalMP2::build_total_one_particle_density(rdm1e_hf, rdm1e_mp2);
        
        //std::cout << " one particle density: " << std::endl << one_particle_density << std::endl;
        //std::cout << " one electron integral: " << std::endl << one_electron_integrals << std::endl;
        TensorRank4 two_particle_density = OOSpinOrbitalMP2::build_two_particle_density(&doublesSO, rdm1e_hf, rdm1e_mp2);
        //EMP2SO = enuc;
        //EMP2SO += OOSpinOrbitalMP2::Spinorbital_EMP2(&MP2TensorSO, &two_particle_density, &one_electron_integrals, &one_particle_density);
        OOEMP2SO = OOSpinOrbitalMP2::calculate_E_oomp2(&one_particle_density, &two_particle_density, &one_electron_integrals, &two_electron_integrals);
        OOEMP2SO += enuc;

        printf("%i        %20.12f          %i\n", count, OOEMP2SO,residcounterSO);
        //std::cout << count << "            " <<  EMP2SO << "        " << OOEMP2SO << "        "  <<  residcounterSO << std::endl;
        if (count == numMP2steps - 1) {
            std::cout << "Error: Unable to converge doubles in non-canonical MP2. Increase numMP2steps." << std::endl;
            exit(EXIT_FAILURE);
        }
    }

    std::cout << "OOMP2 method" << std::endl;
    Eigen::MatrixXd Gen_fock = Eigen::MatrixXd::Zero(2*nbfs,2*nbfs);
    F_SO = Eigen::MatrixXd::Zero(2*nbfs, 2*nbfs);

    double EOOMP2SO =0.0;
    double EOOMP2SO_old = 0.0;
    doublesSO.setZero();
    residualSO.setZero();
    count = 0;
    double diff_E_NEO_OMP2 = 1.0;
    
    //std::cout << "OOMP2" << std::endl;
    while(fabs(diff_E_NEO_OMP2) > E_diff_convergence){
        //doublesSO.setZero();//PUT INSIDE OR OUTSIDE ss LOOP? OUTSIDE.
        count++;
        for(int p = 0; p < 2*nbfs; p++){
            for(int q = 0; q < 2*nbfs; q++){
                F_SO(p,q) = one_electron_integrals(p,q);
                for(int i = 0; i < 2*numocc; i++){
                    F_SO(p,q) += two_electron_integrals(p,q,i,i) - two_electron_integrals(p,i,i,q);//this needs to be updateable.
                }
            }
        }
        //std::cout << "f_so: " << std::endl << F_SO << std::endl;
        residcounterSO = 0;
        residualSO = OOSpinOrbitalMP2::Calculate_MP2_residualsspinorbital(&residcounterSO, residconv, &two_electron_integrals, &doublesSO, &F_SO);
        doublesSO = OOSpinOrbitalMP2::Update_MP2_doublesspinorbital(&doublesSO, &residualSO, &F_SO);
        Eigen::MatrixXd rdm1e_hf = OOSpinOrbitalMP2::build_one_particle_density_hf();
        Eigen::MatrixXd rdm1e_mp2 = OOSpinOrbitalMP2::build_one_particle_density_mp2(&doublesSO);
        Eigen::MatrixXd one_particle_density = OOSpinOrbitalMP2::build_total_one_particle_density(rdm1e_hf, rdm1e_mp2);
        TensorRank4 two_particle_density = OOSpinOrbitalMP2::build_two_particle_density(&doublesSO, rdm1e_hf, rdm1e_mp2);

        //std::cout << "one particle density: " << std::endl << one_particle_density << std::endl;        
        //std::cout << "two particle density: " << std::endl << two_particle_density << std::endl;
        //Gen_fock = OOSpinOrbitalMP2::construct_generalized_fock(&MP2TensorSO, &one_electron_integrals, &one_particle_density, &two_particle_density);//SHOULD eriTensorSO BE MP2TensorSO? SHOULD H_core_SO be H_core_SO rotated by input coeffs??
        Gen_fock = OOSpinOrbitalMP2::construct_generalized_fock(&two_electron_integrals, &one_electron_integrals, &one_particle_density, &two_particle_density);
        std::cout << "generalized f_so: " << std::endl << Gen_fock << std::endl;

        //H_core_SO.resize(0,0);
        Eigen::MatrixXd orbital_rotation_matrix = OOSpinOrbitalMP2::compute_newton_raphson_step(&Gen_fock, &F_SO);
        //std::cout << "orbital_rotation_matrix : " << std::endl << orbital_rotation_matrix << std::endl;
        //std::cout << "Old Coeff Matrix: " << std::endl << Coeffs << std::endl;
        //Eigen::MatrixXd TempCoeffs = Eigen::MatrixXd::Zero(2*nbfs,2*nbfs);//INEFFICIENT
        Coeffs = OOSpinOrbitalMP2::rotate_spin_orbital_coefficients(Coeffs, &orbital_rotation_matrix);

        std::cout << "Coeffs: " << std::endl << Coeffs << std::endl;

        //Coeffs = TempCoeffs;
        //TempCoeffs.resize(0,0);
        //std::cout << "New Coeff Matrix: " << std::endl << Coeffs << std::endl;
        one_electron_integrals = OOSpinOrbitalMP2::rotate_one_electron_integrals(&Coeffs, &H_core_SO);//CHECK IF CORRECT H_core!
        two_electron_integrals = OOSpinOrbitalMP2::rotate_two_electron_integrals(&Coeffs, &eriTensorSO);//CHECK IF CORRECT ERITENSOR!
        //Eigen::MatrixXd testone_electron_integrals = OOSpinOrbitalMP2::rotate_so_sized_matrix(&H_core_SO, &Coeffs);
        //Eigen::MatrixXd one_elec_integrals_diff = testone_electron_integrals - one_electron_integrals;
        //std::cout << "one elec integral diff:" << std::endl << one_elec_integrals_diff << std::endl;
        EOOMP2SO = OOSpinOrbitalMP2::calculate_E_oomp2(&one_particle_density, &two_particle_density, &one_electron_integrals, &two_electron_integrals);
        EOOMP2SO += enuc;
        double E_diff = EOOMP2SO - EOOMP2SO_old;
        EOOMP2SO_old = EOOMP2SO;
        printf("Energy of OOMP2 at step %i is %.9lf\n", count, EOOMP2SO);
        if(abs(E_diff) < E_diff_convergence) {
            printf("OO converged in %i steps. OO-MP2 Energy is %.9lf\n", count, EOOMP2SO);
            break;
        }
        if(abs(E_diff) > E_diff_convergence && count == numOOMP2steps - 1){
            std::cout << "ERROR: Orbital optimization failed to converge. Increase number of iterations" << std::endl;
            exit(EXIT_FAILURE);
        }
    }
};




Eigen::MatrixXd OOSpinOrbitalMP2::fock_spinfreebuildforMP2(const Eigen::MatrixXd *P, const Eigen::MatrixXd *Coeffs) {//rename to fock_spinorbitalbuildforMP2
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
            for(int r = 0; r < nbfs; r++) {
                for(int s = 0; s < nbfs; s++) {
                    if(p/2==r && q/2==s) {
                        F_so(p,q) = (F_ao)(r,s);
                        F_so(p+1,q+1) = (F_ao)(r,s);
                    }
                }
            }
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

Eigen::MatrixXd OOSpinOrbitalMP2::fock_spinorbitalbuildforMP2(const Eigen::MatrixXd *F_mo) {
    Eigen::MatrixXd FockSO = Eigen::MatrixXd::Zero(2*nbfs, 2*nbfs);
    for(int p = 0; p < 2*nbfs; p+=2) {
        for(int q = 0; q < 2*nbfs; q+=2) {
            for(int r = 0; r < nbfs; r++) {
                for(int s = 0; s < nbfs; s++) {
                    if(p/2==r && q/2==s) {
                        FockSO(p,q) = (*F_mo)(r,s);
                        FockSO(p+1,q+1) = (*F_mo)(r,s);
                    }
                }
            }
        }
    }
    return FockSO;
}

TensorRank4 OOSpinOrbitalMP2::Basic_convert_ERI_Tensor_AOtospinorbitalMO(const Eigen::MatrixXd *Coeffs) {//cut this in half, [p/2 will never give decimal, so I don't need different indices for the two tensor sizes]
    TensorRank4 eriTensorSObasis(2*nbfs, 2*nbfs, 2*nbfs, 2*nbfs);
    eriTensorSObasis.setZero();
    for(int p = 0; p < 2*nbfs; p+=2) {
        for(int q = 0; q < 2*nbfs; q+=2) {
            for(int r = 0; r < 2*nbfs; r+=2) {
                for(int s = 0; s < 2*nbfs; s+=2) {
                    for(int i = 0; i < nbfs; i++) {
                        for(int j = 0; j < nbfs; j++) {
                            for(int k = 0; k < nbfs; k++) {
                                for(int l = 0; l < nbfs; l++) {
                                    if(p/2==i && q/2==j && r/2==k && s/2 ==l) {
                                        eriTensorSObasis(p,q,r,s) = (eriTensor)(i,j,k,l);
                                        eriTensorSObasis(p+1,q+1,r,s) = (eriTensor)(i,j,k,l);
                                        eriTensorSObasis(p,q,r+1,s+1) = (eriTensor)(i,j,k,l);
                                        eriTensorSObasis(p+1,q+1,r+1,s+1) = (eriTensor)(i,j,k,l);
                                    }
                                }
                            }
                        }
                    }
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

TensorRank4 OOSpinOrbitalMP2::Basic_convert_ERI_Tensor_SpinfreeMOtoSpinorbitalMO(const TensorRank4 *MP2Tensor) {//I could speed this up by setting to 0 rather than populating with 0.0
    TensorRank4 MP2TensorSO(2*nbfs, 2*nbfs, 2*nbfs, 2*nbfs);
    MP2TensorSO.setZero();
    for(int p = 0; p < 2*nbfs; p+=2) {
        for(int q = 0; q < 2*nbfs; q+=2) {
            for(int r = 0; r < 2*nbfs; r+=2) {
                for(int s = 0; s < 2*nbfs; s+=2) {
                    for(int i = 0; i < nbfs; i++) {
                        for(int j = 0; j < nbfs; j++) {
                            for(int k = 0; k < nbfs; k++) {
                                for(int l = 0; l < nbfs; l++) {
                                    if(p/2==i && q/2==j && r/2==k && s/2 ==l) {
                                        MP2TensorSO(p,q,r,s) = (*MP2Tensor)(i,j,k,l);
                                        MP2TensorSO(p+1,q+1,r,s) = (*MP2Tensor)(i,j,k,l);
                                        MP2TensorSO(p,q,r+1,s+1) = (*MP2Tensor)(i,j,k,l);
                                        MP2TensorSO(p+1,q+1,r+1,s+1) = (*MP2Tensor)(i,j,k,l);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return MP2TensorSO;
}

double OOSpinOrbitalMP2::Canonical_EMP2_Spinorbital(const TensorRank4 *MP2Tensor, const Eigen::MatrixXd *CanFock){
    double EMP2SO = 0.0;
    for(int i = 0; i < 2*numocc; i++) {
        for(int j = 0; j < 2*numocc; j++) {
            for(int a = 2*numocc; a < 2*nbfs; a++) {
                for(int b = 2*numocc; b < 2*nbfs; b++) {
                    EMP2SO += 0.25 * (((*MP2Tensor)(i,a,j,b) - (*MP2Tensor)(i,b,j,a)) * ((*MP2Tensor)(i,a,j,b) - (*MP2Tensor)(i,b,j,a)))/((*CanFock)(i,i) + (*CanFock)(j,j) - (*CanFock)(a,a) - (*CanFock)(b,b));
                }
            }
        }
    }
    return EMP2SO;
}
//the following is flawed as it does not span over pqrs but rather ijab.
double OOSpinOrbitalMP2::Spinorbital_EMP2(const TensorRank4 *MP2Tensor, const TensorRank4 *doubles, const Eigen::MatrixXd *one_electron_integrals, const Eigen::MatrixXd *one_particle_density){
    double EMP2 = 0.0;
    for(int i = 0; i < 2*numocc; i++) {
        for(int j = 0; j < 2*numocc; j++) {
            for(int a = 0; a < 2*nbfs - 2*numocc; a++) {
                for(int b = 0; b < 2*nbfs - 2*numocc; b++) {
                    EMP2 += 0.25 * ((*MP2Tensor)(i,a+2*numocc,j,b+2*numocc) - (*MP2Tensor)(i,b+2*numocc,j,a+2*numocc)) * (*doubles)(i,a,j,b);
                }
            }
        }
    }
    for(int p = 0; p < 2*nbfs; p++){
        for(int q = 0; q < 2*nbfs; q++){
            EMP2 += (*one_electron_integrals)(p,q)*(*one_particle_density)(p,q);
        }
    }
    return EMP2;
}

TensorRank4 OOSpinOrbitalMP2::Calculate_MP2_residualsspinorbital(int *residcounter, const double residconv, const TensorRank4 *MP2Tensor, const TensorRank4 *doubles, const Eigen::MatrixXd *F) {
    TensorRank4 residual(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
    residual.setZero();
    *residcounter=0;
        for(int i = 0; i < 2*numocc; i++) {
            for(int j = 0; j < 2*numocc; j++) {
                for(int a = 0; a < 2*nbfs-2*numocc; a++) {
                    for(int b = 0; b < 2*nbfs-2*numocc; b++) {
                        residual(i,a,j,b) = (*MP2Tensor)(i,a+2*numocc,j,b+2*numocc) - (*MP2Tensor)(i,b+2*numocc,j,a+2*numocc);//gbar^i,j_a,b
                        for(int k = 0; k < 2*numocc; k++) {
                            residual(i,a,j,b) += - (*F)(i,k) * (*doubles)(k,a,j,b) - (*F)(j,k) * (*doubles)(i,a,k,b);
                        }
                        for(int c = 0; c < 2*nbfs-2*numocc; c++) {
                            residual(i,a,j,b) += (*F)(c+2*numocc,a+2*numocc) * (*doubles)(i,c,j,b) + (*F)(c+2*numocc,b+2*numocc) * (*doubles)(i,a,j,c);
                        }
                        if (abs(residual(i,a,j,b)) > residconv) {
                            *residcounter += 1;
                        }
                    }
                }
            }
        }
    return residual;
}

TensorRank4 OOSpinOrbitalMP2::Update_MP2_doublesspinorbital(TensorRank4 *doubles, const TensorRank4 *residual, const Eigen::MatrixXd *F){
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
        for (int j = 0; j < 2*numocc; j++) {
            if( i == j ){
                rdm1e_hf(j,i) += 1.0;
            }
        }
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

//Compute the Newton-Raphson orbital rotation matrix
Eigen::MatrixXd OOSpinOrbitalMP2::compute_newton_raphson_step(const Eigen::MatrixXd *generalized_fock, const Eigen::MatrixXd *fso){
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

Eigen::MatrixXd OOSpinOrbitalMP2::rotate_spin_orbital_coefficients(Eigen::MatrixXd coefficients, const Eigen::MatrixXd *orbital_rotation_matrix){
    Eigen::MatrixXd rotated_coeffs = Eigen::MatrixXd::Zero(2*nbfs, 2*nbfs);
//    rotated_coeffs.noalias() += Coeffs * *orbital_rotation_matrix;
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
TensorRank4 OOSpinOrbitalMP2::construct_spinorbital_ao_electron_integral_tensor(const TensorRank4 *eriTensor){
    TensorRank4 eriTensorSObasis(2*nbfs, 2*nbfs, 2*nbfs, 2*nbfs);
    //eriTensorSO.setZero(); // Use this later to not have to populate with zeros in the loops below.

    for(int p = 0; p < 2*nbfs; p+=2) {
        for(int q = 0; q < 2*nbfs; q+=2) {
            for(int r = 0; r < 2*nbfs; r+=2) {
                for(int s = 0; s < 2*nbfs; s+=2) {
                    for(int i = 0; i < nbfs; i++) {
                        for(int j = 0; j < nbfs; j++) {
                            for(int k = 0; k < nbfs; k++) {
                                for(int l = 0; l < nbfs; l++) {
                                    if(p/2==i && q/2==j && r/2==k && s/2 ==l) {
                                        eriTensorSObasis(p,q,r,s) = (*eriTensor)(i,j,k,l);
                                        eriTensorSObasis(p+1,q+1,r,s) = (*eriTensor)(i,j,k,l);
                                        eriTensorSObasis(p,q,r+1,s+1) = (*eriTensor)(i,j,k,l);
                                        eriTensorSObasis(p+1,q+1,r+1,s+1) = (*eriTensor)(i,j,k,l);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return eriTensorSObasis;
}

TensorRank4 OOSpinOrbitalMP2::rotate_two_electron_integrals(const Eigen::MatrixXd *rotated_coefficients, const TensorRank4 *eriTensorSO){
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
/*
double OOSpinOrbitalMP2::calculate_E_oomp2(const Eigen::MatrixXd *one_particle_density, const TensorRank4 *two_particle_density, const Eigen::MatrixXd *rotated_one_electron_integrals, const TensorRank4 *rotated_two_electron_integrals){
    double OOEMP2 = 0.0;
    for(int i = 0; i < 2*numocc; i++) {
        for(int j = 0; j < 2*numocc; j++) {
            for(int a = 0; a < 2*nbfs - 2*numocc; a++) {
                for(int b = 0; b < 2*nbfs - 2*numocc; b++) {
                    OOEMP2 += 0.25 * ((*rotated_two_electron_integrals)(i,a+2*numocc,j,b+2*numocc) - (*rotated_two_electron_integrals)(i,b+2*numocc,j,a+2*numocc)) * (*two_particle_density)(i,a+2*numocc,j,b+2*numocc);
                }
            }
        }
    }
    return OOEMP2;
}*/
/*
double OOSpinOrbitalMP2::calculate_E_oomp2(const Eigen::MatrixXd *one_particle_density, const TensorRank4 *two_particle_density, const Eigen::MatrixXd *rotated_one_electron_integrals, const TensorRank4 *rotated_two_electron_integrals){
    double OOEMP2 = 0.0;
    for(int p = 0; p < 2*nbfs; p++) {
        for(int q = 0; q < 2*nbfs; q++) {
            OOEMP2+=(*rotated_one_electron_integrals)(p,q)*(*one_particle_density)(q,p);
            for(int r = 0; r < 2*nbfs; r++) {
                for(int s = 0; s < 2*nbfs; s++) {
                    OOEMP2 += 0.25 * ((*rotated_two_electron_integrals)(p,r,q,s) - (*rotated_two_electron_integrals)(p,s,q,r)) * (*two_particle_density)(r,p,s,q);
                }
            }
        }
    }
    return OOEMP2;
}*/
/*
double OOSpinOrbitalMP2::calculate_E_oomp2(const Eigen::MatrixXd *one_particle_density, const TensorRank4 *two_particle_density, const Eigen::MatrixXd *rotated_one_electron_integrals, const TensorRank4 *rotated_two_electron_integrals){
    double OOEMP2 = 0.0;
    for(int p = 0; p < 2*nbfs; p++) {
        for(int q = 0; q < 2*nbfs; q++) {
            OOEMP2+=(*rotated_one_electron_integrals)(p,q)*(*one_particle_density)(q,p);
            for(int r = 0; r < 2*nbfs; r++) {
                for(int s = 0; s < 2*nbfs; s++) {
                    OOEMP2 += 0.25 * ((*rotated_two_electron_integrals)(p,r,q,s) - (*rotated_two_electron_integrals)(p,s,q,r)) * (*two_particle_density)(r,p,s,q);
                }
            }
        }
    }
    return OOEMP2;
}*/

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

//END OF OOSpinOrbitalMP2 CLASS.