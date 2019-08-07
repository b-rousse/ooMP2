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

double RunMP2(const TensorRank4 *eriTensor, const Eigen::MatrixXd *Coeffs, const int nbfs, const int numocc, const Eigen::VectorXd *Evals) {
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

    TensorStepj.clear(); // = Eigen::Tensor<double, 4>(0,0,0,0);
    double EMP2 = 0.0;
    for(int i = 0; i < numocc; i++) {
        for(int j = 0; j < numocc; j++) {
            for(int k = numocc; k < nbfs; k++) {
                for(int l = numocc; l < nbfs; l++) {
                    EMP2 += (MP2Tensor(i,k,j,l) * (2.0 * MP2Tensor(i,k,j,l) - MP2Tensor(i,l,j,k)))/((*Evals)(i,i) + (*Evals)(j,j) - (*Evals)(k,k) - (*Evals)(l,l));
                }
            }
        }
    }
    return EMP2;
}