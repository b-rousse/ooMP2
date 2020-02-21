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

// Eigen matrix algebra library
#include <Eigen/Dense>
#include <Eigen/Eigenvalues>
#include <unsupported/Eigen/MatrixFunctions>

#include "particles.h"
#include "tensor.h"
#include <libint2.hpp>
#include "basis_set.h"

TensorRank4 plot_function(size_t nao_p, size_t n_pts, std::vector<Atoms> &atoms_neo) {

  const auto angstrom_to_bohr = 1 / 0.52917721092; // 2010 CODATA value

  double delta_x_l = -1.0161*angstrom_to_bohr; //a.u.
  double delta_x_r = 1.0839*angstrom_to_bohr; //a.u.
  double del_x = fabs(delta_x_l-delta_x_r)/(n_pts-1);

  double delta_y_l = -1.0161*angstrom_to_bohr; //a.u.
  double delta_y_r = 1.0839*angstrom_to_bohr; //a.u.
  double del_y = fabs(delta_y_l-delta_y_r)/(n_pts-1);

  double delta_z_l = 0.3245*angstrom_to_bohr; //a.u.
  double delta_z_r = 2.4245*angstrom_to_bohr; //a.u.
  double del_z = fabs(delta_z_l-delta_z_r)/(n_pts-1);

  double proton_x, proton_y, proton_z;
  for (auto i = 0; i < atoms_neo.size(); ++i) {
    if (atoms_neo[i].atomic_number == 0) {
      proton_x = atoms_neo[i].x;
      proton_y = atoms_neo[i].y;
      proton_z = atoms_neo[i].z;
    }
  }
  std::cout << "proton_x = " << proton_x << std::endl;
  std::cout << "proton_y = " << proton_y << std::endl;
  std::cout << "proton_z = " << proton_z << std::endl;
  std::cout << "nao_p = " << nao_p << std::endl;

  Eigen::VectorXd x(n_pts);
  Eigen::VectorXd y(n_pts);
  Eigen::VectorXd z(n_pts);

  for (auto i = 0; i < n_pts; i++) {
      x(i) = delta_x_l + i*del_x;
      y(i) = delta_y_l + i*del_y;
      z(i) = delta_z_l + i*del_z;
  }

  /*
  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
  std::cout << "z = " << z << std::endl;*/

  //values of the protonic basis functions phi(r)
  TensorRank4 phi(nao_p, n_pts, n_pts, n_pts);

  Eigen::VectorXd angular_momentums_p(nao_p);
  Eigen::VectorXd exponents_p(nao_p);

  //8spd basis set
  /*angular_momentums_p << 0, 0, 0, 0, 0, 0, 0, 0,
      1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
      2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2;

  exponents_p << 2.8284, 4.0000, 5.6569, 8.0000, 11.3137, 16.0000, 22.6274, 32.0000,
      2.8284, 2.8284, 2.8284, 4.0000, 4.0000, 4.0000, 5.6569, 5.6569, 5.6569, 8.0000, 8.0000, 8.0000, 11.3137, 11.3137, 11.3137, 16.0000, 16.0000, 16.0000, 22.6274, 22.6274, 22.6274, 32.0000, 32.0000, 32.0000,
      2.8284, 2.8284, 2.8284, 2.8284, 2.8284, 2.8284, 4.0000, 4.0000, 4.0000, 4.0000, 4.0000, 4.0000, 5.6569, 5.6569, 5.6569, 5.6569, 5.6569, 5.6569, 8.0000, 8.0000, 8.0000, 8.0000, 8.0000, 8.0000, 11.3137, 11.3137, 11.3137, 11.3137, 11.3137, 11.3137, 16.0000, 16.0000, 16.0000, 16.0000, 16.0000, 16.0000, 22.6274, 22.6274, 22.6274, 22.6274, 22.6274, 22.6274, 32.0000, 32.0000, 32.0000, 32.0000, 32.0000, 32.0000;
*/

  /*
  //3sp basis set
  angular_momentums_p << 0, 0, 0,
                         1, 1, 1, 1, 1, 1, 1, 1, 1;

    exponents_p << 2.8284, 4.0000, 5.6569,
                   2.8284, 2.8284, 2.8284, 4.0000, 4.0000, 4.0000, 5.6569, 5.6569, 5.6569;*/

  //8s8p
  angular_momentums_p << 0, 0, 0, 0, 0, 0, 0, 0,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1;
    exponents_p << 2.8284, 4.0000, 5.6569, 8.0000, 11.3137, 16.0000, 22.6274, 32.0000,
        2.8284, 2.8284, 2.8284, 4.0000, 4.0000, 4.0000, 5.6569, 5.6569, 5.6569, 8.0000, 8.0000, 8.0000, 11.3137, 11.3137, 11.3137, 16.0000, 16.0000, 16.0000, 22.6274, 22.6274, 22.6274, 32.0000, 32.0000, 32.0000;

  Eigen::MatrixXd protonic_bs(nao_p, 2);

  for (auto i = 0; i < nao_p; i++) {
    protonic_bs(i,0) = exponents_p(i);
    protonic_bs(i,1) = angular_momentums_p(i);
  }

  for (int j = 0; j < n_pts; j++) {
    for (int k = 0; k < n_pts; k++) {
      for (int l = 0; l < n_pts; l++) {

        int count = 0;
        for (int i = 0; i < nao_p; i++) {

          double xyz_A_j = (x(j) - proton_x)*(x(j) - proton_x) + (y(k) - proton_y)*(y(k) - proton_y) + (z(l) - proton_z)*(z(l) - proton_z);
          double N;

          if (protonic_bs(i,1) == 0) {

            N = pow((2.0*protonic_bs(i,0)/M_PI),3.0/4.0);
            phi(i,j,k,l) = N*exp(-protonic_bs(i,0)*xyz_A_j);
          } else if (protonic_bs(i,1) == 1) {

            N = pow((128*pow(protonic_bs(i,0),5)/(M_PI*M_PI*M_PI)),1.0/4.0);

            if (count == 0) {
              //x*phi(r) or p_x
              phi(i,j,k,l) = N*pow(x(j)-proton_x,1)*pow(y(k)-proton_y,0)*pow(z(l)-proton_z,0)*exp(-protonic_bs(i,0)*xyz_A_j);
            } else if (count == 1) {
              //y*phi(r) or p_y
              phi(i,j,k,l) = N*pow(x(j)-proton_x,0)*pow(y(k)-proton_y,1)*pow(z(l)-proton_z,0)*exp(-protonic_bs(i,0)*xyz_A_j);
            } else if (count == 2) {
              //z*phi(r) or p_z
              phi(i,j,k,l) = N*pow(x(j)-proton_x,0)*pow(y(k)-proton_y,0)*pow(z(l)-proton_z,1)*exp(-protonic_bs(i,0)*xyz_A_j);
            }
            count++;

            if (count == 3) {
              count = 0;
            }

          } else if (protonic_bs(i,1) == 2) {

            //Libint ordering (xx, xy, xz, yy, yz, zz)
            if (count == 0) {
              //x^2*phi(r) or d_x^2
              N = pow((2048.0/9.0*pow(protonic_bs(i,0),7)/(M_PI*M_PI*M_PI)),1.0/4.0);
              phi(i,j,k,l) = N*pow(x(j)-proton_x,2)*pow(y(k)-proton_y,0)*pow(z(l)-proton_z,0)*exp(-protonic_bs(i,0)*xyz_A_j);
            } else if (count == 1) {
              //x*y*phi(r) or d_xy
              N = pow((2048*pow(protonic_bs(i,0),7)/(M_PI*M_PI*M_PI)),1.0/4.0);
              phi(i,j,k,l) = N*pow(x(j)-proton_x,1)*pow(y(k)-proton_y,1)*pow(z(l)-proton_z,0)*exp(-protonic_bs(i,0)*xyz_A_j);
            } else if (count == 2) {
              //x*z*phi(r) or d_xz
              N = pow((2048*pow(protonic_bs(i,0),7)/(M_PI*M_PI*M_PI)),1.0/4.0);
              phi(i,j,k,l) = N*pow(x(j)-proton_x,1)*pow(y(k)-proton_y,0)*pow(z(l)-proton_z,1)*exp(-protonic_bs(i,0)*xyz_A_j);
            } else if (count == 3) {
              //y^2*phi(r) or d_y^2
              N = pow((2048.0/9.0*pow(protonic_bs(i,0),7)/(M_PI*M_PI*M_PI)),1.0/4.0);
              phi(i,j,k,l) = N*pow(x(j)-proton_x,0)*pow(y(k)-proton_y,2)*pow(z(l)-proton_z,0)*exp(-protonic_bs(i,0)*xyz_A_j);
            } else if (count == 4) {
              //y*z*phi(r) or d_yz
              N = pow((2048*pow(protonic_bs(i,0),7)/(M_PI*M_PI*M_PI)),1.0/4.0);
              phi(i,j,k,l) = N*pow(x(j)-proton_x,0)*pow(y(k)-proton_y,1)*pow(z(l)-proton_z,1)*exp(-protonic_bs(i,0)*xyz_A_j);
            } else if (count == 5) {
              //z^2*phi(r) or d_z^2
              N = pow((2048.0/9.0*pow(protonic_bs(i,0),7)/(M_PI*M_PI*M_PI)),1.0/4.0);
              phi(i,j,k,l) = N*pow(x(j)-proton_x,0)*pow(y(k)-proton_y,0)*pow(z(l)-proton_z,2)*exp(-protonic_bs(i,0)*xyz_A_j);
            }

            count++;
            if (count == 6) {
              count = 0;
            }

          }
        }
      }
    }
  }

  return phi;
}

void calculate_transition_denisty_xyz(size_t nao_p, size_t n_pts, Electrons &electrons, Protons &protons, std::vector<Atoms> &atoms_neo, Eigen::MatrixXd &XY) {
  std::ifstream input("tran_den_8sp.dat");
  double *x = new double[nao_p*nao_p];

  for(int i=0; i < nao_p*nao_p; i++)
    input >> x[i];

  input.close();

  Eigen::MatrixXd T(nao_p,nao_p);
  int count = 0;
  for (auto i = 0; i < nao_p; i++ ) {
    for (auto j = 0; j < nao_p; j++ ) {
      T(i,j) = x[count];
      count++;
    }
  }
  delete[] x;

  std::cout << "T" << std::endl;
  std::cout << T << std::endl;

  /*nao_p = 32;*/

  TensorRank4 phi_xyz = plot_function(nao_p, n_pts, atoms_neo);

  //Eigen::MatrixXd XY = neo_tdhf_calculation(electrons, protons, g_ee, g_pp, g_ep);

  int nuocc_p = protons.nmo_p-protons.nproton;
  Eigen::MatrixXd X(protons.nproton,nuocc_p);
  Eigen::MatrixXd Y(protons.nproton,nuocc_p);

  /*for (int i = 0; i < nuocc_p; i++) {
  X(0,i) = XY(0,i);
  Y(0,i) = XY(0,i+nuocc_p);
}*/
  for (int i = 0; i < nuocc_p; i++) {
    if (i == 2) {
      X(0,i) = -1.0;
      Y(0,i) = 0.0;
    } else {
      X(0,i) = 0.0;
      Y(0,i) = 0.0;
    }
  }
  for (int i = 0; i < nuocc_p; i++) {
    printf("%12f\n", X(0,i));
  }
  for (int i = 0; i < nuocc_p; i++) {
    printf("%12f\n", Y(0,i));
  }

  Eigen::MatrixXd C_occ(protons.nao_p,protons.nproton);
  C_occ = Eigen::MatrixXd::Zero(protons.nao_p,protons.nproton);
  for (auto mu = 0; mu < protons.nao_p; mu++) {
    for (auto I = 0; I < protons.nproton; I++) {
      C_occ(mu,I) = protons.C_p(mu,I);
    }
  }
  std::cout << "C_occ " << std::endl;
  std::cout << C_occ << std::endl;

  Eigen::MatrixXd C_uocc(protons.nao_p,nuocc_p);
  C_uocc = Eigen::MatrixXd::Zero(protons.nao_p,nuocc_p);
  for (auto A = protons.nproton; A < protons.nmo_p; A++) {
    for (auto mu = 0; mu < protons.nao_p; mu++) {
      C_uocc(mu,A-protons.nproton) = protons.C_p(mu,A);
      //printf("%12f\n", protons.C_p(mu,A));
    }
  }

  Eigen::MatrixXd C_uocc3(protons.nao_p,protons.nproton);
  C_uocc3 = Eigen::MatrixXd::Zero(protons.nao_p,protons.nproton);
  for (auto mu = 0; mu < protons.nao_p; mu++) {
    for (auto I = 0; I < protons.nproton; I++) {
      C_uocc3(mu,I) = protons.C_p(mu,2);
    }
  }
  std::cout << "C_uocc3 " << std::endl;
  std::cout << C_uocc3 << std::endl;

  Eigen::MatrixXd T_mycode = C_occ*(X+Y)*C_uocc.transpose();

  std::cout << "T_mycode" << std::endl;
  std::cout << T_mycode << std::endl;

  for (auto i = 0; i < nao_p; i++) {
    for (auto j = 0; j < nao_p; j++) {
      double diff = fabs(T_mycode(i,j)) - fabs(T(i,j));
      if (fabs(diff) > 1e-04) {
        std::cout << "i = " << i << " j = " << j << " diff = " << diff <<  std::endl;
      }
    }
  }

  /*
//writing into file
std::string file_nameT = "T.dat";
std::ofstream write_fileT(file_nameT);

for (auto i = 0; i < nao_p; i++) {
  for (auto j = 0; j < nao_p; j++) {
    write_fileT << T(i,j) << " ";
  }
  write_fileT << std::endl;
}

write_fileT.close();*/


  TensorRank4 T_xyz(n_pts,n_pts,n_pts,1);
  for (auto i = 0; i < n_pts; i++) {
    for (auto j = 0; j < n_pts; j++) {
      for (auto k = 0; k < n_pts; k++) {
        double sum = 0.0;
        for (auto mu = 0; mu < nao_p; mu++) {
          for (auto nu = 0; nu < nao_p; nu++) {
            sum += T(mu,nu)*phi_xyz(mu,i,j,k)*phi_xyz(nu,i,j,k);
          }
        }
        T_xyz(i,j,k,0) = sum;
      }
    }
  }

  //writing into file
  std::string file_name = "transition_density_8sp_coraline_geom2.dat";
  std::ofstream write_file(file_name);

  for (auto i = 0; i < n_pts; i++) {
    for (auto j = 0; j < n_pts; j++) {
      for (auto k = 0; k < n_pts; k++) {
        write_file << T_xyz(i,j,k,0) << std::endl;;
      }
    }
  }

  write_file.close();
  /*
Eigen::MatrixXd S(nao_p,nao_p);
S = Eigen::MatrixXd::Zero(nao_p,nao_p);
auto count = 0;
for (auto mu = 0; mu < nao_p; mu++) {
  for (auto nu = 0; nu <= mu; nu++) {
    S(mu,nu) = phi_xyz(mu,0,0,0)*phi_xyz(nu,0,0,0);
    count++;
  }
}
std::cout << "S_mu_nu = " << std::endl;
std::cout << S << std::endl;*/

}

void calculate_denisty_xyz(size_t nao_p, size_t n_pts, Electrons &electrons, Protons &protons, std::vector<Atoms> &atoms_neo, std::string basis_set_p, Eigen::MatrixXd &D_CISD, std::string method, Eigen::MatrixXd &XY) {


  //definition of the basis set in cartesian coordinates
  //protonic_bs_8spd = [exp ang_mom x y z;
  //                     .   .   .  . . .
  //                     .   .   .  . . .
  //                     .   .   .  . . .
  //                    exp ang_mom x y z];
  Eigen::VectorXd angular_momentums_p(nao_p);
  Eigen::VectorXd exponents_p(nao_p);
  std::cout << basis_set_p << std::endl;
  if (basis_set_p == "10spd") {
    angular_momentums_p << 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2;
    exponents_p << 2.8284, 4.0000, 5.6569, 8.0000, 11.3137, 16.0000, 22.6274, 32.0000, 45.25526, 64.000,
        2.8284, 2.8284, 2.8284, 4.0000, 4.0000, 4.0000, 5.6569, 5.6569, 5.6569, 8.0000, 8.0000, 8.0000, 11.3137, 11.3137, 11.3137, 16.0000, 16.0000, 16.0000, 22.6274, 22.6274, 22.6274, 32.0000, 32.0000, 32.0000, 45.25526, 45.25526, 45.25526, 64.000, 64.000, 64.000,
        2.8284, 2.8284, 2.8284, 2.8284, 2.8284, 2.8284, 4.0000, 4.0000, 4.0000, 4.0000, 4.0000, 4.0000, 5.6569, 5.6569, 5.6569, 5.6569, 5.6569, 5.6569, 8.0000, 8.0000, 8.0000, 8.0000, 8.0000, 8.0000, 11.3137, 11.3137, 11.3137, 11.3137, 11.3137, 11.3137, 16.0000, 16.0000, 16.0000, 16.0000, 16.0000, 16.0000, 22.6274, 22.6274, 22.6274, 22.6274, 22.6274, 22.6274, 32.0000, 32.0000, 32.0000, 32.0000, 32.0000, 32.0000, 45.25526, 45.25526, 45.25526, 45.25526, 45.25526, 45.25526, 64.000, 64.000, 64.000, 64.000, 64.000, 64.000;
    /*
  angular_momentums_p << 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
              1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1;
  exponents_p << 2.8284, 4.0000, 5.6569, 8.0000, 11.3137, 16.0000, 22.6274, 32.0000, 45.25526, 64.000,
              2.8284, 2.8284, 2.8284, 4.0000, 4.0000, 4.0000, 5.6569, 5.6569, 5.6569, 8.0000, 8.0000, 8.0000, 11.3137, 11.3137, 11.3137, 16.0000, 16.0000, 16.0000, 22.6274, 22.6274, 22.6274, 32.0000, 32.0000, 32.0000, 45.25526, 45.25526, 45.25526, 64.000, 64.000, 64.000;
     */
  } else if (basis_set_p == "sp") {
    //angular_momentums_p << 0, 1, 1, 1, 2, 2, 2, 2, 2, 2;
    //exponents_p << 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0;

    //QZSPD
    angular_momentums_p << 0, 0, 0, 0,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        2, 2, 2, 2, 2, 2;

    exponents_p << 34.63529, 23.53723, 16.15828, 2.88060,
        33.60131, 33.60131, 33.60131, 22.91237, 22.91237, 22.91237, 15.80526, 15.80526, 15.80526, 6.89795, 6.89795, 6.89795,
        8.0000, 8.0000, 8.0000, 8.0000, 8.0000, 8.0000;

    //angular_momentums_p << 0, 1, 1, 1;
    //exponents_p << 4.0, 4.0, 4.0, 4.0;
  } else if (basis_set_p == "8spd") {
    angular_momentums_p << 0, 0, 0, 0, 0, 0, 0, 0,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2;

    exponents_p << 2.8284, 4.0000, 5.6569, 8.0000, 11.3137, 16.0000, 22.6274, 32.0000,
        2.8284, 2.8284, 2.8284, 4.0000, 4.0000, 4.0000, 5.6569, 5.6569, 5.6569, 8.0000, 8.0000, 8.0000, 11.3137, 11.3137, 11.3137, 16.0000, 16.0000, 16.0000, 22.6274, 22.6274, 22.6274, 32.0000, 32.0000, 32.0000,
        2.8284, 2.8284, 2.8284, 2.8284, 2.8284, 2.8284, 4.0000, 4.0000, 4.0000, 4.0000, 4.0000, 4.0000, 5.6569, 5.6569, 5.6569, 5.6569, 5.6569, 5.6569, 8.0000, 8.0000, 8.0000, 8.0000, 8.0000, 8.0000, 11.3137, 11.3137, 11.3137, 11.3137, 11.3137, 11.3137, 16.0000, 16.0000, 16.0000, 16.0000, 16.0000, 16.0000, 22.6274, 22.6274, 22.6274, 22.6274, 22.6274, 22.6274, 32.0000, 32.0000, 32.0000, 32.0000, 32.0000, 32.0000;


    /*
  angular_momentums_p << 0, 0, 0, 0, 0, 0, 0, 0,
      1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1;
  //Correct ordering!!!
  exponents_p << 2.8284, 4.0000, 5.6569, 8.0000, 11.3137, 16.0000, 22.6274, 32.0000,
      2.8284, 2.8284, 2.8284, 4.0000, 4.0000, 4.0000, 5.6569, 5.6569, 5.6569, 8.0000, 8.0000, 8.0000, 11.3137, 11.3137, 11.3137, 16.0000, 16.0000, 16.0000, 22.6274, 22.6274, 22.6274, 32.0000, 32.0000, 32.0000;
     */
    /*
  angular_momentums_p << 0, 0, 0, 0, 0, 0, 0,
                         1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1;
  exponents_p << 4.2159, 13.332, 42.159, 133.32, 421.59, 1333.2, 4215.9,
      4.2159, 13.332, 42.159, 133.32, 421.59, 1333.2, 4215.9, 4.2159, 13.332, 42.159, 133.32, 421.59, 1333.2, 4215.9, 4.2159, 13.332, 42.159, 133.32, 421.59, 1333.2, 4215.9;
     */
  } else if (basis_set_p == "6s3p1d") {
    angular_momentums_p << 0, 0, 0, 0, 0, 0,
        1, 1, 1, 1, 1, 1, 1, 1, 1,
        2, 2, 2, 2, 2, 2;

    exponents_p << 8.9346, 1.5904, 0.51619, 0.11092, 0.052472, 0.024562,
        0.47831, 0.47831, 0.47831, 0.18726, 0.18726, 0.18726, 0.069729, 0.069729, 0.069729,
        0.15439, 0.15439, 0.15439, 0.15439, 0.15439, 0.15439;

  }

  Eigen::MatrixXd protonic_bs(nao_p, 2);

  for (auto i = 0; i < nao_p; i++) {
    protonic_bs(i,0) = exponents_p(i);
    protonic_bs(i,1) = angular_momentums_p(i);
  }

  //calculating the values of each basis function at different points in the space
  const auto angstrom_to_bohr = 1 / 0.52917721092; // 2010 CODATA value

  double delta_x_l = -5.0*angstrom_to_bohr; //a.u.
  double delta_x_r = 5.0*angstrom_to_bohr; //a.u.
  double del_x = fabs(delta_x_l-delta_x_r)/(n_pts-1);

  double delta_y_l = -5.0*angstrom_to_bohr; //a.u.
  double delta_y_r = 5.0*angstrom_to_bohr; //a.u.
  double del_y = fabs(delta_y_l-delta_y_r)/(n_pts-1);

  double delta_z_l = -5.0*angstrom_to_bohr; //a.u.
  double delta_z_r = 5.0*angstrom_to_bohr; //a.u.
  double del_z = fabs(delta_z_l-delta_z_r)/(n_pts-1);

  double proton_x, proton_y, proton_z;
  for (auto i = 0; i < atoms_neo.size(); ++i) {
    if (atoms_neo[i].atomic_number == 0) {
      proton_x = atoms_neo[i].x;
      proton_y = atoms_neo[i].y;
      proton_z = atoms_neo[i].z;
    }
  }
  std::cout << "proton_x = " << proton_x << std::endl;
  std::cout << "proton_y = " << proton_y << std::endl;
  std::cout << "proton_z = " << proton_z << std::endl;
  std::cout << "nao_p = " << nao_p << std::endl;

  Eigen::VectorXd x(n_pts);
  Eigen::VectorXd y(n_pts);
  Eigen::VectorXd z(n_pts);

  for (auto i = 0; i < n_pts; i++) {
      x(i) = delta_x_l + i*del_x;
      //x(i) = 0.0;
      //y(i) = delta_y_l + i*del_y;
      y(i) = 0.0;
      //z(i) = delta_z_l + i*del_z;
      z(i) = 0.0;
  }

  Eigen::MatrixXd phi_r(nao_p,n_pts);

  //std::cout << "proton_z = " << proton_z << std::endl;
  //std::cout << "z" << std::endl;
  //std::cout << z << std::endl;

  //std::cout << "proton_y = " << proton_y << std::endl;
  //std::cout << "y" << std::endl;
  //std::cout << y << std::endl;

  //for (int j = 0; j < 2*n_pts; j++) {
    for (int j = 0; j < n_pts; j++) {
    int count = 0;
    for (int i = 0; i < nao_p; i++) {

      double xyz_A_j = (x(j) - proton_x)*(x(j) - proton_x) + (y(j) - proton_y)*(y(j) - proton_y) + (z(j) - proton_z)*(z(j) - proton_z);
      double N;

      if (protonic_bs(i,1) == 0) {

        N = pow((2.0*protonic_bs(i,0)/M_PI),3.0/4.0);
        phi_r(i,j) = N*exp(-protonic_bs(i,0)*xyz_A_j);
      } else if (protonic_bs(i,1) == 1) {

        N = pow((128*pow(protonic_bs(i,0),5)/(M_PI*M_PI*M_PI)),1.0/4.0);

        if (count == 0) {
          //x*phi(r) or p_x
          phi_r(i,j) = N*pow(x(j)-proton_x,1)*pow(y(j)-proton_y,0)*pow(z(j)-proton_z,0)*exp(-protonic_bs(i,0)*xyz_A_j);
        } else if (count == 1) {
          //y*phi(r) or p_y
          phi_r(i,j) = N*pow(x(j)-proton_x,0)*pow(y(j)-proton_y,1)*pow(z(j)-proton_z,0)*exp(-protonic_bs(i,0)*xyz_A_j);
        } else if (count == 2) {
          //z*phi(r) or p_z
          phi_r(i,j) = N*pow(x(j)-proton_x,0)*pow(y(j)-proton_y,0)*pow(z(j)-proton_z,1)*exp(-protonic_bs(i,0)*xyz_A_j);
        }
        count++;

        if (count == 3) {
          count = 0;
        }

      } else if (protonic_bs(i,1) == 2) {

        if (count == 0) {
          //x^2*phi(r) or d_x^2
          N = pow((2048.0/9.0*pow(protonic_bs(i,0),7)/(M_PI*M_PI*M_PI)),1.0/4.0);
          phi_r(i,j) = N*pow(x(j)-proton_x,2)*pow(y(j)-proton_y,0)*pow(z(j)-proton_z,0)*exp(-protonic_bs(i,0)*xyz_A_j);
        } else if (count == 1) {
          //x*y*phi(r) or d_xy
          N = pow((2048*pow(protonic_bs(i,0),7)/(M_PI*M_PI*M_PI)),1.0/4.0);
          phi_r(i,j) = N*pow(x(j)-proton_x,1)*pow(y(j)-proton_y,1)*pow(z(j)-proton_z,0)*exp(-protonic_bs(i,0)*xyz_A_j);
        } else if (count == 2) {
          //x*z*phi(r) or d_xz
          N = pow((2048*pow(protonic_bs(i,0),7)/(M_PI*M_PI*M_PI)),1.0/4.0);
          phi_r(i,j) = N*pow(x(j)-proton_x,1)*pow(y(j)-proton_y,0)*pow(z(j)-proton_z,1)*exp(-protonic_bs(i,0)*xyz_A_j);
        } else if (count == 3) {
          //y^2*phi(r) or d_y^2
          N = pow((2048.0/9.0*pow(protonic_bs(i,0),7)/(M_PI*M_PI*M_PI)),1.0/4.0);
          phi_r(i,j) = N*pow(x(j)-proton_x,0)*pow(y(j)-proton_y,2)*pow(z(j)-proton_z,0)*exp(-protonic_bs(i,0)*xyz_A_j);
        } else if (count == 4) {
          //y*z*phi(r) or d_yz
          N = pow((2048*pow(protonic_bs(i,0),7)/(M_PI*M_PI*M_PI)),1.0/4.0);
          phi_r(i,j) = N*pow(x(j)-proton_x,0)*pow(y(j)-proton_y,1)*pow(z(j)-proton_z,1)*exp(-protonic_bs(i,0)*xyz_A_j);
        } else if (count == 5) {
          //z^2*phi(r) or d_z^2
          N = pow((2048.0/9.0*pow(protonic_bs(i,0),7)/(M_PI*M_PI*M_PI)),1.0/4.0);
          phi_r(i,j) = N*pow(x(j)-proton_x,0)*pow(y(j)-proton_y,0)*pow(z(j)-proton_z,2)*exp(-protonic_bs(i,0)*xyz_A_j);
        }

        count++;
        if (count == 6) {
          count = 0;
        }

      }

    }
  }

  //std::cout << phi_r << std::endl;

  //Density Matrix of protons in the MO basis for NEO-HF
  Eigen::MatrixXd D_p_HF(protons.nmo_p, protons.nmo_p);
  D_p_HF = Eigen::MatrixXd::Zero(protons.nmo_p, protons.nmo_p);

  Eigen::MatrixXd D_p_HF_oo(protons.nproton,protons.nproton);
  D_p_HF_oo = Eigen::MatrixXd::Identity(protons.nproton,protons.nproton);

  Eigen::MatrixXd D_p_HF_ov(protons.nproton,protons.nmo_p-protons.nproton);
  D_p_HF_ov = Eigen::MatrixXd::Zero(protons.nproton,protons.nmo_p-protons.nproton);

  Eigen::MatrixXd D_p_HF_vo(protons.nmo_p-protons.nproton,protons.nproton);
  D_p_HF_vo = Eigen::MatrixXd::Zero(protons.nmo_p-protons.nproton,protons.nproton);

  Eigen::MatrixXd D_p_HF_vv(protons.nmo_p-protons.nproton,protons.nmo_p-protons.nproton);
  D_p_HF_vv = Eigen::MatrixXd::Zero(protons.nmo_p-protons.nproton,protons.nmo_p-protons.nproton);

  D_p_HF << D_p_HF_oo, D_p_HF_ov,
      D_p_HF_vo, D_p_HF_vv;

  Eigen::MatrixXd P_p;
  std::cout << "density mat AO" << std::endl;
  if (method != "CISD") {
    P_p = protons.C_p*D_p_HF*protons.C_p.transpose();
  } else if (method == "CISD") {
    P_p = protons.C_p*D_CISD*protons.C_p.transpose();
  }
  std::cout << "done density mat AO" << std::endl;

  //calculation of transition density


  int nuocc_p = protons.nmo_p-protons.nproton;
  Eigen::MatrixXd X(protons.nproton,nuocc_p);
  Eigen::MatrixXd Y(protons.nproton,nuocc_p);

  for (int i = 0; i < nuocc_p; i++) {
    X(0,i) = XY(0,i);
    Y(0,i) = XY(0,i+nuocc_p);
  }

  std::cout << "X" << std::endl;
  for (int i = 0; i < nuocc_p; i++) {
    printf("%12f\n", X(0,i));
  }
  std::cout << "Y" << std::endl;
  for (int i = 0; i < nuocc_p; i++) {
    printf("%12f\n", Y(0,i));
  }

  Eigen::MatrixXd C_occ(protons.nao_p,protons.nproton);
  C_occ = Eigen::MatrixXd::Zero(protons.nao_p,protons.nproton);
  for (auto mu = 0; mu < protons.nao_p; mu++) {
    for (auto I = 0; I < protons.nproton; I++) {
      //C_occ(mu,I) = protons.C_p(mu,I);
      C_occ(mu,I) = electrons.C_e(mu,I);
    }
  }

  Eigen::MatrixXd C_uocc(protons.nao_p,nuocc_p);
  C_uocc = Eigen::MatrixXd::Zero(protons.nao_p,nuocc_p);
  for (auto A = protons.nproton; A < protons.nmo_p; A++) {
    for (auto mu = 0; mu < protons.nao_p; mu++) {
      //C_uocc(mu,A-protons.nproton) = protons.C_p(mu,A);
      C_uocc(mu,A-protons.nproton) = electrons.C_e(mu,A);
    }
  }
  Eigen::MatrixXd T = C_occ*(X+Y)*C_uocc.transpose();

  Eigen::VectorXd rho_r(n_pts);
  for (auto i = 0; i < n_pts; i++) {
    double sum = 0.0;
    for (auto mu = 0; mu < nao_p; mu++) {
      for (auto nu = 0; nu < nao_p; nu++) {
        //sum += P_p(mu,nu)*phi_r(mu,i)*phi_r(nu,i);
        sum += T(mu,nu)*phi_r(mu,i)*phi_r(nu,i);
      }
    }
    rho_r(i) = sum;
  }

  std::cout << "rho_r" << std::endl;
  for (auto i = 0; i < n_pts; i++) {
    printf("%12f\n", rho_r(i));
  }

}

void calculate_denisty_old(size_t nao_p, size_t n_pts, Electrons &electrons, Protons &protons, std::vector<Atoms> &atoms_neo, std::string basis_set_p, Eigen::MatrixXd &D_CISD, std::string method, Eigen::MatrixXd &XY) {

  //definition of the basis set in cartesian coordinates
  //protonic_bs_8spd = [exp ang_mom x y z;
  //                     .   .   .  . . .
  //                     .   .   .  . . .
  //                     .   .   .  . . .
  //                    exp ang_mom x y z];
  Eigen::VectorXd angular_momentums_p(nao_p);
  Eigen::VectorXd exponents_p(nao_p);

  if (basis_set_p == "10spd") {
    angular_momentums_p << 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2;
    exponents_p << 2.8284, 4.0000, 5.6569, 8.0000, 11.3137, 16.0000, 22.6274, 32.0000, 45.25526, 64.000,
        2.8284, 2.8284, 2.8284, 4.0000, 4.0000, 4.0000, 5.6569, 5.6569, 5.6569, 8.0000, 8.0000, 8.0000, 11.3137, 11.3137, 11.3137, 16.0000, 16.0000, 16.0000, 22.6274, 22.6274, 22.6274, 32.0000, 32.0000, 32.0000, 45.25526, 45.25526, 45.25526, 64.000, 64.000, 64.000,
        2.8284, 2.8284, 2.8284, 2.8284, 2.8284, 2.8284, 4.0000, 4.0000, 4.0000, 4.0000, 4.0000, 4.0000, 5.6569, 5.6569, 5.6569, 5.6569, 5.6569, 5.6569, 8.0000, 8.0000, 8.0000, 8.0000, 8.0000, 8.0000, 11.3137, 11.3137, 11.3137, 11.3137, 11.3137, 11.3137, 16.0000, 16.0000, 16.0000, 16.0000, 16.0000, 16.0000, 22.6274, 22.6274, 22.6274, 22.6274, 22.6274, 22.6274, 32.0000, 32.0000, 32.0000, 32.0000, 32.0000, 32.0000, 45.25526, 45.25526, 45.25526, 45.25526, 45.25526, 45.25526, 64.000, 64.000, 64.000, 64.000, 64.000, 64.000;
    /*
angular_momentums_p << 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1;
exponents_p << 2.8284, 4.0000, 5.6569, 8.0000, 11.3137, 16.0000, 22.6274, 32.0000, 45.25526, 64.000,
            2.8284, 2.8284, 2.8284, 4.0000, 4.0000, 4.0000, 5.6569, 5.6569, 5.6569, 8.0000, 8.0000, 8.0000, 11.3137, 11.3137, 11.3137, 16.0000, 16.0000, 16.0000, 22.6274, 22.6274, 22.6274, 32.0000, 32.0000, 32.0000, 45.25526, 45.25526, 45.25526, 64.000, 64.000, 64.000;
     */
  } else if (basis_set_p == "sp") {
    //angular_momentums_p << 0, 1, 1, 1, 2, 2, 2, 2, 2, 2;
    //exponents_p << 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0;

    //QZSPD
    angular_momentums_p << 0, 0, 0, 0,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        2, 2, 2, 2, 2, 2;

    exponents_p << 34.63529, 23.53723, 16.15828, 2.88060,
        33.60131, 33.60131, 33.60131, 22.91237, 22.91237, 22.91237, 15.80526, 15.80526, 15.80526, 6.89795, 6.89795, 6.89795,
        8.0000, 8.0000, 8.0000, 8.0000, 8.0000, 8.0000;

    //angular_momentums_p << 0, 1, 1, 1;
    //exponents_p << 4.0, 4.0, 4.0, 4.0;
  } else if (basis_set_p == "8spd") {
    angular_momentums_p << 0, 0, 0, 0, 0, 0, 0, 0,
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
        2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2;

    exponents_p << 2.8284, 4.0000, 5.6569, 8.0000, 11.3137, 16.0000, 22.6274, 32.0000,
        2.8284, 2.8284, 2.8284, 4.0000, 4.0000, 4.0000, 5.6569, 5.6569, 5.6569, 8.0000, 8.0000, 8.0000, 11.3137, 11.3137, 11.3137, 16.0000, 16.0000, 16.0000, 22.6274, 22.6274, 22.6274, 32.0000, 32.0000, 32.0000,
        2.8284, 2.8284, 2.8284, 2.8284, 2.8284, 2.8284, 4.0000, 4.0000, 4.0000, 4.0000, 4.0000, 4.0000, 5.6569, 5.6569, 5.6569, 5.6569, 5.6569, 5.6569, 8.0000, 8.0000, 8.0000, 8.0000, 8.0000, 8.0000, 11.3137, 11.3137, 11.3137, 11.3137, 11.3137, 11.3137, 16.0000, 16.0000, 16.0000, 16.0000, 16.0000, 16.0000, 22.6274, 22.6274, 22.6274, 22.6274, 22.6274, 22.6274, 32.0000, 32.0000, 32.0000, 32.0000, 32.0000, 32.0000;


    /*
angular_momentums_p << 0, 0, 0, 0, 0, 0, 0, 0,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1;
//Correct ordering!!!
exponents_p << 2.8284, 4.0000, 5.6569, 8.0000, 11.3137, 16.0000, 22.6274, 32.0000,
    2.8284, 2.8284, 2.8284, 4.0000, 4.0000, 4.0000, 5.6569, 5.6569, 5.6569, 8.0000, 8.0000, 8.0000, 11.3137, 11.3137, 11.3137, 16.0000, 16.0000, 16.0000, 22.6274, 22.6274, 22.6274, 32.0000, 32.0000, 32.0000;
     */
    /*
angular_momentums_p << 0, 0, 0, 0, 0, 0, 0,
                       1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1;
exponents_p << 4.2159, 13.332, 42.159, 133.32, 421.59, 1333.2, 4215.9,
    4.2159, 13.332, 42.159, 133.32, 421.59, 1333.2, 4215.9, 4.2159, 13.332, 42.159, 133.32, 421.59, 1333.2, 4215.9, 4.2159, 13.332, 42.159, 133.32, 421.59, 1333.2, 4215.9;
     */
  } else if (basis_set_p == "6s3p1d") {
    angular_momentums_p << 0, 0, 0, 0, 0, 0,
        1, 1, 1, 1, 1, 1, 1, 1, 1,
        2, 2, 2, 2, 2, 2;

    exponents_p << 8.9346, 1.5904, 0.51619, 0.11092, 0.052472, 0.024562,
        0.47831, 0.47831, 0.47831, 0.18726, 0.18726, 0.18726, 0.069729, 0.069729, 0.069729,
        0.15439, 0.15439, 0.15439, 0.15439, 0.15439, 0.15439;

  }

  Eigen::MatrixXd protonic_bs(nao_p, 2);

  double proton_x, proton_y, proton_z;
  for (auto i = 0; i < atoms_neo.size(); ++i) {
    if (atoms_neo[i].atomic_number == 0) {
      proton_x = atoms_neo[i].x;
      proton_y = atoms_neo[i].y;
      proton_z = atoms_neo[i].z;
    }
  }

  for (auto i = 0; i < nao_p; i++) {
    protonic_bs(i,0) = exponents_p(i);
    protonic_bs(i,1) = angular_momentums_p(i);
  }

  //calculating the values of each basis function at different points in the space
  //int n_pts = 10;
  double delta_z = 10.0; //a.u.
  double del = delta_z/n_pts;

/*
  std::cout << "proton_z = " << proton_z << std::endl;
  Eigen::VectorXd z(2*n_pts);
  for (auto i = 0; i < 2*n_pts; i++) {
    if (i < n_pts) {
      //z(i) = proton_z - (n_pts - i)*del;
      z(i) = proton_z;
    } else {
      //z(i) = proton_z + (i - n_pts)*del;
      z(i) = proton_z;
    }
  }
  std::cout << "z" << std::endl;
  std::cout << z << std::endl;

  std::cout << "proton_y = " << proton_y << std::endl;
  Eigen::VectorXd y(2*n_pts);
  for (auto i = 0; i < 2*n_pts; i++) {
    if (i < n_pts) {
      y(i) = proton_y - (n_pts - i)*del;
      //y(i) = 0.0;
    } else {
      y(i) = proton_y + (i - n_pts)*del;
      //y(i) = 0.0;
    }
  }
  std::cout << "y" << std::endl;
  std::cout << y << std::endl;

  //values of the protonic basis functions phi(r)
  Eigen::MatrixXd phi_r(nao_p,2*n_pts);*/

  n_pts = 32;
Eigen::VectorXd y(n_pts);
Eigen::VectorXd z(n_pts);

//fhf- molecule
//y << -1.06013636,-0.98946060,-0.91878484,-0.84810908,-0.77743333,-0.70675757,-0.63608181,-0.56540606,-0.49473030,-0.42405454,-0.35337879,-0.28270303,-0.21202727,-0.14135151,-0.07067576,0.00000000,0.07067576,0.14135151,0.21202727,0.28270303,0.35337879,0.42405454,0.49473030,0.56540606,0.63608181,0.70675757,0.77743333,0.84810908,0.91878484,0.98946060,1.06013636;
//z << 0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0;

const auto angstrom_to_bohr = 1 / 0.52917721092; // 2010 CODATA value

//hcn-coraline
//on-axis
y << 0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0;
z << 0.3245,0.3742,0.4239,0.4736,0.5233,0.573,0.6227,0.6724,0.7221,0.7718,0.8215,0.8712,0.9209,0.9706,1.0203,1.07,1.1197,1.1694,1.2191,1.2688,1.3185,1.3682,1.4179,1.4676,1.5173,1.567,1.6167,1.6664,1.7161,1.7658,1.8155,1.8652;
z /= 0.52917721092;

Eigen::MatrixXd phi_r(nao_p,n_pts);

  std::cout << "proton_z = " << proton_z << std::endl;
  std::cout << "z" << std::endl;
  std::cout << z << std::endl;

  //for (int j = 0; j < 2*n_pts; j++) {
    for (int j = 0; j < n_pts; j++) {
    int count = 0;
    for (int i = 0; i < nao_p; i++) {

      double xyz_A_j = (0 - proton_x)*(0 - proton_x) + (y(j) - proton_y)*(y(j) - proton_y) + (z(j) - proton_z)*(z(j) - proton_z);
      double N;

      if (protonic_bs(i,1) == 0) {

        N = pow((2.0*protonic_bs(i,0)/M_PI),3.0/4.0);
        phi_r(i,j) = N*exp(-protonic_bs(i,0)*xyz_A_j);
      } else if (protonic_bs(i,1) == 1) {

        N = pow((128*pow(protonic_bs(i,0),5)/(M_PI*M_PI*M_PI)),1.0/4.0);

        if (count == 0) {
          //x*phi(r) or p_x
          phi_r(i,j) = N*pow(0-proton_x,1)*pow(y(j)-proton_y,0)*pow(z(j)-proton_z,0)*exp(-protonic_bs(i,0)*xyz_A_j);
        } else if (count == 1) {
          //y*phi(r) or p_y
          phi_r(i,j) = N*pow(0-proton_x,0)*pow(y(j)-proton_y,1)*pow(z(j)-proton_z,0)*exp(-protonic_bs(i,0)*xyz_A_j);
        } else if (count == 2) {
          //z*phi(r) or p_z
          phi_r(i,j) = N*pow(0-proton_x,0)*pow(y(j)-proton_y,0)*pow(z(j)-proton_z,1)*exp(-protonic_bs(i,0)*xyz_A_j);
        }
        count++;

        if (count == 3) {
          count = 0;
        }

      } else if (protonic_bs(i,1) == 2) {

        if (count == 0) {
          //x^2*phi(r) or d_x^2
          N = pow((2048.0/9.0*pow(protonic_bs(i,0),7)/(M_PI*M_PI*M_PI)),1.0/4.0);
          phi_r(i,j) = N*pow(0-proton_x,2)*pow(y(j)-proton_y,0)*pow(z(j)-proton_z,0)*exp(-protonic_bs(i,0)*xyz_A_j);
        } else if (count == 1) {
          //x*y*phi(r) or d_xy
          N = pow((2048*pow(protonic_bs(i,0),7)/(M_PI*M_PI*M_PI)),1.0/4.0);
          phi_r(i,j) = N*pow(0-proton_x,1)*pow(y(j)-proton_y,1)*pow(z(j)-proton_z,0)*exp(-protonic_bs(i,0)*xyz_A_j);
        } else if (count == 2) {
          //x*z*phi(r) or d_xz
          N = pow((2048*pow(protonic_bs(i,0),7)/(M_PI*M_PI*M_PI)),1.0/4.0);
          phi_r(i,j) = N*pow(0-proton_x,1)*pow(y(j)-proton_y,0)*pow(z(j)-proton_z,1)*exp(-protonic_bs(i,0)*xyz_A_j);
        } else if (count == 3) {
          //y^2*phi(r) or d_y^2
          N = pow((2048.0/9.0*pow(protonic_bs(i,0),7)/(M_PI*M_PI*M_PI)),1.0/4.0);
          phi_r(i,j) = N*pow(0-proton_x,0)*pow(y(j)-proton_y,2)*pow(z(j)-proton_z,0)*exp(-protonic_bs(i,0)*xyz_A_j);
        } else if (count == 4) {
          //y*z*phi(r) or d_yz
          N = pow((2048*pow(protonic_bs(i,0),7)/(M_PI*M_PI*M_PI)),1.0/4.0);
          phi_r(i,j) = N*pow(0-proton_x,0)*pow(y(j)-proton_y,1)*pow(z(j)-proton_z,1)*exp(-protonic_bs(i,0)*xyz_A_j);
        } else if (count == 5) {
          //z^2*phi(r) or d_z^2
          N = pow((2048.0/9.0*pow(protonic_bs(i,0),7)/(M_PI*M_PI*M_PI)),1.0/4.0);
          phi_r(i,j) = N*pow(0-proton_x,0)*pow(y(j)-proton_y,0)*pow(z(j)-proton_z,2)*exp(-protonic_bs(i,0)*xyz_A_j);
        }

        count++;
        if (count == 6) {
          count = 0;
        }

      }

    }
  }

  //std::cout << phi_r << std::endl;

  //Density Matrix of protons in the MO basis for NEO-HF
  Eigen::MatrixXd D_p_HF(protons.nmo_p, protons.nmo_p);
  D_p_HF = Eigen::MatrixXd::Zero(protons.nmo_p, protons.nmo_p);

  Eigen::MatrixXd D_p_HF_oo(protons.nproton,protons.nproton);
  D_p_HF_oo = Eigen::MatrixXd::Identity(protons.nproton,protons.nproton);

  Eigen::MatrixXd D_p_HF_ov(protons.nproton,protons.nmo_p-protons.nproton);
  D_p_HF_ov = Eigen::MatrixXd::Zero(protons.nproton,protons.nmo_p-protons.nproton);

  Eigen::MatrixXd D_p_HF_vo(protons.nmo_p-protons.nproton,protons.nproton);
  D_p_HF_vo = Eigen::MatrixXd::Zero(protons.nmo_p-protons.nproton,protons.nproton);

  Eigen::MatrixXd D_p_HF_vv(protons.nmo_p-protons.nproton,protons.nmo_p-protons.nproton);
  D_p_HF_vv = Eigen::MatrixXd::Zero(protons.nmo_p-protons.nproton,protons.nmo_p-protons.nproton);

  D_p_HF << D_p_HF_oo, D_p_HF_ov,
      D_p_HF_vo, D_p_HF_vv;

  Eigen::MatrixXd P_p;
  std::cout << "density mat AO" << std::endl;
  if (method != "CISD") {
    P_p = protons.C_p*D_p_HF*protons.C_p.transpose();
  } else if (method == "CISD") {
    P_p = protons.C_p*D_CISD*protons.C_p.transpose();
  }
  std::cout << "done density mat AO" << std::endl;

  //std::cout << P_p << std::endl;

  //Eigen::VectorXd rho_r(2*n_pts);
  //for (auto i = 0; i < 2*n_pts; i++) {
    Eigen::VectorXd rho_r(n_pts);
    for (auto i = 0; i < n_pts; i++) {
    double sum = 0.0;
    for (auto mu = 0; mu < nao_p; mu++) {
      for (auto nu = 0; nu < nao_p; nu++) {
        sum += P_p(mu,nu)*phi_r(mu,i)*phi_r(nu,i);
        //sum += T(mu,nu)*phi_r(mu,i)*phi_r(nu,i);
      }
    }
    rho_r(i) = sum;
  }

  std::cout << "rho_r" << std::endl;
  //for (auto i = 0; i < 2*n_pts; i++) {
    for (auto i = 0; i < n_pts; i++) {
    printf("%12f\n", rho_r(i));
  }

}


