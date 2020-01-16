/*
 *  Copyright (C) 2004-2017 Edward F. Valeev
 *
 *  This file is part of Libint.
 *
 *  Libint is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Libint.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// standard C++ headers
#include <cmath>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <chrono>
#include <cassert>

// Eigen matrix algebra library
#include <Eigen/Dense>
#include <Eigen/Eigenvalues>
#include <Eigen/Core>
#include <unsupported/Eigen/CXX11/Tensor>

// Libint Gaussian integrals library
#include <libint2.hpp>
#include <libint2/diis.h>

#include "mp2noncanon.h"
//#include "mp2.h"

#include "basis_set.h"
//#include "tensor.h"
#include "particles.h"
 
typedef Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor>
Matrix;  // import dense, dynamically sized Matrix type from Eigen;
// this is a matrix with row-major storage (http://en.wikipedia.org/wiki/Row-major_order)
// to meet the layout of the integrals returned by the Libint integral library

std::vector<Atoms> read_geometry(const std::string& filename);
std::vector<Atoms> read_geometry_qh(const std::string& filename);

size_t nbasis(const std::vector<libint2::Shell>& shells);
std::vector<size_t> map_shell_to_basis_function(const std::vector<libint2::Shell>& shells);
Matrix compute_1body_ints(const std::vector<libint2::Shell>& shells,
    libint2::Operator t,
    const std::vector<Atoms>& atoms = std::vector<Atoms>());

void compute_dipole_integrals(const std::vector<libint2::Shell>& shells,
    libint2::Operator t, Eigen::MatrixXd &mu_x, Eigen::MatrixXd &mu_y, Eigen::MatrixXd &mu_z);

Matrix compute_overlap(const std::vector<libint2::Shell>& shells_m, const std::vector<libint2::Shell>& shells_p,
    libint2::Operator t,
    const std::vector<Atoms>& atoms = std::vector<Atoms>());

TensorRank4 compute_2body_ints(const std::vector<libint2::Shell>& shells);
TensorRank4 compute_2body_ints_ep(const std::vector<libint2::Shell>& shells_e, const std::vector<libint2::Shell>& shells_p);

Eigen::MatrixXd compute_2body_ints_mat(const std::vector<libint2::Shell>& shells);
Eigen::MatrixXd compute_2body_ints_ep_mat(const std::vector<libint2::Shell>& shells_e, const std::vector<libint2::Shell>& shells_p);

std::vector<libint2::Shell> make_protonic_basis_set(std::vector<Atoms> &atoms_qh, std::string basis_set_p) {

  auto shells_p = make_sto3g_basis(atoms_qh);
  if (basis_set_p == "6-31G") {
    shells_p = make_631g_basis(atoms_qh);
  } else if (basis_set_p == "6-311G") {
    shells_p = make_6311g_basis(atoms_qh);
  } else if (basis_set_p == "cc-pVDZ") {
    shells_p = make_cc_pvdz_basis_qh(atoms_qh);
  } else if (basis_set_p == "aug-cc-pVDZ") {
    shells_p = make_aug_cc_pvdz_basis_qh(atoms_qh);
  } else if (basis_set_p == "aug-cc-pVTZ") {
    shells_p = make_aug_cc_pvtz_basis_qh(atoms_qh);
  } else if (basis_set_p == "aug-cc-pVQZ") {
    shells_p = make_aug_cc_pvqz_basis_qh(atoms_qh);
  } else if (basis_set_p == "aug-cc-pV5Z") {
    shells_p = make_aug_cc_pv5z_basis_qh(atoms_qh);
  } else if (basis_set_p == "aug-cc-pV6Z") {
    shells_p = make_aug_cc_pv6z_basis_qh(atoms_qh);
  } else if (basis_set_p == "cc-pVTZ") {
    shells_p = make_cc_pvtz_basis(atoms_qh);
  } else if (basis_set_p == "sp") {
    shells_p = make_sp_basis(atoms_qh);
  } else if (basis_set_p == "6s3p1d") {
    shells_p = make_6s3p1d_basis(atoms_qh);
  } else if (basis_set_p == "6s3p1d_es") {
    shells_p = make_6s3p1d_es_basis(atoms_qh);
  } else if (basis_set_p == "7s5p3d") {
    shells_p = make_7s5p3d_basis(atoms_qh);
  } else if (basis_set_p == "8spd") {
    shells_p = make_8spd_basis(atoms_qh);
  } else if (basis_set_p == "10spd") {
    shells_p = make_10spd_basis(atoms_qh);
  } else if (basis_set_p == "8spdf") {
    shells_p = make_8spdf_basis(atoms_qh);
  } else if (basis_set_p == "2s") {
    shells_p = make_2s_basis(atoms_qh);
  } else if (basis_set_p == "4s") {
    shells_p = make_4s_basis(atoms_qh);
  } else if (basis_set_p == "6s") {
    shells_p = make_6s_basis(atoms_qh);
  } else if (basis_set_p == "8s") {
    shells_p = make_8s_basis(atoms_qh);
  } else if (basis_set_p == "8s2p") {
    shells_p = make_8s2p_basis(atoms_qh);
  } else if (basis_set_p == "8s4p") {
    shells_p = make_8s4p_basis(atoms_qh);
  } else if (basis_set_p == "8s6p") {
    shells_p = make_8s6p_basis(atoms_qh);
  } else if (basis_set_p == "8s8p") {
    shells_p = make_8s8p_basis(atoms_qh);
  } else if (basis_set_p == "8s8p2d") {
    shells_p = make_8s8p2d_basis(atoms_qh);
  } else if (basis_set_p == "8s8p4d") {
    shells_p = make_8s8p4d_basis(atoms_qh);
  } else if (basis_set_p == "8s8p6d") {
    shells_p = make_8s8p6d_basis(atoms_qh);
  } else if (basis_set_p == "8s8p8d") {
    shells_p = make_8s8p8d_basis(atoms_qh);
  } else if (basis_set_p == "16s16p16dw") {
    shells_p = make_16s16p16dw_basis(atoms_qh);
  } else if (basis_set_p == "16s16p16dd") {
    shells_p = make_16s16p16dd_basis(atoms_qh);
  } else if (basis_set_p == "8s8p8d2f") {
    shells_p = make_8s8p8d2f_basis(atoms_qh);
  } else if (basis_set_p == "8s8p8d4f") {
    shells_p = make_8s8p8d4f_basis(atoms_qh);
  } else if (basis_set_p == "8s8p8d6f") {
    shells_p = make_8s8p8d6f_basis(atoms_qh);
  } else if (basis_set_p == "8s8p8d8f") {
    shells_p = make_8s8p8d8f_basis(atoms_qh);
  } else if (basis_set_p == "8s8p8d4f_lr") {
    shells_p = make_8s8p8d4f_lr_basis(atoms_qh);
  } else if (basis_set_p == "8s8p8d8f8g") {
    shells_p = make_8s8p8d8f8g_basis(atoms_qh);
  } else if (basis_set_p == "8s8p8d8f4g") {
    shells_p = make_8s8p8d8f4g_basis(atoms_qh);
  } else if (basis_set_p == "8s8p8d4f4g") {
    shells_p = make_8s8p8d4f4g_basis(atoms_qh);
  } else if (basis_set_p == "6s_r") {
    shells_p = make_6s_r_basis(atoms_qh);
  } else if (basis_set_p == "6s6p_r") {
    shells_p = make_6s6p_r_basis(atoms_qh);
  } else if (basis_set_p == "6s6p6d_r") {
    shells_p = make_6s6p6d_r_basis(atoms_qh);
  } else if (basis_set_p == "6s6p6d6f_r") {
    shells_p = make_6s6p6d6f_r_basis(atoms_qh);
  } else if (basis_set_p == "6s_l") {
    shells_p = make_6s_l_basis(atoms_qh);
  } else if (basis_set_p == "6s6p_l") {
    shells_p = make_6s6p_l_basis(atoms_qh);
  } else if (basis_set_p == "6s6p6d_l") {
    shells_p = make_6s6p6d_l_basis(atoms_qh);
  } else if (basis_set_p == "6s6p6d6f_l") {
    shells_p = make_6s6p6d6f_l_basis(atoms_qh);
  } else if (basis_set_p == "4s_lr") {
    shells_p = make_4s_lr_basis(atoms_qh);
  } else if (basis_set_p == "4s4p_lr") {
    shells_p = make_4s4p_lr_basis(atoms_qh);
  } else if (basis_set_p == "4s4p4d_lr") {
    shells_p = make_4s4p4d_lr_basis(atoms_qh);
  } else if (basis_set_p == "4s4p4d4f_lr") {
    shells_p = make_4s4p4d4f_lr_basis(atoms_qh);
  } else if (basis_set_p == "6s_lr") {
    shells_p = make_6s_lr_basis(atoms_qh);
  } else if (basis_set_p == "6s6p_lr") {
    shells_p = make_6s6p_lr_basis(atoms_qh);
  } else if (basis_set_p == "6s6p6d_lr") {
    shells_p = make_6s6p6d_lr_basis(atoms_qh);
  } else if (basis_set_p == "6s6p6d6f_lr") {
    shells_p = make_6s6p6d6f_lr_basis(atoms_qh);
  } else if (basis_set_p == "6s6p6d6f4g") {
    shells_p = make_6s6p6d6f4g_basis(atoms_qh);
  } else if (basis_set_p == "5s5p5d5f4g") {
    shells_p = make_5s5p5d5f4g_basis(atoms_qh);
  } else if (basis_set_p == "5s5p5d5f") {
    shells_p = make_5s5p5d5f_basis(atoms_qh);
  }

  return shells_p;
}

Eigen::MatrixXd symmetric_orthogonalization(const Eigen::MatrixXd &S) {

  Eigen::SelfAdjointEigenSolver<Eigen::MatrixXd> es(S);
  Eigen::VectorXd D = es.eigenvalues();
  Eigen::MatrixXd V = es.eigenvectors();

  for (auto i = 0; i < D.rows(); i++)
    D(i) = pow(D(i),-0.5);

  Eigen::MatrixXd X;
  X = V*D.asDiagonal()*V.transpose();

  return X;
}

std::tuple<Matrix, Matrix, size_t, double, double> gensqrtinv(
    const Matrix& S, bool symmetric = false,
    double max_condition_number = 1e8) {
  Eigen::SelfAdjointEigenSolver<Matrix> eig_solver(S);
  auto U = eig_solver.eigenvectors();
  auto s = eig_solver.eigenvalues();
  auto s_max = s.maxCoeff();
  auto condition_number = std::min(
      s_max / std::max(s.minCoeff(), std::numeric_limits<double>::min()),
      1.0 / std::numeric_limits<double>::epsilon());
  auto threshold = s_max / max_condition_number;
  std::cout << "threshold condition number = " << threshold << std::endl;
  long n = s.rows();
  long n_cond = 0;
  for (long i = n - 1; i >= 0; --i) {
    if (s(i) >= threshold) {
      ++n_cond;
    } else
      i = 0;  // skip rest since eigenvalues are in ascending order
  }
  //std::cout << "n_cond = " << n_cond << std::endl;

  auto sigma = s.bottomRows(n_cond);
  auto result_condition_number = sigma.maxCoeff() / sigma.minCoeff();
  auto sigma_sqrt = sigma.array().sqrt().matrix().asDiagonal();
  auto sigma_invsqrt = sigma.array().sqrt().inverse().matrix().asDiagonal();

  // make canonical X/Xinv
  auto U_cond = U.block(0, n - n_cond, n, n_cond);
  Matrix X = U_cond * sigma_invsqrt;
  Matrix Xinv = U_cond * sigma_sqrt;
  // convert to symmetric, if needed
  if (symmetric) {
    X = X * U_cond.transpose();
    Xinv = Xinv * U_cond.transpose();
  }
  return std::make_tuple(X, Xinv, size_t(n_cond), condition_number,
                         result_condition_number);
}

std::tuple<Matrix, Matrix, double> conditioning_orthogonalizer(
    const Matrix& S, double S_condition_number_threshold) {
  size_t obs_rank;
  double S_condition_number;
  double XtX_condition_number;
  Matrix X, Xinv;

  assert(S.rows() == S.cols());

  std::tie(X, Xinv, obs_rank, S_condition_number, XtX_condition_number) =
      gensqrtinv(S, false, S_condition_number_threshold);
  auto obs_nbf_omitted = (long)S.rows() - (long)obs_rank;
  //std::cout << "overlap condition number = " << S_condition_number;
  if (obs_nbf_omitted > 0)
    std::cout << " (dropped " << obs_nbf_omitted << " "
              << (obs_nbf_omitted > 1 ? "fns" : "fn") << " to reduce to "
              << XtX_condition_number << ")";
  std::cout << std::endl;

  if (obs_nbf_omitted > 0) {
    Matrix should_be_I = X.transpose() * S * X;
    Matrix I = Matrix::Identity(should_be_I.rows(), should_be_I.cols());
    std::cout << "||X^t * S * X - I||_2 = " << (should_be_I - I).norm()
              << " (should be 0)" << std::endl;
  }

  return std::make_tuple(X, Xinv, XtX_condition_number);
}

Eigen::MatrixXd fock_build(const int nbasis, Eigen::MatrixXd &P, const Eigen::MatrixXd &H_core, const TensorRank4 &g) {

  Eigen::MatrixXd F(nbasis, nbasis);

  for (auto mu = 0; mu < nbasis; mu++) {
    for (auto nu = 0; nu < nbasis; nu++) {
      double integral = 0.0;
      for (auto sigma = 0; sigma < nbasis; sigma++) {
        for (auto lamda = 0; lamda < nbasis; lamda++) {
          integral += P(lamda,sigma)*(1.0*g(mu,nu,sigma,lamda)-0.5*g(mu,lamda,sigma,nu));
        }
      }
      F(mu,nu) = H_core(mu,nu) + integral;
    }
  }

  return F;
}

Eigen::MatrixXd fock_build_e(const int nbasis_e,
                             const int nbasis_p,
                             Eigen::MatrixXd &P_e,
                             Eigen::MatrixXd &P_p,
                             const Eigen::MatrixXd &H_core,
                             const TensorRank4 &g_ee,
                             const TensorRank4 &g_ep) {

  Eigen::MatrixXd F(nbasis_e, nbasis_e);

  for (auto mu = 0; mu < nbasis_e; mu++) {
    for (auto nu = 0; nu < nbasis_e; nu++) {
      double integral_e = 0.0;
      for (auto sigma = 0; sigma < nbasis_e; sigma++) {
        for (auto lamda = 0; lamda < nbasis_e; lamda++) {
          integral_e += P_e(lamda,sigma)*(1.0*g_ee(mu,nu,sigma,lamda)-0.5*g_ee(mu,sigma,nu,lamda));
        }
      }
      double integral_ep = 0.0;
      for (auto alpha = 0; alpha < nbasis_p; alpha++) {
        for (auto beta = 0; beta < nbasis_p; beta++) {
          integral_ep += P_p(beta,alpha)*g_ep(mu,nu,alpha,beta);
        }
      }
      F(mu,nu) = H_core(mu,nu) + integral_e - integral_ep;
    }
  }

  return F;
}

Eigen::MatrixXd fock_build_p(const int nbasis_e,
                             const int nbasis_p,
                             Eigen::MatrixXd &P_e,
                             Eigen::MatrixXd &P_p,
                             const Eigen::MatrixXd &H_core,
                             const TensorRank4 &g_pp,
                             const TensorRank4 &g_ep,
                             bool v_pp) {

  Eigen::MatrixXd F(nbasis_p, nbasis_p);

  for (auto alpha = 0; alpha < nbasis_p; alpha++) {
    for (auto beta = 0; beta < nbasis_p; beta++) {
      double integral_p = 0.0;
      for (auto gamma = 0; gamma < nbasis_p; gamma++) {
        for (auto delta = 0; delta < nbasis_p; delta++) {
          integral_p += P_p(delta,gamma)*(1.0*g_pp(alpha,beta,gamma,delta)-1.0*g_pp(alpha,gamma,beta,delta));
        }
      }
      double integral_ep = 0.0;
      for (auto mu = 0; mu < nbasis_e; mu++) {
        for (auto nu = 0; nu < nbasis_e; nu++) {
          integral_ep += P_e(nu,mu)*g_ep(mu,nu,alpha,beta);
        }
      }
      if (v_pp == true) {
        F(alpha,beta) = H_core(alpha,beta) + integral_p - integral_ep;
      } else if (v_pp == false) {
        F(alpha,beta) = H_core(alpha,beta) - integral_ep;
      }
    }
  }

  return F;
}

Eigen::MatrixXd occupied_slice_of_MO_coeff(const int nbasis, const int ndocc, Eigen::MatrixXd &C) {

  Eigen::MatrixXd C_occ(nbasis,ndocc);

  for (auto mu = 0; mu < nbasis; mu++) {
    for (auto i = 0; i < ndocc; i++) {
      C_occ(mu,i) = C(mu,i);
    }
  }
  return C_occ;
}

double norm_P(Eigen::MatrixXd &P, Eigen::MatrixXd &P_guess) {
  double norm = 0.0;

  for (auto mu = 0; mu < P.rows(); mu++) {
    for (auto nu = 0; nu < P.cols(); nu++) {
      norm += sqrt(pow(P(mu,nu) - P_guess(mu,nu),2));
    }
  }

  return norm;
}

double compute_energy(const int nbasis, Eigen::MatrixXd &P, const Eigen::MatrixXd &H_core, Eigen::MatrixXd &F) {

  double E_electronic = 0.0;

  for (auto mu = 0; mu < nbasis; mu++) {
    for (auto nu = 0; nu < nbasis; nu++) {
      E_electronic += 0.5*P(nu,mu)*(H_core(mu,nu) + F(mu,nu));
    }
  }

  return E_electronic;
}

double compute_energy_neo(const int nbasis_e,
                          const int nbasis_p,
                          Eigen::MatrixXd &P_e,
                          Eigen::MatrixXd &P_p,
                          const Eigen::MatrixXd &H_core_e,
                          const Eigen::MatrixXd &H_core_p,
                          const TensorRank4 &g_ee,
                          const TensorRank4 &g_pp,
                          const TensorRank4 &g_ep) {

  double E_electronic_neo = 0.0;

  double E_e = 0.0;
  for (auto mu = 0; mu < nbasis_e; mu++) {
    for (auto nu = 0; nu < nbasis_e; nu++) {
      for (auto sigma = 0; sigma < nbasis_e; sigma++) {
        for (auto lamda = 0; lamda < nbasis_e; lamda++) {
          E_e += 0.5*P_e(nu,mu)*P_e(lamda,sigma)*(g_ee(mu,nu,sigma,lamda) - 0.5*g_ee(mu,sigma,nu,lamda));
        }
      }
      E_e += P_e(nu,mu)*H_core_e(mu,nu);
    }
  }

  double E_p = 0.0;
  for (auto alpha = 0; alpha < nbasis_p; alpha++) {
    for (auto beta = 0; beta < nbasis_p; beta++) {
      for (auto gamma = 0; gamma < nbasis_p; gamma++) {
        for (auto delta = 0; delta < nbasis_p; delta++) {
          E_p += 0.5*P_p(beta,alpha)*P_p(delta,gamma)*(g_pp(alpha,beta,gamma,delta) - g_pp(alpha,gamma,beta,delta));
        }
      }
      E_p += P_p(beta,alpha)*H_core_p(alpha,beta);
    }
  }

  double E_ep = 0.0;
  for (auto mu = 0; mu < nbasis_e; mu++) {
    for (auto nu = 0; nu < nbasis_e; nu++) {
      for (auto alpha = 0; alpha < nbasis_p; alpha++) {
        for (auto beta = 0; beta < nbasis_p; beta++) {
          E_ep += P_e(nu,mu)*P_p(beta,alpha)*g_ep(mu,nu,alpha,beta);
        }
      }
    }
  }

  E_electronic_neo = E_e + E_p - E_ep;

  return E_electronic_neo;
}

double compute_energy_neo2(const int nbasis_e,
                          const int nbasis_p,
                          Eigen::MatrixXd &P_e,
                          Eigen::MatrixXd &P_p,
                          const Eigen::MatrixXd &H_core_e,
                          const Eigen::MatrixXd &H_core_p,
                          const TensorRank4 &g_ee,
                          const TensorRank4 &g_pp,
                          const TensorRank4 &g_ep) {

  double E_electronic_neo = 0.0;

  double E_e = 0.0;
  for (auto mu = 0; mu < nbasis_e; mu++) {
    for (auto nu = 0; nu < nbasis_e; nu++) {
      for (auto sigma = 0; sigma < nbasis_e; sigma++) {
        for (auto lamda = 0; lamda < nbasis_e; lamda++) {
          E_e += 0.5*P_e(nu,mu)*P_e(lamda,sigma)*(g_ee(mu,nu,sigma,lamda) - 0.5*g_ee(mu,sigma,nu,lamda));
        }
      }
      E_e += P_e(nu,mu)*H_core_e(mu,nu);
    }
  }
  std::cout << "E_e = " << E_e << std::endl;

  double E_p = 0.0;
  for (auto alpha = 0; alpha < nbasis_p; alpha++) {
    for (auto beta = 0; beta < nbasis_p; beta++) {
      for (auto gamma = 0; gamma < nbasis_p; gamma++) {
        for (auto delta = 0; delta < nbasis_p; delta++) {
          E_p += 0.5*P_p(beta,alpha)*P_p(delta,gamma)*(g_pp(alpha,beta,gamma,delta) - g_pp(alpha,gamma,beta,delta));
        }
      }
      E_p += P_p(beta,alpha)*H_core_p(alpha,beta);
    }
  }
  std::cout << "E_p = " << E_p << std::endl;

  double E_ep = 0.0;
  for (auto mu = 0; mu < nbasis_e; mu++) {
    for (auto nu = 0; nu < nbasis_e; nu++) {
      for (auto alpha = 0; alpha < nbasis_p; alpha++) {
        for (auto beta = 0; beta < nbasis_p; beta++) {
          E_ep += P_e(nu,mu)*P_p(beta,alpha)*g_ep(mu,nu,alpha,beta);
        }
      }
    }
  }
  std::cout << "E_ep = " << E_ep << std::endl;

  E_electronic_neo = E_e + E_p - E_ep;
  //E_electronic_neo = E_e;
  return E_electronic_neo;
}

double compute_energy_electronic(const int nbasis_e,
                          Eigen::MatrixXd &P_e,
                          const Eigen::MatrixXd &H_core_e,
                          const TensorRank4 &g_ee) {

  double E_e = 0.0;
  for (auto mu = 0; mu < nbasis_e; mu++) {
    for (auto nu = 0; nu < nbasis_e; nu++) {
      for (auto sigma = 0; sigma < nbasis_e; sigma++) {
        for (auto lamda = 0; lamda < nbasis_e; lamda++) {
          E_e += 0.5*P_e(nu,mu)*P_e(lamda,sigma)*(g_ee(mu,nu,sigma,lamda) - 0.5*g_ee(mu,sigma,nu,lamda));
        }
      }
      E_e += P_e(nu,mu)*H_core_e(mu,nu);
    }
  }

  return E_e;
}

Eigen::MatrixXd hartree_fock(const double enuc, const int nbasis, const int ndocc, const Eigen::MatrixXd &S,
    const Eigen::MatrixXd &H_core, const TensorRank4 &g, Eigen::VectorXd &E_orb) {

  const auto start_total = std::chrono::high_resolution_clock::now();

  //Eigen::MatrixXd X = symmetric_orthogonalization(S);

  Matrix X, Xinv;
  double XtX_condition_number;

  double S_condition_number_threshold =
      1.0 / std::numeric_limits<double>::epsilon();
  std::tie(X, Xinv, XtX_condition_number) =
      conditioning_orthogonalizer(S, S_condition_number_threshold);

  Eigen::MatrixXd C;
  Eigen::MatrixXd P_guess;
  P_guess.setZero(nbasis,nbasis);

  Eigen::MatrixXd C_old;
  Eigen::MatrixXd C_new;

  double norm = 1.0;
  double threshold = 1e-10;
  double E_electronic;
  int count = 0;
  Eigen::MatrixXd F(nbasis, nbasis);
  Eigen::MatrixXd P;
  printf(" Hartree-Fock Energy\n");
  while (norm > threshold) {

    const auto start_it = std::chrono::high_resolution_clock::now();
    count++;
    F = fock_build(nbasis, P_guess, H_core, g);

    Eigen::MatrixXd Ft = X.transpose()*F*X;

    Eigen::SelfAdjointEigenSolver<Eigen::MatrixXd> es(Ft);
    Eigen::MatrixXd Ct = es.eigenvectors();
    E_orb = es.eigenvalues();

    C = X*Ct;

    Eigen::MatrixXd C_occ = occupied_slice_of_MO_coeff(nbasis,ndocc,C);

    P = 2.0*C_occ*C_occ.transpose();

    norm = norm_P(P,P_guess);
    P_guess = 0.2*P_guess+0.8*P;
    E_electronic = compute_energy(nbasis, P, H_core, F);

    const auto stop_it = std::chrono::high_resolution_clock::now();
    const std::chrono::duration<double> time_elapsed_it = stop_it - start_it;

    if (count == 1) {
      printf(" Iter        E_electronic        E_total              norm          time per it./sec \n");}
    printf("  %02d %20.12f %20.12f %20.12e  %10.5lf\n", count, E_electronic, E_electronic + enuc, norm, time_elapsed_it.count());
  }

  //std::cout << "E_orb" << std::endl;
  //std::cout << E_orb << std::endl;

  //std::cout << "F" << std::endl;
  //std::cout << C.transpose()*F*C << std::endl;

  const auto stop_total = std::chrono::high_resolution_clock::now();
  const std::chrono::duration<double> time_elapsed_total = stop_total - start_total;
  printf("Total time for Hartree-Fock module: %10.5lf sec\n", time_elapsed_total.count());
  return C;
}

void neo_hartree_fock(const double enuc, Electrons &electrons, Protons &protons, Options &options,
                      const TensorRank4 &g_ee, const TensorRank4 &g_pp, const TensorRank4 &g_ep) {

  const auto start_total = std::chrono::high_resolution_clock::now();

  //electronic stuff
  Eigen::MatrixXd P_guess_e;
  int nbasis_e = electrons.nao_e;
  P_guess_e.setZero(nbasis_e,nbasis_e);
  Eigen::MatrixXd F_e(nbasis_e, nbasis_e);
  Eigen::MatrixXd P_e;
  Matrix X_e, Xinv_e;
  double XtX_condition_number_e;
  double S_condition_number_threshold_e = options.S_thresold_e / std::numeric_limits<double>::epsilon();
  std::tie(X_e, Xinv_e, XtX_condition_number_e) =
      conditioning_orthogonalizer(electrons.S_e, S_condition_number_threshold_e);

  //protonic stuff
  Eigen::MatrixXd P_guess_p;
  int nbasis_p = protons.nao_p;
  P_guess_p.setZero(nbasis_p,nbasis_p);
  Eigen::MatrixXd F_p(nbasis_p, nbasis_p);
  Eigen::MatrixXd P_p;
  Matrix X_p, Xinv_p;
  double XtX_condition_number_p;
  double S_condition_number_threshold_p =
      1.0 / std::numeric_limits<double>::epsilon();
  std::tie(X_p, Xinv_p, XtX_condition_number_p) =
      conditioning_orthogonalizer(protons.S_p, options.S_thresold_p*S_condition_number_threshold_p);
  //libint2::DIIS<Eigen::MatrixXd> diis(300);
  libint2::DIIS<Eigen::MatrixXd> diis(30);  // originally

  double E_electronic;
  double diff_E = 1.0;
  double diff_E_neo = 1.0;

  //old setup was threshold_E_neo = 1e-07, threshold_e = 1e-5
  //threshold for neo energy convergence
  double threshold_E_neo = options.threshold_E_neo;
  double E_electronic_neo_old = 0;
  double E_electronic_neo;

  bool v_pp = options.v_pp;

  double E_electronic_old = 0;

  //can be pp-RPA or NEO-HF
  std::string method = "NEO-HF";

  int count = 0;

  //remove when running pp-RPA
  if (method == "pp-RPA") {

    double norm_e = 1.0;
    double threshold_e = options.P_threshold_e;
    int count_e = 0;
    //printf(" Hartree-Fock Energy of electrons\n");
    while (fabs(diff_E) > threshold_e) {

      const auto start_it = std::chrono::high_resolution_clock::now();
      count_e++;

      F_e = fock_build_e(nbasis_e, nbasis_p, P_guess_e, P_guess_p, electrons.H_core_e, g_ee, g_ep);

      Eigen::MatrixXd Ft_e = X_e.transpose()*F_e*X_e;

      Eigen::SelfAdjointEigenSolver<Eigen::MatrixXd> es(Ft_e);
      Eigen::MatrixXd Ct_e = es.eigenvectors();
      electrons.E_e = es.eigenvalues();

      Eigen::MatrixXd C_e = X_e*Ct_e;
      electrons.C_e = C_e;
      electrons.nmo_e = C_e.cols();

      Eigen::MatrixXd C_occ_e = occupied_slice_of_MO_coeff(nbasis_e, electrons.ndocc_e, electrons.C_e);

      P_e = 2.0*C_occ_e*C_occ_e.transpose();

      //P_guess_e = 0.2*P_guess_e+0.8*P_e;
      P_guess_e = 0.4*P_guess_e+0.6*P_e;

      E_electronic = compute_energy_electronic(nbasis_e, P_e, electrons.H_core_e, g_ee);
      diff_E = E_electronic - E_electronic_old;
      E_electronic_old = E_electronic;

      const auto stop_it = std::chrono::high_resolution_clock::now();
      const std::chrono::duration<double> time_elapsed_it = stop_it - start_it;

      if (count_e == 1) {
        printf(" Iter        E_electronic        E_total_el              diff_E          time per it./sec \n");}
      printf("  %02d %20.12f %20.12f %20.12e  %10.5lf\n", count_e, E_electronic, E_electronic + enuc, fabs(diff_E), time_elapsed_it.count());
    }

    F_p = fock_build_p(nbasis_e, nbasis_p, P_guess_e, P_guess_p, protons.H_core_p, g_pp, g_ep, v_pp);

    Eigen::SelfAdjointEigenSolver<Eigen::MatrixXd> es(X_p.transpose()*F_p*X_p);

    Eigen::MatrixXd Ct_p = es.eigenvectors();
    protons.E_p = es.eigenvalues();
    std::cout << protons.E_p << std::endl;

    Eigen::MatrixXd C_p = X_p*Ct_p;
    protons.C_p = C_p;
    protons.nmo_p = C_p.cols();

  } else if (method == "NEO-HF") {
    while (fabs(diff_E_neo) > threshold_E_neo) {

      double norm_e = 1.0;
      double threshold_e = options.P_threshold_e;
      //double threshold_e = 1e-5;
      int count_e = 0;
      //printf(" Hartree-Fock Energy of electrons\n");
      while (norm_e > threshold_e) {

        const auto start_it = std::chrono::high_resolution_clock::now();
        count_e++;

        F_e = fock_build_e(nbasis_e, nbasis_p, P_guess_e, P_guess_p, electrons.H_core_e, g_ee, g_ep);

        Eigen::MatrixXd Ft_e = X_e.transpose()*F_e*X_e;

        Eigen::SelfAdjointEigenSolver<Eigen::MatrixXd> es(Ft_e);
        Eigen::MatrixXd Ct_e = es.eigenvectors();
        electrons.E_e = es.eigenvalues();

        Eigen::MatrixXd C_e = X_e*Ct_e;
        electrons.C_e = C_e;
        electrons.nmo_e = C_e.cols();
        /*
        Eigen::GeneralizedSelfAdjointEigenSolver<Eigen::MatrixXd> es(F_e, electrons.S_e);
        electrons.C_e = es.eigenvectors();
        electrons.E_e = es.eigenvalues();*/

        Eigen::MatrixXd C_occ_e = occupied_slice_of_MO_coeff(nbasis_e, electrons.ndocc_e, electrons.C_e);

        P_e = 2.0*C_occ_e*C_occ_e.transpose();

        norm_e = norm_P(P_e,P_guess_e);
        //P_guess_e = 0.2*P_guess_e+0.8*P_e;
        P_guess_e = 0.4*P_guess_e+0.6*P_e;

        const auto stop_it = std::chrono::high_resolution_clock::now();
        const std::chrono::duration<double> time_elapsed_it = stop_it - start_it;

        double E_electronic_neo2 = compute_energy_neo2(nbasis_e, nbasis_p, P_e, P_guess_p, electrons.H_core_e,
                  protons.H_core_p, g_ee, g_pp, g_ep);

        if (count_e == 1) {
          printf(" Iter_e   E_electronic_neo   norm_e          time per it./sec \n");}
        printf("  %02d %20.12f %20.12e  %10.5lf\n", count_e, E_electronic_neo2 + enuc, norm_e, time_elapsed_it.count());
        //printf("  %02d %20.12e  %10.5lf\n", count_e, norm_e, time_elapsed_it.count());

      }

      double norm_p = 1.0;
      //double threshold_p = 1e-5;
      double threshold_p =  options.P_threshold_p;
      int count_p = 0;

      //printf(" Hartree-Fock Energy of quantum protons\n");
      while (norm_p > threshold_p) {

        const auto start_it = std::chrono::high_resolution_clock::now();
        count_p++;
        F_p = fock_build_p(nbasis_e, nbasis_p, P_guess_e, P_guess_p, protons.H_core_p, g_pp, g_ep, v_pp);

        Eigen::MatrixXd FD_comm = F_p * P_guess_p * protons.S_p - protons.S_p * P_guess_p * F_p;

        Eigen::MatrixXd F_diis_p = F_p;

        diis.extrapolate(F_diis_p, FD_comm);

        Eigen::SelfAdjointEigenSolver<Eigen::MatrixXd> es(X_p.transpose()*F_diis_p*X_p);

        Eigen::MatrixXd Ct_p = es.eigenvectors();
        protons.E_p = es.eigenvalues();

        Eigen::MatrixXd C_p = X_p*Ct_p;
        protons.C_p = C_p;
        protons.nmo_p = C_p.cols();
        /*
        Eigen::GeneralizedSelfAdjointEigenSolver<Eigen::MatrixXd> es(F_p, protons.S_p);
        protons.C_p = es.eigenvectors();
        protons.E_p = es.eigenvalues();*/

        Eigen::MatrixXd C_occ_p = occupied_slice_of_MO_coeff(nbasis_p, protons.nproton, protons.C_p);

        P_p = C_occ_p*C_occ_p.transpose();
        //std::cout << "P_p.rows() = " << P_p.rows() << " P_p.cols() = " << P_p.cols() << std::endl;

        norm_p = norm_P(P_p,P_guess_p);

        //P_guess_p = 0.4*P_guess_p+0.6*P_p;
        P_guess_p = 0.0*P_guess_p+1.0*P_p; //original result for matching psh

        Eigen::MatrixXd P_guess_e;
        P_guess_e.setZero(nbasis_e,nbasis_e);
        double E_electronic_neo2 = compute_energy_neo2(nbasis_e, nbasis_p, P_e, P_p, electrons.H_core_e,
                  protons.H_core_p, g_ee, g_pp, g_ep);

        const auto stop_it = std::chrono::high_resolution_clock::now();
        const std::chrono::duration<double> time_elapsed_it = stop_it - start_it;

        if (count_p == 1) {
          printf(" Iter_p   E_electronic_neo2   norm_p          time per it./sec \n");}
        printf("  %02d %20.12f %20.12e  %10.5lf\n", count_p, E_electronic_neo2 + enuc, norm_p, time_elapsed_it.count());
      }

      E_electronic_neo = compute_energy_neo(nbasis_e, nbasis_p, P_e, P_p, electrons.H_core_e,
          protons.H_core_p, g_ee, g_pp, g_ep);

      count++;
      diff_E_neo = E_electronic_neo - E_electronic_neo_old;
      E_electronic_neo_old = E_electronic_neo;
      //std::cout << "E_electronic_neo = " << E_electronic_neo << std::endl;

      if (count == 1) {
        printf(" Iter    E_electronic_neo           E_total           diff_E_neo\n");}
      printf("  %02d %20.12f %20.12f %20.12e\n", count, E_electronic_neo, E_electronic_neo + enuc, diff_E_neo);

    }
  }


  printf("Final NEO-HF energy = %20.12f \n", E_electronic_neo + enuc);

  const auto stop_total = std::chrono::high_resolution_clock::now();
  const std::chrono::duration<double> time_elapsed_total = stop_total - start_total;
  printf("Total time for NEO Hartree-Fock module: %10.5lf sec\n", time_elapsed_total.count());

  electrons.E_electronic_tot = E_electronic_neo;
}

int main(int argc, char *argv[]) {

  using std::cout;
  using std::cerr;
  using std::endl;

  using libint2::Shell;
  using libint2::Engine;
  using libint2::Operator;

  // initializes the Libint integrals library ... now ready to compute
  libint2::initialize();

  /*** =========================== ***/
  /*** initialize molecule         ***/
  /*** =========================== ***/

  //CONV or NEO
  std::string module = "CONV";

  if (module == "CONV") {
    // read geometry from a file; by default read from h2o.xyz, else take filename (.xyz) from the command line
    //const auto filename = "qc-code/h2o-crawford.xyz";
    const auto filename = (argc > 1) ? argv[1] : "qc-code/h2o-gaussian.xyz";
    std::string basis_set = "sto-3g";
    //std::string basis_set = "cc-pVDZ";

    //const std::string filename;
    std::vector<Atoms> atoms = read_geometry(filename);

    // count the number of electrons
    auto nelectron = 0;
    for (auto i = 0; i < atoms.size(); ++i)
      nelectron += atoms[i].atomic_number;

    if (strcmp(filename,"qc-code/fhf.xyz") == 0) nelectron++;
    if (strcmp(filename,"qc-code/h-.xyz") == 0) nelectron++;

    const auto ndocc = nelectron / 2;

    std::cout << "nelectron = " << nelectron << std::endl;
    std::cout << "ndocc = " << ndocc << std::endl;

    // compute the nuclear repulsion energy
    auto enuc = 0.0;
    for (auto i = 0; i < atoms.size(); i++)
      for (auto j = i + 1; j < atoms.size(); j++) {
        auto xij = atoms[i].x - atoms[j].x;
        auto yij = atoms[i].y - atoms[j].y;
        auto zij = atoms[i].z - atoms[j].z;
        auto r2 = xij*xij + yij*yij + zij*zij;
        auto r = sqrt(r2);
        enuc += atoms[i].atomic_number * atoms[j].atomic_number / r;
      }
    std::cout << "\tNuclear repulsion energy = " << enuc << endl;

    /*** =========================== ***/
    /*** create basis set            ***/
    /*** =========================== ***/

    auto shells = make_sto3g_basis(atoms);
    if (basis_set == "6-31G") {
      shells = make_631g_basis(atoms);
    } else if (basis_set == "6-311G") {
      shells = make_6311g_basis(atoms);
    } else if (basis_set == "SVP") {
          shells = make_svp_basis(atoms);
    } else if (basis_set == "cc-pVDZ") {
      shells = make_cc_pvdz_basis(atoms);
    } else if (basis_set == "aug-cc-pVDZ") {
      shells = make_aug_cc_pvdz_basis(atoms);
    } else if (basis_set == "cc-pVTZ") {
      shells = make_cc_pvtz_basis(atoms);
    } else if (basis_set == "aug-cc-pVTZ") {
      shells = make_aug_cc_pvtz_basis(atoms);
    } else if (basis_set == "aug-cc-pVQZ") {
      shells = make_aug_cc_pvqz_basis(atoms);
    } else if (basis_set == "aug-pcseg-0") {
      shells = make_aug_pcseg_0_basis(atoms);
    }

    size_t nao = 0;
    for (auto s=0; s<shells.size(); ++s)
      nao += shells[s].size();

    std::cout << "nao = " << nao << std::endl;

    /*** =========================== ***/
    /*** compute 1-e integrals       ***/
    /*** =========================== ***/

    //taken from the:
    //https://github.com/evaleev/libint/wiki/using-modern-CPlusPlus-API-(legacy)
    /*std::string xyzfilename = "qc-code/h2o-crawford.xyz"; //
    std::ifstream input_file(xyzfilename);
    std::vector<libint2::Atom> atom = libint2::read_dotxyz(input_file);
    libint2::BasisSet obs("STO-3G", atom);
    obs.set_pure(false);*/ // use cartesian gaussians

    // compute overlap integrals
    auto S = compute_1body_ints(shells, Operator::overlap);
    Eigen::MatrixXd S_forMP2 = Eigen::MatrixXd::Zero(nao,nao);
      for(int i = 0; i < nao; i++) {
        for(int j = 0; j < nao; j++) {
          S_forMP2(i,j) = S(i,j);
        }
      }

    Eigen::MatrixXd mu_x, mu_y, mu_z;
    compute_dipole_integrals(shells, Operator::emultipole1, mu_x, mu_y, mu_z);

    // compute kinetic-energy integrals
    auto T = compute_1body_ints(shells, Operator::kinetic);

    // compute nuclear-attraction integrals
    Matrix V = compute_1body_ints(shells, Operator::nuclear, atoms);

    // Core Hamiltonian = T + V
    Matrix H_core = T + V;
    Eigen::MatrixXd H_core_forMP2 = Eigen::MatrixXd::Zero(nao,nao);
    for(int i = 0; i < nao; i++) {
      for(int j = 0; j < nao; j++) {
        H_core_forMP2(i,j) = H_core(i,j);
      }
    }
    // T and V no longer needed, free up the memory
    T.resize(0,0);
    V.resize(0,0);

    TensorRank4 g = compute_2body_ints(shells);

    Eigen::VectorXd E_orb;
    Eigen::MatrixXd C = hartree_fock(enuc, nao, ndocc, S, H_core, g, E_orb);
    std::cout << "Hartree Fock code Evals size : " << E_orb.size() << std::endl;
    Eigen::MatrixXd C_occ(nao,ndocc);
    
    double EMP2=0.0;
    //SpinOrbitalMP2 MyMP2Instance(&g, &C, nao, ndocc, &E_orb, &H_core_forMP2, &S_forMP2);
    //SpinFreeMP2 MySpinFreeMP2Instance(&g, &C, nao, ndocc, &E_orb, &H_core_forMP2, &S_forMP2);
    //OOSpinOrbitalMP2 MyOOMP2Instance(&g, C, nao, ndocc, &E_orb, &H_core_forMP2, &S_forMP2, enuc);
    SpinOrbitalCCD MyCCDInstance(&g, C, nao, ndocc, &E_orb, &H_core_forMP2, &S_forMP2, enuc);
    //EMP2=RunMP2spinfreenoncanon(&g, &C, nao, ndocc, &E_orb, &H_core_forMP2, &S_forMP2);
    ////EMP2=RunMP2spinorbitalnoncanon(&g, &C, nao, ndocc, &E_orb, &H_core_forMP2, &S_forMP2);
    //std::cout << "MP2 correction: " << EMP2 << endl;
    //printf("MP2 correction: %2.12f \n", MyMP2Instance.);

    for (int mu = 0; mu < nao; mu++) {
      for (int i = 0; i < ndocc; i++) {
        C_occ(mu,i) = C(mu,i);
      }
    }
    for (auto mu = 0; mu < nao; mu++) {
      //printf("%12f\n", C(mu,1));
    }
    Eigen::MatrixXd P = 2.0*C_occ*C_occ.transpose();

    /*
    std::cout << "Mu-X = " << -(P*mu_x).trace() << std::endl;
    std::cout << "Mu-Y = " << -(P*mu_y).trace() + atoms[0].atomic_number*atoms[0].y + atoms[1].atomic_number*atoms[1].y + atoms[2].atomic_number*atoms[2].y << std::endl;
    std::cout << "Mu-Z = " << -(P*mu_z).trace() << std::endl;
    */
    //performs regular cis and tdhf calculation
    //cis_calculation(nao, ndocc, C, g, E_orb);
    //cis_d_inf_calculation(nao, ndocc, C, g, E_orb);
    //tdhf_calculation(nao, ndocc, C, g, E_orb);

    //performs regular electronic CCSD calculations
    //double E_CCSD = ccsd_energy(nao, ndocc, C, E_orb, g);

    //performs LR-CC2
    //lr_cc2_sf(nao, ndocc, C, E_orb, g);
    //this function also contains construction of the full CISD Hamiltonian
    //lr_cc2_so(nao, ndocc, C, E_orb, g);

    //code generated CC equations along with the EOM equations
    //code_generated_cc_so(nao, ndocc, C, E_orb, g);
    //code_generated_cc_sf(nao, ndocc, C, E_orb, H_core, g);

    //performs EOM-CCSD (eom has a minor bug)
    //eom_ccsd_sf(nao, ndocc, C, E_orb, g);

    std::string method = "noDBOC";
    if (method == "DBOC") {

    }


  } else if (module == "NEO") {

    //defining NEO SCF options
    Options options;

    //can be CISD or pp-RPA or LR-CC2 or code-generated-so/sf, NEO-TDHF or R-CCD
    options.v_pp = false;
    options.method = "noCISD";
    options.frozen_core = false;
    options.plot = "old";
    options.type = "sp";
    options.proton_position = true;

    //options.threshold_E_neo = 1e-07;

    //type of calculation, can be opt or sp
    //opt (optimized positon of the H basis set) and sp (single point calculation)
    std::string type = "sp";

    if (options.type == "sp") {
      //here we start with the NEO-HF

      //here we read an input geometry, where quantum hydrogen (Hq) has charge number 0
      //since this greatly simplify the evaluation of the classical nuclei-electron attraction
      //as well as classical nuclei - quantum nucleus repulsion integrals
      const auto filename_neo = (argc > 1) ? argv[1] : "qc-code/hqcn-tanner_transition.xyz";
      std::vector<Atoms> atoms_neo = read_geometry(filename_neo);
      //determine quantum hydrogen
      std::vector<Atoms> atoms_qh = read_geometry_qh(filename_neo);

      //definition of the basis set for electrons
      std::string basis_set_e = (argc > 2) ? argv[2] : "cc-pVTZ";
      //definition of the basis set for quantum protons
      std::string basis_set_p = (argc > 3) ? argv[3] : "sp";

      Electrons electrons;
      Protons protons;

      // count the number of electrons
      auto nelectron = 0;
      auto nproton = 0;
      for (auto i = 0; i < atoms_neo.size(); ++i) {
        if (atoms_neo[i].atomic_number == 0) {
          nproton++;
          nelectron++;
        } else {
          nelectron += atoms_neo[i].atomic_number;
        }
      }

      // count the number of frozen core orbitals
      size_t nfc_e = 0;
      for (auto i = 0; i < atoms_neo.size(); ++i) {
        if (atoms_neo[i].atomic_number == 3) {
          nfc_e++;
        } else if (atoms_neo[i].atomic_number == 4) {
          nfc_e++;
        } else if (atoms_neo[i].atomic_number == 5) {
          nfc_e++;
        } else if (atoms_neo[i].atomic_number == 6) {
          nfc_e++;
        } else if (atoms_neo[i].atomic_number == 7) {
          nfc_e++;
        } else if (atoms_neo[i].atomic_number == 8) {
          nfc_e++;
        } else if (atoms_neo[i].atomic_number == 9) {
          nfc_e++;
        } else if (atoms_neo[i].atomic_number == 10) {
          nfc_e++;
        } else if (atoms_neo[i].atomic_number == 11) {
          nfc_e = nfc_e + 5;
        } else if (atoms_neo[i].atomic_number == 12) {
          nfc_e = nfc_e + 5;
        } else if (atoms_neo[i].atomic_number == 13) {
          nfc_e = nfc_e + 5;
        } else if (atoms_neo[i].atomic_number == 14) {
          nfc_e = nfc_e + 5;
        } else if (atoms_neo[i].atomic_number == 15) {
          nfc_e = nfc_e + 5;
        } else if (atoms_neo[i].atomic_number == 16) {
          nfc_e = nfc_e + 5;
        } else if (atoms_neo[i].atomic_number == 17) {
          nfc_e = nfc_e + 5;
        } else if (atoms_neo[i].atomic_number == 18) {
          nfc_e = nfc_e + 5;
        }
      }
      if (!options.frozen_core) {
        nfc_e = 0;
      }
      std::cout << "nfc_e = " << nfc_e << std::endl;

      if (strcmp(filename_neo,"fhqf.xyz") == 0) nelectron++;
      if (strcmp(filename_neo,"qc-code/h2.xyz") == 0) nelectron++;
      if (strcmp(filename_neo,"qc-code/fhqf.xyz") == 0) nelectron++;
      if (strcmp(filename_neo,"qc-code/fhqf_off_axis.xyz") == 0) nelectron++;
      if (strcmp(filename_neo,"qc-code/fhqf_on_axis.xyz") == 0) nelectron++;
      if (strcmp(filename_neo,"fhqf_off_axis.xyz") == 0) nelectron++;
      if (strcmp(filename_neo,"fhqf_on_axis.xyz") == 0) nelectron++;
      if (strcmp(filename_neo,"qc-code/fhqf_coraline.xyz") == 0) nelectron++;
      if (strcmp(filename_neo,"qc-code/nh4.xyz") == 0) nelectron--;
      if (strcmp(filename_neo,"qc-code/hqh2o.xyz") == 0) nelectron--;
      if (strcmp(filename_neo,"qc-code/hco.xyz") == 0) nelectron--;
      if (strcmp(filename_neo,"qc-code/hqh2s.xyz") == 0) nelectron--;
      if (strcmp(filename_neo,"qc-code/hqn2.xyz") == 0) nelectron--;
      if (strcmp(filename_neo,"qc-code/be.xyz") == 0) nelectron--;
      if (strcmp(filename_neo,"qc-code/ch3nh3.xyz") == 0) nelectron--;
      if (strcmp(filename_neo,"qc-code/c2h4.xyz") == 0) nelectron--;
      if (strcmp(filename_neo,"qc-code/nh3.xyz") == 0) nelectron--;
      if (strcmp(filename_neo,"qc-code/h2.xyz") == 0) nelectron--;
      if (strcmp(filename_neo,"qc-code/cn+.xyz") == 0) nelectron=nelectron-2;
      if (strcmp(filename_neo,"qc-code/cn+.xyz") == 0) nproton--;
      if (strcmp(filename_neo,"qc-code/cn+_old.xyz") == 0) nelectron=nelectron-2;
      if (strcmp(filename_neo,"qc-code/cn+_old.xyz") == 0) nproton--;
      if (strcmp(filename_neo,"qc-code/psh2.xyz") == 0) nproton--;

      electrons.nelectron = nelectron;
      protons.nproton = nproton;
      //number of electrons
      electrons.ndocc_e = nelectron / 2;
      //number of frozen core orbitals
      electrons.nfc_e = nfc_e;

      std::cout << "nelectron = " << electrons.nelectron << std::endl;
      std::cout << "nproton = " << protons.nproton << std::endl;
      std::cout << "ndocc_e = " << electrons.ndocc_e << std::endl;

      // compute the nuclear repulsion energy of classical nuclei
      auto enuc_cl = 0.0;
      for (auto i = 0; i < atoms_neo.size(); i++)
        for (auto j = i + 1; j < atoms_neo.size(); j++) {
          auto xij = atoms_neo[i].x - atoms_neo[j].x;
          auto yij = atoms_neo[i].y - atoms_neo[j].y;
          auto zij = atoms_neo[i].z - atoms_neo[j].z;
          auto r2 = xij*xij + yij*yij + zij*zij;
          auto r = sqrt(r2);
          enuc_cl += atoms_neo[i].atomic_number * atoms_neo[j].atomic_number / r;
        }
      cout << "Nuclear repulsion energy of classical nuclei = " << enuc_cl << endl;

      //make basis set for electrons
      auto shells_e = make_sto3g_basis(atoms_neo);
      if (basis_set_e == "6-31G") {
        shells_e = make_631g_basis(atoms_neo);
      } else if (basis_set_e == "6-311G") {
        shells_e = make_6311g_basis(atoms_neo);
      } else if (basis_set_e == "SVP") {
        shells_e = make_svp_basis(atoms_neo);
      } else if (basis_set_e == "cc-pVDZ") {
        shells_e = make_cc_pvdz_basis(atoms_neo);
      } else if (basis_set_e == "aug-cc-pVDZ") {
        shells_e = make_aug_cc_pvdz_basis(atoms_neo);
      } else if (basis_set_e == "aug-cc-pVDZ-electron") {
        shells_e = make_aug_cc_pvdz_basis_qh(atoms_neo);
      } else if (basis_set_e == "aug-cc-pVTZ-electron") {
        shells_e = make_aug_cc_pvtz_basis_qh(atoms_neo);
      } else if (basis_set_e == "aug-cc-pVQZ-electron") {
        shells_e = make_aug_cc_pvqz_basis_qh(atoms_neo);
      } else if (basis_set_e == "aug-cc-pV5Z-electron") {
        shells_e = make_aug_cc_pv5z_basis_qh(atoms_neo);
      } else if (basis_set_e == "aug-cc-pV6Z-electron") {
        shells_e = make_aug_cc_pv6z_basis_qh(atoms_neo);
      } else if (basis_set_e == "cc-pVTZ") {
        shells_e = make_cc_pvtz_basis(atoms_neo);
      } else if (basis_set_e == "aug-cc-pVTZ") {
        shells_e = make_aug_cc_pvtz_basis(atoms_neo);
      } else if (basis_set_e == "cc-pVQZ") {
        shells_e = make_cc_pvqz_basis(atoms_neo);
      } else if (basis_set_e == "aug-cc-pVQZ") {
        shells_e = make_aug_cc_pvqz_basis(atoms_neo);
      } else if (basis_set_e == "6s3p1delectron") {
        shells_e = make_6s3p1delectron_basis(atoms_neo);
      } else if (basis_set_e == "6s3p1delectron_es") {
        shells_e = make_6s3p1delectron_es_basis(atoms_neo);
      }

      size_t nao_e = 0;
      for (size_t s=0; s<shells_e.size(); ++s)
        nao_e += shells_e[s].size();

      electrons.nao_e = nao_e;
      std::cout << "nao_e = " << electrons.nao_e << std::endl;

      // compute electronic overlap integrals
      electrons.S_e = compute_1body_ints(shells_e, Operator::overlap);
      //std::cout << "S_e = " << electrons.S_e << std::endl;

      // compute kinetic-energy integrals
      auto T_e = compute_1body_ints(shells_e, Operator::kinetic);

      // compute nuclear-attraction integrals
      Matrix V_e = compute_1body_ints(shells_e, Operator::nuclear, atoms_neo);

      // Core Hamiltonian of electrons
      electrons.H_core_e = T_e + V_e;

      // compute electron-electron repulsion integrals
      //std::cout << "Starting with g_ee_mat" << std::endl;
      //Eigen::MatrixXd g_ee_mat = compute_2body_ints_mat(shells_e);
      //std::cout << "Done with g_ee_mat" << std::endl;
      TensorRank4 g_ee = compute_2body_ints(shells_e);

      //make basis set for quantum protons
      auto shells_p = make_protonic_basis_set(atoms_qh, basis_set_p);

      size_t nao_p = 0;
      for (auto s=0; s<shells_p.size(); ++s)
        nao_p += shells_p[s].size();

      protons.nao_p = nao_p;
      std::cout << "nao_p = " << nao_p << std::endl;

      protons.S_p = compute_1body_ints(shells_p, Operator::overlap);

      auto T_p = compute_1body_ints(shells_p, Operator::kinetic);

      Matrix V_p = compute_1body_ints(shells_p, Operator::nuclear, atoms_neo);

      if (strcmp(filename_neo,"qc-code/psh.xyz") == 0) {
        // Core Hamiltonian of positrons
        protons.H_core_p = T_p - V_p;
      } else {
        // Core Hamiltonian of protons
        protons.H_core_p = T_p/(1.0*protons.m_p) - V_p;
        T_p = T_p/protons.m_p;
        //std::cout << T_p << std::endl;
      }

      // compute quantum proton-proton repulsion integrals
      TensorRank4 g_pp = compute_2body_ints(shells_p);

      // compute quantum electron-proton attraction integrals
      TensorRank4 g_ep = compute_2body_ints_ep(shells_e,shells_p);

      Eigen::MatrixXd mu_x, mu_y, mu_z;
      compute_dipole_integrals(shells_p, Operator::emultipole1, mu_x, mu_y, mu_z);

      std::cout << "mu_x" << std::endl;
      std::cout << mu_x << std::endl;
      //performs neo-hartree-fock calculation
      neo_hartree_fock(enuc_cl, electrons, protons, options, g_ee, g_pp, g_ep);
      //std::cout << protons.C_p << std::endl;

      /*
      Eigen::VectorXd orb(protons.nao_p);
      int orbital = 5;
      for (auto mu = 0; mu < protons.nao_p; mu++) {
        orb(mu) = protons.C_p(mu,orbital);
        //orb(mu) = electrons.C_e(mu,orbital);
      }
      for (auto mu = 0; mu < protons.nao_p; mu++) {
        printf("%12f\n", orb(mu)/orb.norm());
      }*/

      //calculating the position of the proton
      if (options.proton_position) {
        Eigen::MatrixXd mu_x, mu_y, mu_z;
        compute_dipole_integrals(shells_p, Operator::emultipole1, mu_x, mu_y, mu_z);
        Eigen::MatrixXd C_occ(protons.nao_p,protons.nproton);
        C_occ = Eigen::MatrixXd::Zero(protons.nao_p,protons.nproton);
        for (auto mu = 0; mu < protons.nao_p; mu++) {
          for (auto I = 0; I < protons.nproton; I++) {
            C_occ(mu,I) = protons.C_p(mu,I);
          }
        }
        Eigen::MatrixXd P_p = C_occ*C_occ.transpose();

        std::cout << "<r>_x = " << (P_p*mu_x).trace() << std::endl;
        std::cout << "<r>_y = " << (P_p*mu_y).trace() << std::endl;
        std::cout << "<r>_z = " << (P_p*mu_z).trace() << std::endl;
      }

      Eigen::MatrixXd D_CISD;
    } else if (options.type == "opt") {

    }

  }

  libint2::finalize(); // done with libint

  return 0;
}

// this reads the geometry in the standard xyz format supported by most chemistry software
std::vector<Atoms> read_dotxyz(std::istream& is) {
  // line 1 = # of atoms
  size_t natom;
  is >> natom;
  // read off the rest of line 1 and discard
  std::string rest_of_line;
  std::getline(is, rest_of_line);

  // line 2 = comment (possibly empty)
  std::string comment;
  std::getline(is, comment);

  std::vector<Atoms> atoms(natom);
  for (auto i = 0; i < natom; i++) {
    std::string element_label;
    double x, y, z;
    is >> element_label >> x >> y >> z;

    // .xyz files report element labels, hence convert to atomic numbers
    int Z;
    if (element_label == "H")
      Z = 1;
    else if (element_label == "Hq")
      Z = 0;
    else if (element_label == "Be")
      Z = 4;
    else if (element_label == "C")
      Z = 6;
    else if (element_label == "N")
      Z = 7;
    else if (element_label == "O")
      Z = 8;
    else if (element_label == "F")
      Z = 9;
    else if (element_label == "Ne")
      Z = 10;
    else if (element_label == "S")
      Z = 16;
    else if (element_label == "Cl")
      Z = 17;
    else {
      std::cerr << "read_dotxyz: element label \"" << element_label << "\" is not recognized" << std::endl;
      throw "Did not recognize element label in .xyz file";
    }

    atoms[i].atomic_number = Z;

    // .xyz files report Cartesian coordinates in angstroms; convert to bohr
    const auto angstrom_to_bohr = 1 / 0.52917721092; // 2010 CODATA value
    //const auto angstrom_to_bohr = 1.0;// / 0.52917721092; // 2010 CODATA value
    atoms[i].x = x * angstrom_to_bohr;
    atoms[i].y = y * angstrom_to_bohr;
    atoms[i].z = z * angstrom_to_bohr;
  }

  return atoms;
}

// this reads the geometry in the standard xyz format supported by most chemistry software
// it is looking only for quantum hydrogen
std::vector<Atoms> read_dotxyz_qh(std::istream& is) {
  // line 1 = # of atoms
  size_t natom;
  is >> natom;
  // read off the rest of line 1 and discard
  std::string rest_of_line;
  std::getline(is, rest_of_line);

  // line 2 = comment (possibly empty)
  std::string comment;
  std::getline(is, comment);

  std::vector<Atoms> atoms(natom);

  int nproton = 0;
  for (auto i = 0; i < natom; i++) {
    std::string element_label;
    double x, y, z;
    is >> element_label >> x >> y >> z;

    // .xyz files report element labels, hence convert to atomic numbers
    int Z;
    if (element_label == "H")
      Z = 1;
    else if (element_label == "Hq")
      Z = 0;
    else if (element_label == "Be")
      Z = 4;
    else if (element_label == "C")
      Z = 6;
    else if (element_label == "N")
      Z = 7;
    else if (element_label == "O")
      Z = 8;
    else if (element_label == "F")
      Z = 9;
    else if (element_label == "Ne")
      Z = 10;
    else if (element_label == "S")
      Z = 16;
    else if (element_label == "Cl")
      Z = 17;
    else {
      std::cerr << "read_dotxyz: element label \"" << element_label << "\" is not recognized" << std::endl;
      throw "Did not recognize element label in .xyz file";
    }

    atoms[i].atomic_number = Z;

    // .xyz files report Cartesian coordinates in angstroms; convert to bohr
    const auto angstrom_to_bohr = 1 / 0.52917721092; // 2010 CODATA value
    atoms[i].x = x * angstrom_to_bohr;
    atoms[i].y = y * angstrom_to_bohr;
    atoms[i].z = z * angstrom_to_bohr;

    if (element_label == "Hq") {
      nproton++;
    }
  }

  std::vector<Atoms> protons(nproton);

  int np = 0;
  for (auto i = 0; i < natom; i++) {
    if (atoms[i].atomic_number == 0) {
      protons[np].atomic_number = 1;
      protons[np].x = atoms[i].x;
      protons[np].y = atoms[i].y;
      protons[np].z = atoms[i].z;
      np++;
    }
  }

  return protons;
}

std::vector<Atoms> read_geometry(const std::string& filename) {

  std::cout << "Will read geometry from " << filename << std::endl;
  std::ifstream is(filename);
  assert(is.good());

  // to prepare for MPI parallelization, we will read the entire file into a string that can be
  // broadcast to everyone, then converted to an std::istringstream object that can be used just like std::ifstream
  std::ostringstream oss;
  oss << is.rdbuf();
  // use ss.str() to get the entire contents of the file as an std::string
  // broadcast
  // then make an std::istringstream in each process
  std::istringstream iss(oss.str());

  // check the extension: if .xyz, assume the standard XYZ format, otherwise throw an exception
  if ( filename.rfind(".xyz") != std::string::npos)
    return read_dotxyz(iss);
  else
    throw "only .xyz files are accepted";
}

std::vector<Atoms> read_geometry_qh(const std::string& filename) {

  std::cout << "Will read geometry from " << filename << std::endl;
  std::ifstream is(filename);
  assert(is.good());

  // to prepare for MPI parallelization, we will read the entire file into a string that can be
  // broadcast to everyone, then converted to an std::istringstream object that can be used just like std::ifstream
  std::ostringstream oss;
  oss << is.rdbuf();
  // use ss.str() to get the entire contents of the file as an std::string
  // broadcast
  // then make an std::istringstream in each process
  std::istringstream iss(oss.str());

  // check the extension: if .xyz, assume the standard XYZ format, otherwise throw an exception
  if ( filename.rfind(".xyz") != std::string::npos)
    return read_dotxyz_qh(iss);
  else
    throw "only .xyz files are accepted";
}

size_t nbasis(const std::vector<libint2::Shell>& shells) {
  size_t n = 0;
  for (const auto& shell: shells)
    n += shell.size();
  return n;
}

size_t max_nprim(const std::vector<libint2::Shell>& shells) {
  size_t n = 0;
  for (auto shell: shells)
    n = std::max(shell.nprim(), n);
  return n;
}

int max_l(const std::vector<libint2::Shell>& shells) {
  int l = 0;
  for (auto shell: shells)
    for (auto c: shell.contr)
      l = std::max(c.l, l);
  return l;
}

std::vector<size_t> map_shell_to_basis_function(const std::vector<libint2::Shell>& shells) {
  std::vector<size_t> result;
  result.reserve(shells.size());

  size_t n = 0;
  for (auto shell: shells) {
    result.push_back(n);
    n += shell.size();
  }

  return result;
}


Matrix compute_1body_ints(const std::vector<libint2::Shell>& shells,
    libint2::Operator obtype,
    const std::vector<Atoms>& atoms)
{
  using libint2::Shell;
  using libint2::Engine;
  using libint2::Operator;

  const size_t n = nbasis(shells);
  Matrix result(n,n);

  // construct the overlap integrals engine
  Engine engine(obtype, max_nprim(shells), max_l(shells), 0);
  // nuclear attraction ints engine needs to know where the charges sit ...
  // the nuclei are charges in this case; in QM/MM there will also be classical charges
  if (obtype == Operator::nuclear) {
    std::vector<std::pair<double,std::array<double,3>>> q;
    for(const auto& atom : atoms) {
      q.push_back( {static_cast<double>(atom.atomic_number), {{atom.x, atom.y, atom.z}}} );
    }
    engine.set_params(q);
  }

  auto shell2bf = map_shell_to_basis_function(shells);

  // buf[0] points to the target shell set after every call  to engine.compute()
  const auto& buf = engine.results();

  // loop over unique shell pairs, {s1,s2} such that s1 >= s2
  // this is due to the permutational symmetry of the real integrals over Hermitian operators: (1|2) = (2|1)
  for(auto s1=0; s1!=shells.size(); ++s1) {

    auto bf1 = shell2bf[s1]; // first basis function in this shell
    auto n1 = shells[s1].size();

    for(auto s2=0; s2<=s1; ++s2) {

      auto bf2 = shell2bf[s2];
      auto n2 = shells[s2].size();

      // compute shell pair; return is the pointer to the buffer
      engine.compute(shells[s1], shells[s2]);

      // "map" buffer to a const Eigen Matrix, and copy it to the corresponding blocks of the result
      Eigen::Map<const Matrix> buf_mat(buf[0], n1, n2);
      result.block(bf1, bf2, n1, n2) = buf_mat;
      if (s1 != s2) // if s1 >= s2, copy {s1,s2} to the corresponding {s2,s1} block, note the transpose!
        result.block(bf2, bf1, n2, n1) = buf_mat.transpose();

    }
  }

  return result;
}

void compute_dipole_integrals(const std::vector<libint2::Shell>& shells,
    libint2::Operator obtype, Eigen::MatrixXd &mu_x, Eigen::MatrixXd &mu_y, Eigen::MatrixXd &mu_z)
{

  using libint2::Shell;
  using libint2::Engine;
  using libint2::Operator;

  const size_t n = nbasis(shells);

  Eigen::MatrixXd tmp_mu_x(n,n);
  Eigen::MatrixXd tmp_mu_y(n,n);
  Eigen::MatrixXd tmp_mu_z(n,n);

  // construct the electron repulsion integrals engine
  Engine engine(obtype, max_nprim(shells), max_l(shells), 0);

  auto shell2bf = map_shell_to_basis_function(shells);

  // buf[0] points to the target shell set after every call  to engine.compute()
  const auto& buf = engine.results();

  for(auto s1=0; s1!=shells.size(); ++s1) {
    for(auto s2=0; s2!=shells.size(); ++s2) {

      engine.compute(shells[s1], shells[s2]);

      auto bf1 = shell2bf[s1];
      auto n1 = shells[s1].size();
      auto bf2 = shell2bf[s2];
      auto n2 = shells[s2].size();

      const auto* buf_12 = buf[0];
      const auto* edipole_x_shellset = buf_12 + n1*n2;
      const auto* edipole_y_shellset = edipole_x_shellset + n1*n2;
      const auto* edipole_z_shellset = edipole_y_shellset + n1*n2;

      if (buf_12 == nullptr)
        continue;
      for(auto f1=0; f1!=n1; ++f1) {
        for(auto f2=0; f2!=n2; ++f2) {
          tmp_mu_x(bf1+f1,bf2+f2) = edipole_x_shellset[f1*n2 + f2];
          tmp_mu_y(bf1+f1,bf2+f2) = edipole_y_shellset[f1*n2 + f2];
          tmp_mu_z(bf1+f1,bf2+f2) = edipole_z_shellset[f1*n2 + f2];
        }
      }

    }
  }

  mu_x = tmp_mu_x;
  mu_y = tmp_mu_y;
  mu_z = tmp_mu_z;

}


Matrix compute_overlap(const std::vector<libint2::Shell>& shells_m, const std::vector<libint2::Shell>& shells_p,
    libint2::Operator obtype,
    const std::vector<Atoms>& atoms)
{
  using libint2::Shell;
  using libint2::Engine;
  using libint2::Operator;

  const size_t n_m = nbasis(shells_m);
  const size_t n_p = nbasis(shells_p);
  Matrix result(n_m,n_p);

  // construct the overlap integrals engine
  Engine engine(obtype, max_nprim(shells_m), max_l(shells_m), 0);

  auto shell2bf_m = map_shell_to_basis_function(shells_m);
  auto shell2bf_p = map_shell_to_basis_function(shells_p);

  // buf[0] points to the target shell set after every call  to engine.compute()
  const auto& buf = engine.results();

  // loop over unique shell pairs, {s1,s2} such that s1 >= s2
  // this is due to the permutational symmetry of the real integrals over Hermitian operators: (1|2) = (2|1)
  for(auto s1=0; s1!=shells_m.size(); ++s1) {

    auto bf1 = shell2bf_m[s1]; // first basis function in this shell
    auto n1 = shells_m[s1].size();

    for(auto s2=0; s2!=shells_p.size(); ++s2) {

      auto bf2 = shell2bf_p[s2];
      auto n2 = shells_p[s2].size();

      // compute shell pair; return is the pointer to the buffer
      engine.compute(shells_m[s1], shells_p[s2]);

      // "map" buffer to a const Eigen Matrix, and copy it to the corresponding blocks of the result
      Eigen::Map<const Matrix> buf_mat(buf[0], n1, n2);
      result.block(bf1, bf2, n1, n2) = buf_mat;
      //if (s1 != s2) // if s1 >= s2, copy {s1,s2} to the corresponding {s2,s1} block, note the transpose!
        //result.block(bf2, bf1, n2, n1) = buf_mat.transpose();

    }
  }

  return result;
}

/*
Matrix compute_overlap(const std::vector<libint2::Shell>& shells_m, const std::vector<libint2::Shell>& shells_p,
    libint2::Operator obtype,
    const std::vector<Atoms>& atoms) {

  using libint2::Shell;
  using libint2::Engine;
  using libint2::Operator;

  const size_t n_m = nbasis(shells_m);
  const size_t n_p = nbasis(shells_p);

  Matrix result(n_m,n_p);

  // construct the electron repulsion integrals engine
  Engine engine(obtype, max_nprim(shells_p), max_l(shells_p), 0);

  auto shell2bf_m = map_shell_to_basis_function(shells_m);
  auto shell2bf_p = map_shell_to_basis_function(shells_p);

  // buf[0] points to the target shell set after every call  to engine.compute()
  const auto& buf = engine.results();

  for(auto s1=0; s1!=shells_m.size(); ++s1) {

    auto bf1_first = shell2bf_m[s1]; // first basis function in this shell
    auto n1 = shells_m[s1].size();

    // loop over shell pairs of the density matrix, {s2,s4}
    // again symmetry is not used for simplicity
    for(auto s3=0; s3!=shells_p.size(); ++s3) {

      auto bf3_first = shell2bf_p[s3];
      auto n3 = shells_p[s3].size();

      // Coulomb contribution to the Fock matrix is from {s1,s2,s3,s4} integrals
      engine.compute(shells_m[s1], shells_p[s3]);
      const auto* buf_1234 = buf[0];
      if (buf_1234 == nullptr)
        continue;
      for(auto f1=0, f1234=0; f1!=n1; ++f1) {
        const auto bf1 = f1 + bf1_first;
        for(auto f3=0; f3!=n3; ++f3) {
          const auto bf3 = f3 + bf3_first;
          //std::cout << buf_1234[f1234] << std::endl;
          result(bf1,bf3) = buf_1234[f1234];
        }
      }

    }
  }

  return result;
}*/

TensorRank4 compute_2body_ints(const std::vector<libint2::Shell>& shells) {

  using libint2::Shell;
  using libint2::Engine;
  using libint2::Operator;

  const size_t n = nbasis(shells);
  TensorRank4 g(n,n,n,n);

  // construct the electron repulsion integrals engine
  Engine engine(Operator::coulomb, max_nprim(shells), max_l(shells), 0);

  auto shell2bf = map_shell_to_basis_function(shells);

  // buf[0] points to the target shell set after every call  to engine.compute()
  const auto& buf = engine.results();

  // loop over shell pairs of the Fock matrix, {s1,s2}
  // Fock matrix is symmetric, but skipping it here for simplicity (see compute_2body_fock)
  for(size_t s1=0; s1!=shells.size(); ++s1) {

    size_t bf1_first = shell2bf[s1]; // first basis function in this shell
    size_t n1 = shells[s1].size();

    for(size_t s2=0; s2!=shells.size(); ++s2) {

      size_t bf2_first = shell2bf[s2];
      size_t n2 = shells[s2].size();

      // loop over shell pairs of the density matrix, {s3,s4}
      // again symmetry is not used for simplicity
      for(size_t s3=0; s3!=shells.size(); ++s3) {

        size_t bf3_first = shell2bf[s3];
        size_t n3 = shells[s3].size();

        for(size_t s4=0; s4!=shells.size(); ++s4) {

          size_t bf4_first = shell2bf[s4];
          size_t n4 = shells[s4].size();

          // Coulomb contribution to the Fock matrix is from {s1,s2,s3,s4} integrals
          engine.compute(shells[s1], shells[s2], shells[s3], shells[s4]);
          const auto* buf_1234 = buf[0];
          if (buf_1234 == nullptr)
            continue; // if all integrals screened out, skip to next quartet

          // we don't have an analog of Eigen for tensors (yet ... see github.com/BTAS/BTAS, under development)
          // hence some manual labor here:
          // 1) loop over every integral in the shell set (= nested loops over basis functions in each shell)
          // and 2) add contribution from each integral
          for(size_t f1=0, f1234=0; f1!=n1; ++f1) {
            const size_t bf1 = f1 + bf1_first;
            for(size_t f2=0; f2!=n2; ++f2) {
              const size_t bf2 = f2 + bf2_first;
              for(size_t f3=0; f3!=n3; ++f3) {
                const size_t bf3 = f3 + bf3_first;
                for(size_t f4=0; f4!=n4; ++f4, ++f1234) {
                  const size_t bf4 = f4 + bf4_first;
                  g(bf1,bf2,bf3,bf4) = buf_1234[f1234];
                }
              }
            }
          }

        }
      }
    }
  }

  return g;
}

Eigen::MatrixXd compute_2body_ints_mat(const std::vector<libint2::Shell>& shells) {

  using libint2::Shell;
  using libint2::Engine;
  using libint2::Operator;

  const size_t n = nbasis(shells);

  Eigen::MatrixXd g_ee(n*n,n*n);

  // construct the electron repulsion integrals engine
  Engine engine(Operator::coulomb, max_nprim(shells), max_l(shells), 0);

  auto shell2bf = map_shell_to_basis_function(shells);

  // buf[0] points to the target shell set after every call  to engine.compute()
  const auto& buf = engine.results();

  // loop over shell pairs of the Fock matrix, {s1,s2}
  // Fock matrix is symmetric, but skipping it here for simplicity (see compute_2body_fock)
  for(auto s1=0; s1!=shells.size(); ++s1) {

    auto bf1_first = shell2bf[s1]; // first basis function in this shell
    auto n1 = shells[s1].size();

    for(auto s2=0; s2!=shells.size(); ++s2) {

      auto bf2_first = shell2bf[s2];
      auto n2 = shells[s2].size();

      // loop over shell pairs of the density matrix, {s3,s4}
      // again symmetry is not used for simplicity
      for(auto s3=0; s3!=shells.size(); ++s3) {

        auto bf3_first = shell2bf[s3];
        auto n3 = shells[s3].size();

        for(auto s4=0; s4!=shells.size(); ++s4) {

          auto bf4_first = shell2bf[s4];
          auto n4 = shells[s4].size();

          // Coulomb contribution to the Fock matrix is from {s1,s2,s3,s4} integrals
          engine.compute(shells[s1], shells[s2], shells[s3], shells[s4]);
          const auto* buf_1234 = buf[0];
          if (buf_1234 == nullptr)
            continue; // if all integrals screened out, skip to next quartet

          // we don't have an analog of Eigen for tensors (yet ... see github.com/BTAS/BTAS, under development)
          // hence some manual labor here:
          // 1) loop over every integral in the shell set (= nested loops over basis functions in each shell)
          // and 2) add contribution from each integral
          for(auto f1=0, f1234=0; f1!=n1; ++f1) {
            const auto bf1 = f1 + bf1_first;
            for(auto f2=0; f2!=n2; ++f2) {
              const auto bf2 = f2 + bf2_first;
              for(auto f3=0; f3!=n3; ++f3) {
                const auto bf3 = f3 + bf3_first;
                for(auto f4=0; f4!=n4; ++f4, ++f1234) {
                  const auto bf4 = f4 + bf4_first;
                  g_ee(bf1 * n + bf2, bf3 * n + bf4) = buf_1234[f1234];
                }
              }
            }
          }

        }
      }
    }
  }

  return g_ee;
}

TensorRank4 compute_2body_ints_ep(const std::vector<libint2::Shell>& shells_e,
                               const std::vector<libint2::Shell>& shells_p) {

  using libint2::Shell;
  using libint2::Engine;
  using libint2::Operator;

  const size_t n_e = nbasis(shells_e);
  const size_t n_p = nbasis(shells_p);
  size_t n;
  if (n_e > n_p) {
    n = n_e;
  } else {
    n = n_p;
  }
  TensorRank4 g(n_e,n_e,n_p,n_p);

  // construct the electron repulsion integrals engine
  Engine engine(Operator::coulomb, fmax(max_nprim(shells_e), max_nprim(shells_p)),
                fmax(max_l(shells_e), max_l(shells_p)), 0);

  auto shell2bf_e = map_shell_to_basis_function(shells_e);
  auto shell2bf_p = map_shell_to_basis_function(shells_p);

  // buf[0] points to the target shell set after every call  to engine.compute()
  const auto& buf = engine.results();

  for(auto s1=0; s1!=shells_e.size(); ++s1) {

    auto bf1_first = shell2bf_e[s1]; // first basis function in this shell
    auto n1 = shells_e[s1].size();

    for(auto s2=0; s2!=shells_e.size(); ++s2) {

      auto bf2_first = shell2bf_e[s2];
      auto n2 = shells_e[s2].size();

      // loop over shell pairs of the density matrix, {s3,s4}
      // again symmetry is not used for simplicity
      for(auto s3=0; s3!=shells_p.size(); ++s3) {

        auto bf3_first = shell2bf_p[s3];
        auto n3 = shells_p[s3].size();

        for(auto s4=0; s4!=shells_p.size(); ++s4) {

          auto bf4_first = shell2bf_p[s4];
          auto n4 = shells_p[s4].size();

          // Coulomb contribution to the Fock matrix is from {s1,s2,s3,s4} integrals
          engine.compute(shells_e[s1], shells_e[s2], shells_p[s3], shells_p[s4]);
          const auto* buf_1234 = buf[0];
          if (buf_1234 == nullptr)
            continue;
          for(auto f1=0, f1234=0; f1!=n1; ++f1) {
            const auto bf1 = f1 + bf1_first;
            for(auto f2=0; f2!=n2; ++f2) {
              const auto bf2 = f2 + bf2_first;
              for(auto f3=0; f3!=n3; ++f3) {
                const auto bf3 = f3 + bf3_first;
                for(auto f4=0; f4!=n4; ++f4, ++f1234) {
                  const auto bf4 = f4 + bf4_first;
                  //std::cout << buf_1234[f1234] << std::endl;
                  g(bf1,bf2,bf3,bf4) = buf_1234[f1234];
                }
              }
            }
          }

        }
      }
    }
  }

  return g;
}
