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

#include "tensor.h"
Eigen::IOFormat FockFmt(6);

Eigen::MatrixXd fock_spinfreebuildforMP2(const int nbfs, const Eigen::MatrixXd *P, const Eigen::MatrixXd *Coeffs, const Eigen::MatrixXd *H_core, const TensorRank4 *g) {

  Eigen::MatrixXd F_ao(nbfs, nbfs);

    for (auto mu = 0; mu < nbfs; mu++) {
        for (auto nu = 0; nu < nbfs; nu++) {
            double integral = 0.0;
            for (auto sigma = 0; sigma < nbfs; sigma++) {
                for (auto lamda = 0; lamda < nbfs; lamda++) {
                    integral += (*P)(lamda,sigma)*(2.0*(*g)(mu,nu,sigma,lamda)-1.0*(*g)(mu,lamda,sigma,nu));
                }
            }
        F_ao(mu,nu) = (*H_core)(mu,nu) + integral;
        }
    }

    Eigen::MatrixXd F_mo = Eigen::MatrixXd::Zero(nbfs,nbfs);
    
    for (int i = 0; i < nbfs; i++) {
        for(int j = 0; j < nbfs; j++) {
            for(int k = 0; k < nbfs; k++) {
                for(int l = 0; l < nbfs; l++){
                    F_mo(i,j) += (*Coeffs)(l,i) * F_ao(l,k) * (*Coeffs)(k,j);//Make the first coeffs complex conjugate, but then new data type required: INDICES ARE ALREADY CORRECTLY ORDERED
                }
            }
        }
    }

  return F_mo;
}

Eigen::MatrixXd fock_spinorbitalbuildforMP2(const int nbfs, const int numocc, const Eigen::MatrixXd *F_mo, const TensorRank4 *MP2TensorSO, const Eigen::MatrixXd *H_core) {

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
    /*
    Eigen::MatrixXd FockSO = Eigen::MatrixXd::Zero(2*nbfs, 2*nbfs);
    for(int p = 0; p < 2*nbfs; p+=2) {
        for(int q = 0; q < 2*nbfs; q+=2) {
            for(int r = 0; r < nbfs; r++) {
                for(int s = 0; s < nbfs; s++) {
                    if(p/2==r && q/2==s) {
                        FockSO(p,q) = (*H_core)(r,s);
                        FockSO(p,q+1) = 0.0;
                        FockSO(p+1,q) = 0.0;
                        FockSO(p+1,q+1) = (*H_core)(r,s);

                    }
                }
            }
        }
    }
    for (int p = 0; p < 2*nbfs; p++) {
        for (int q = 0; q < 2*nbfs; q++) {
            for (int m = 0; m < 2*numocc; m++) {
                //FockSO(p,q) += (1.0*(*MP2TensorSO)(p,m,q,m) - 1.0*(*MP2TensorSO)(p,m,m,q));
                FockSO(p,q) += (1.0*(*MP2TensorSO)(p,q,m,m) - 1.0*(*MP2TensorSO)(p,m,m,q));
            }
        }
    }
    */
 /*    for(int r = 0; r < 2*nbfs; r++) {
        for(int c = 0; c < nbfs; c++) {
            FockSO(r,c) = (*F_mo)(c,c);
            r++;
            FockSO(r,c) = (*F_mo)(c,c);
            r--;

        }
    }*/

    /*for (int p = 0; p < nbfs; p++) {
        for (int q = 0; q < nbfs; q++) {
            double integral = 0.0;
            for (int m = m; m < numocc; r++) {
                integral += (1.0*(*MP2TensorSO)(p,m,q,m) - 1.0*(*MP2TensorSO)(p,m,m,q));
            }
        FockSO(p,q) += integral;
        //FockSO(p,q) = (*H_core)(mu,nu) + integral;
        }
    }*/
 /*   for (int p = 0; p < numocc; p++) {
        for (auto q = 0; q < numocc; q++) {
            double integral = 0.0;
            for (auto r = 0; r < numocc; r++) {
                for (auto s = 0; s < numocc; s++) {
                    integral += (*P)(s,r) * (1.0*(*g)(p,q,s,r) - 1.0*(*g)(p,s,q,r));
                }
            }
        FockSO(p,q) += integral;
        //FockSO(p,q) = (*H_core)(mu,nu) + integral;
        }
    } */
    return FockSO;
  
    /* Eigen::MatrixXd H_coreSO(2*nbfs, 2*nbfs);

    Eigen::MatrixXd F_ao(nbfs, nbfs);

    for (auto mu = 0; mu < nbfs; mu++) {
        for (auto nu = 0; nu < nbfs; nu++) {
            double integral = 0.0;
            for (auto sigma = 0; sigma < nbfs; sigma++) {
                for (auto lamda = 0; lamda < nbfs; lamda++) {
                    integral += (*P)(lamda,sigma) * (1.0*(*g)(mu,nu,lamda,sigma) - 1.0*(*g)(mu,lamda,nu,sigma));
                }
            }
        F_ao(mu,nu) = (*H_core)(mu,nu) + integral;
        }
    }

    Eigen::MatrixXd F_mo = Eigen::MatrixXd::Zero(nbfs,nbfs);
    
    for (int i = 0; i < nbfs; i++) {
        for(int j = 0; j < nbfs; j++) {
            for(int k = 0; k < nbfs; k++) {
                for(int l = 0; l < nbfs; l++){
                    F_mo(i,j) += (*Coeffs)(l,i) * F_ao(l,k) * (*Coeffs)(k,j);//Make the first coeffs complex conjugate, but then new data type required: INDICES ARE ALREADY CORRECTLY ORDERED
                }
            }
        }
    }

  return F_mo;*/
}

TensorRank4 Basic_convert_ERI_Tensor_AOtospinfreeMO(const int nbfs, const int numocc, Eigen::MatrixXd *Coeffs, const TensorRank4 *eriTensor) {
    TensorRank4 TensorStepl(nbfs, nbfs, nbfs, nbfs); //make a tensor rank 4 to store the two electron integrals--will simplify to compound indexing later
    TensorStepl.setZero();
    for(int s = 0; s < nbfs; s++) {
        for(int i = 0; i < nbfs; i++) {
            for(int j = 0; j < nbfs; j++) {
                for(int k = 0; k < nbfs; k++) {
                    for(int l = 0; l < nbfs; l++) {
                        TensorStepl(i,j,k,s) += (*Coeffs)(l,s) * (*eriTensor)(i,j,k,l);
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
                        TensorStepk(i,j,r,l) += (*Coeffs)(k,r) * TensorStepl(i,j,k,l);
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
                        TensorStepj(i,q,k,l) += (*Coeffs)(j,q) * TensorStepk(i,j,k,l);
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
                        MP2Tensor(p,j,k,l) += (*Coeffs)(i,p) * TensorStepj(i,j,k,l);
                    }
                }
            }
        }
    }
    return MP2Tensor;
}

TensorRank4 Basic_convert_ERI_Tensor_SpinfreeMOtoSpinorbitalMO(const int nbfs, const TensorRank4 *MP2Tensor) {
    TensorRank4 MP2TensorSO(2*nbfs+1, 2*nbfs+1, 2*nbfs+1, 2*nbfs+1);
    for(int p = 0; p < 2*nbfs; p+=2) {
        for(int q = 0; q < 2*nbfs; q+=2) {
            for(int r = 0; r < 2*nbfs; r+=2) {
                for(int s = 0; s < 2*nbfs; s+=2) {
                    for(int i = 0; i < nbfs; i++) {
                        for(int j = 0; j < nbfs; j++) {
                            for(int k = 0; k < nbfs; k++) {
                                for(int l = 0; l < nbfs; l++) {
                                    if(p/2==i && q/2==j && r/2==k && s/2 ==l) {
                                        /*
                                        MP2TensorSO(p,q,r,s) = (*MP2Tensor)(i,j,k,l);
                                        MP2TensorSO(p+1,q,r,s) = 0.0;
                                        MP2TensorSO(p,q+1,r,s) = 0.0;
                                        MP2TensorSO(p,q,r+1,s) = 0.0;
                                        MP2TensorSO(p,q,r,s+1) = 0.0;
                                        MP2TensorSO(p+1,q+1,r,s) = 0.0;
                                        MP2TensorSO(p+1,q,r+1,s) = (*MP2Tensor)(i,j,k,l);
                                        MP2TensorSO(p+1,q,r,s+1) = 0.0;
                                        MP2TensorSO(p,q+1,r+1,s) = 0.0;
                                        MP2TensorSO(p,q+1,r,s+1) = (*MP2Tensor)(i,j,k,l);
                                        MP2TensorSO(p,q,r+1,s+1) = 0.0;
                                        MP2TensorSO(p+1,q+1,r+1,s) = 0.0;                    
                                        MP2TensorSO(p+1,q+1,r,s+1) = 0.0;
                                        MP2TensorSO(p+1,q,r+1,s+1) = 0.0;
                                        MP2TensorSO(p,q+1,r+1,s+1) = 0.0;
                                        MP2TensorSO(p+1,q+1,r+1,s+1) = (*MP2Tensor)(i,j,k,l);
                                        */
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
    /* TensorRank4 MP2TensorSO(2*nbfs, 2*nbfs, 2*nbfs, 2*nbfs);
    for(int p = 0; p < nbfs; p++) {
        for(int q = 0; q < nbfs; q++) {
            for(int r = 0; r < nbfs; r++) {
                for(int s = 0; s < nbfs; s++) {
                    MP2TensorSO(1*p,1*q,1*r,1*s) = MP2Tensor(p,q,r,s);
                    MP2TensorSO(2*p,1*q,1*r,1*s) = 0.0;
                    MP2TensorSO(1*p,2*q,1*r,1*s) = 0.0;
                    MP2TensorSO(1*p,1*q,2*r,1*s) = 0.0;
                    MP2TensorSO(1*p,1*q,1*r,2*s) = 0.0;
                    MP2TensorSO(2*p,2*q,1*r,1*s) = MP2Tensor(p,q,r,s);
                    MP2TensorSO(2*p,1*q,2*r,1*s) = 0.0;
                    MP2TensorSO(2*p,1*q,1*r,2*s) = 0.0;
                    MP2TensorSO(1*p,2*q,2*r,1*s) = 0.0;
                    MP2TensorSO(1*p,2*q,1*r,2*s) = 0.0;
                    MP2TensorSO(1*p,1*q,2*r,2*s) = MP2Tensor(p,q,r,s);
                    MP2TensorSO(2*p,2*q,2*r,1*s) = 0.0;                    
                    MP2TensorSO(2*p,2*q,1*r,2*s) = 0.0;
                    MP2TensorSO(2*p,1*q,2*r,2*s) = 0.0;
                    MP2TensorSO(1*p,2*q,2*r,2*s) = 0.0;
                    MP2TensorSO(2*p,2*q,2*r,2*s) = MP2Tensor(p,q,r,s);
                }
            }
        }
    }*/
    return MP2TensorSO;
}

double Canonical_EMP2_Spinfree(const int nbfs, const int numocc, const TensorRank4 *MP2Tensor, const Eigen::VectorXd *Fockevals){
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

double Canonical_EMP2_Spinorbital(const int nbfs, const int numocc, const TensorRank4 *MP2Tensor, const Eigen::MatrixXd *CanFock){
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

double Spinfree_EMP2(const int numocc, const int nbfs, const TensorRank4 *MP2Tensor, const TensorRank4 *doubles){
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

double Spinorbital_EMP2(const int numocc, const int nbfs, const TensorRank4 *MP2Tensor, const TensorRank4 *doubles){
    double EMP2 = 0.0;
    for(int i = 0; i < 2*numocc; i++) {
        for(int j = 0; j < 2*numocc; j++) {
            for(int a = 0; a < 2*nbfs - 2*numocc; a++) {
                for(int b = 0; b < 2*nbfs - 2*numocc; b++) {
                    //EMP2 += (2*(*MP2Tensor)(i,a+numocc,j,b+numocc) - (*MP2Tensor)(i,b+numocc,j,a+numocc)) * (*doubles)(i,a,j,b);
                    //EMP2 += 0.25*((*MP2Tensor)(i,a+numocc,j,b+numocc) - (*MP2Tensor)(i,b+numocc,j,a+numocc)) * (*doubles)(i,a,j,b);
                    //EMP2 += 0.5*((*MP2Tensor)(i,a+numocc,j,b+numocc) - (*MP2Tensor)(i,b+numocc,j,a+numocc)) * (*doubles)(i,a,j,b);//works for some reason
                    //EMP2 += 0.25 * ((*MP2Tensor)(i,a+2*numocc,j,b+2*numocc) - (*MP2Tensor)(i,b+2*numocc,j,a+2*numocc)) * (*doubles)(i,a,j,b);
                    EMP2 += 0.25 * ((*MP2Tensor)(i,a+2*numocc,j,b+2*numocc) - (*MP2Tensor)(i,b+2*numocc,j,a+2*numocc)) * (*doubles)(i,a,j,b);
                }
            }
        }
    }
    return EMP2;
}

Eigen::MatrixXd Test_Spinfree_Noncanonical_MP2(const int nbfs, Eigen::MatrixXd *Coeffs) {//Test the code with localized MOs on water; easiest to get from GAMESS with LOCAL keyword.
    for(int i =0; i < nbfs; i++) {
        for(int j = 0; j< nbfs; j++) {
            if(abs((*Coeffs)(i,j)) < 0.000000001) {
                (*Coeffs)(i,j) = 0;
            }
        }
    }
    std::cout << "Canonical MO coefficient Matrix: " << std::endl << (*Coeffs).format(FockFmt) << std::endl;
    Eigen::MatrixXd CanonicalCoeff(nbfs,nbfs);
    CanonicalCoeff=*Coeffs;
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
        (*Coeffs)(i,j) = coeffentry;
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

    std::cout << std::endl << "GAMESS MO Coefficient matrix: " << std::endl << (*Coeffs).format(FockFmt) << std::endl<< std::endl;
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
    //*Coeffs= basistransform*(*Coeffs);

    std::cout << std::endl << "Transformed GAMESS MO Coefficient matrix " << std::endl << (*Coeffs).format(FockFmt) << std::endl<< std::endl<< std::endl;
    std::cout << std::endl << "LIBINT Canonical MO Coefficient matrix: " << std::endl << CanonicalCoeff.format(FockFmt) << std::endl<< std::endl;

    Coeffdiff =  CanonicalCoeff.cwiseAbs() - (*Coeffs).cwiseAbs();
    for(int i =0; i < nbfs; i++) {
        for(int j = 0; j< nbfs; j++) {
            if(abs(Coeffdiff(i,j)) < 0.000001) {
                (Coeffdiff)(i,j) = 0;
            }
        }
    }
    std::cout << "difference between Canonical MO coefficient matrices (LIBINT-GAMESS)" << std::endl << Coeffdiff << std::endl;
    return *Coeffs;
}

TensorRank4 Calculate_MP2_residuals(int *residcounter, const double residconv, const int numocc, const int nbfs, const TensorRank4 *MP2Tensor, const TensorRank4 *doubles, const Eigen::MatrixXd *F) {
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

TensorRank4 Calculate_MP2_residualsspinorbital(int *residcounter, const double residconv, const int numocc, const int nbfs, const TensorRank4 *MP2Tensor, const TensorRank4 *doubles, const Eigen::MatrixXd *F) {
    TensorRank4 residual(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
    residual.setZero();
    *residcounter=0;
        for(int i = 0; i < 2*numocc; i++) {
            for(int j = 0; j < 2*numocc; j++) {
                for(int a = 0; a < 2*nbfs-2*numocc; a++) {
                    for(int b = 0; b < 2*nbfs-2*numocc; b++) {
                        residual(i,a,j,b) = (*MP2Tensor)(i,a+2*numocc,j,b+2*numocc) - (*MP2Tensor)(i,b+2*numocc,j,a+2*numocc);
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

TensorRank4 Update_MP2_doublesspinorbital(const int numocc, const int nbfs, TensorRank4 *doubles, const TensorRank4 *residual, const Eigen::MatrixXd *F){
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

TensorRank4 Update_MP2_doubles(const int numocc, const int nbfs, TensorRank4 *doubles, const TensorRank4 *residual, const Eigen::MatrixXd *F){
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

double RunMP2spinorbitalnoncanon(const TensorRank4 *eriTensor, Eigen::MatrixXd *Coeffs, const int nbfs, const int numocc, const Eigen::VectorXd *Evals, const Eigen::MatrixXd *H_core, const Eigen::MatrixXd *S) {
    int numMP2steps = 100;
    double residconv = 0.00000000001;
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
    Eigen::MatrixXd F_SO = Eigen::MatrixXd::Zero(2*nbfs,2*nbfs);  
    F = fock_spinfreebuildforMP2(nbfs,&P,Coeffs,H_core,eriTensor);
    //std::cout << std::endl << "Fock matrix from Coeffs " << std::endl << F << std::endl <<std::endl;
    P.resize(0,0);
    TensorRank4 MP2Tensor(nbfs,nbfs,nbfs,nbfs);
    MP2Tensor = Basic_convert_ERI_Tensor_AOtospinfreeMO(nbfs, numocc, Coeffs, eriTensor);
    TensorRank4 MP2TensorSO(2*nbfs,2*nbfs,2*nbfs,2*nbfs);
    MP2TensorSO = Basic_convert_ERI_Tensor_SpinfreeMOtoSpinorbitalMO(nbfs, &MP2Tensor);
    //F_SO=fock_spinorbitalbuildforMP2(nbfs, &F, &MP2TensorSO);
    F_SO=fock_spinorbitalbuildforMP2(nbfs, numocc, &F, &MP2TensorSO, H_core);
    for(int i =0; i < 2*nbfs; i++) {
        for(int j = 0; j < 2*nbfs; j++) {
            if(abs(F_SO(i,j)) < 0.000000001) {
                (F_SO)(i,j) = 0;
            }
        }
    } 
    std::cout << "SO Fock matrix ? :" <<std::endl << F_SO << std::endl << std::endl;
    TensorRank4 doubles(numocc, nbfs-numocc, numocc, nbfs-numocc);
    TensorRank4 doublesSO(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
    doubles.setZero();
    doublesSO.setZero();
    TensorRank4 residual(numocc, nbfs-numocc, numocc, nbfs-numocc);
    TensorRank4 residualSO(2*numocc, 2*nbfs-2*numocc, 2*numocc, 2*nbfs-2*numocc);
    std::cout << "Iteration       EMP2       EMP2SO       residcounter        residcounterSO" << std::endl;
    //std::cout << "Iteration       EMP2      EMP2SO        residcounter of last step        residcounterSO" << std::endl;
    double EMP2;
    double EMP2SO;
    int residcounter;
    int residcounterSO;
    for(int s = 1; s < numMP2steps; s++) {
        //residual.setZero();
        residualSO.setZero();
        //residual = Calculate_MP2_residuals(&residcounter, residconv, numocc, nbfs, &MP2Tensor, &doubles, &F);
        residualSO = Calculate_MP2_residualsspinorbital(&residcounterSO, residconv, numocc, nbfs, &MP2TensorSO, &doublesSO, &F_SO);
        //doubles = Update_MP2_doubles(numocc, nbfs, &doubles, &residual, &F);
        doublesSO = Update_MP2_doublesspinorbital(numocc, nbfs, &doublesSO, &residualSO, &F_SO);
        //EMP2 = Spinfree_EMP2(numocc, nbfs, &MP2Tensor, &doubles);
        //EMP2SO = Canonical_EMP2_Spinorbital(nbfs, numocc, &MP2TensorSO, &F_SO);
        EMP2SO = Spinorbital_EMP2(numocc, nbfs, &MP2TensorSO, &doublesSO);
        //EMP2 = Canonical_EMP2_Spinfree(nbfs, numocc, &MP2Tensor, Evals);

        if (residcounterSO == 0) {break;}
        if (residcounterSO > 0 && s == numMP2steps - 1) {
            std::cout << "Error: Unable to converge doubles in non-canonical MP2. Increase numMP2steps." << std::endl;
            exit(EXIT_FAILURE);
        }
       // std::cout << s << "            " << EMP2 << "            " <<  EMP2SO << "       " << residcounter << "        " <<  residcounterSO << std::endl;
        std::cout << s << "            " <<  EMP2SO << "        " <<  residcounterSO << std::endl;
    }

    return EMP2SO;
}

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