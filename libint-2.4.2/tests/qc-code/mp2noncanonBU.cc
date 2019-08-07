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
Eigen::MatrixXd fock_buildforMP2(const int nbfs, const Eigen::MatrixXd *P, const Eigen::MatrixXd *Coeffs, const Eigen::MatrixXd *H_core, const TensorRank4 *g) {

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

//double RunMP2noncanon(const TensorRank4 *eriTensor, const Eigen::MatrixXd *Coeffs, const int nbfs, const int numocc, const Eigen::VectorXd *Evals, const Eigen::MatrixXd *H_core, const Eigen::MatrixXd *S) {
double RunMP2noncanon(const TensorRank4 *eriTensor, Eigen::MatrixXd *Coeffs, const int nbfs, const int numocc, const Eigen::VectorXd *Evals, const Eigen::MatrixXd *H_core, const Eigen::MatrixXd *S) {
    int numMP2steps = 100;
    double residconv = 0.0000000001;

    std::cout << "Canonical MO coefficient Matrix: " << std::endl << *Coeffs << std::endl;
//Test the code with localized MOs on sto3g water; easiest to get from GAMESS with LOCAL keyword.
    std::ifstream lmo_input("qc-code/water-sto3g-LMOs-from-GAMESS.txt", std::ios::in);
    double a;
    int j = 0;
    int i = 0;

    while(lmo_input >> a) {//even though each line of lmo_input has many entries, only one will be depleted at a time iwht a single <<.
    //while will pull the next entry of lmo_input into a when it reaches the end of the commands inside the loop 
        (*Coeffs)(i,j) = a;
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

    std::cout << "Localized MO Coefficient matrix: " << std::endl << *Coeffs << std::endl;
    lmo_input.close();

    Eigen::MatrixXd P = Eigen::MatrixXd::Zero(nbfs,nbfs);//density reconstructed from coefficients: needed to construct fock matrix which is in turn needed for non-canonical MP2
    for(int i = 0; i < nbfs; i++) {
        for(int j = 0; j < nbfs; j++) {
            for(int m = 0; m < numocc; m++) {
                P(i,j) += (*Coeffs)(i,m) * (*Coeffs)(j,m);
            }
        }
    }
//    std::cout << "P matrix constructed from MO coefficients: " << std::endl << P << std::endl;
    Eigen::MatrixXd F = Eigen::MatrixXd::Zero(nbfs,nbfs);  
    Eigen::MatrixXd Fref = Eigen::MatrixXd::Zero(nbfs,nbfs);
    F = fock_buildforMP2(nbfs,&P,Coeffs,H_core,eriTensor);
    for(int i = 0; i < nbfs; i++) {
        Fref(i,i) = (*Evals)(i);
    }
    P.resize(0,0);
//    *H_core.resize(0,0);
//    std::cout << "Hcore: " << std::endl << *H_core << std::endl;
//    std::cout << "F: " << std::endl << F << std::endl;////////DO THIS THE HARDER, USEFUL LATER, WAY, USING Hcore C and g. C rotates F constructed in AO basis from g and Hcore into MO basis.
//    std::cout << "F_ref: " << std::endl << Fref << std::endl;////////DO THIS THE HARDER, USEFUL LATER, WAY, USING Hcore C and g. C rotates F constructed in AO basis from g and Hcore into MO basis.
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

//    TensorStepl = Eigen::Tensor<double, 4>(0,0,0,0);
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
    TensorRank4 doubles(numocc, nbfs-numocc, numocc, nbfs-numocc);
    doubles.setZero();
    TensorRank4 residual(numocc, nbfs-numocc, numocc, nbfs-numocc);
    residual.setZero();
    std::cout << "Iteration       EMP2        residcounter of last step" << std::endl;
    for(int s = 1; s < numMP2steps; s++) {
        residual.setZero();
        int residcounter=0;
        for(int i = 0; i < numocc; i++) {
            for(int j = 0; j < numocc; j++) {
                for(int a = 0; a < nbfs-numocc; a++) {
                    for(int b = 0; b < nbfs-numocc; b++) {
                        residual(i,a,j,b) = (MP2Tensor(i,a+numocc,j,b+numocc));
                        for(int k = 0; k < numocc; k++) {
                            residual(i,a,j,b) += - F(i,k) * doubles(k,a,j,b) - F(j,k) * doubles(i,a,k,b);
                        }
                        for(int c = 0; c < nbfs-numocc; c++) {
                            residual(i,a,j,b) += F(c+numocc,a+numocc) * doubles(i,c,j,b) + F(c+numocc,b+numocc) * doubles(i,a,j,c);
                        }
                        if (abs(residual(i,a,j,b)) > residconv) {
                            residcounter += 1;
                        }
                    }
                }
            }
        }
        for(int i = 0; i < numocc; i++) {
            for(int j = 0; j < numocc; j++) {
                for(int a = 0; a < nbfs-numocc; a++) {
                    for(int b = 0; b < nbfs-numocc; b++) {
                        doubles(i,a,j,b) += residual(i,a,j,b)/(F(i,i) + F(j,j) - F(a+numocc,a+numocc) - F(b+numocc,b+numocc));
                    }
                }
            }
        }
        double EMP2 = 0.0;
        for(int i = 0; i < numocc; i++) {
            for(int j = 0; j < numocc; j++) {
                for(int a = 0; a < nbfs-numocc; a++) {
                    for(int b = 0; b < nbfs-numocc; b++) {
                        EMP2 += (2*MP2Tensor(i,a+numocc,j,b+numocc) - MP2Tensor(i,b+numocc,j,a+numocc)) * doubles(i,a,j,b);
                    }
                }
            }
        }
//        std::cout << "step " << s << " EMP2: " << EMP2 << std::endl;
        if (residcounter == 0) {break;}
        if (residcounter > 0 && s == numMP2steps - 1) {
            std::cout << "Error: Unable to converge doubles in non-canonical MP2. Increase numMP2steps." << std::endl;
            exit(EXIT_FAILURE);
        }
        std::cout << s << "            " << EMP2 << "            " << residcounter << std::endl;
    }

    double EMP2 = 0.0;
    for(int i = 0; i < numocc; i++) {
        for(int j = 0; j < numocc; j++) {
            for(int a = 0; a < nbfs-numocc; a++) {
                for(int b = 0; b < nbfs-numocc; b++) {
                    EMP2 += (2*MP2Tensor(i,a+numocc,j,b+numocc) - MP2Tensor(i,b+numocc,j,a+numocc))*doubles(i,a,j,b);
                }
            }
        }
    }
    return EMP2;
}