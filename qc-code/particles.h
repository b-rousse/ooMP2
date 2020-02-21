#include <Eigen/Dense>

typedef Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor>
Matrix;  // import dense, dynamically sized Matrix type from Eigen;
// this is a matrix with row-major storage (http://en.wikipedia.org/wiki/Row-major_order)
// to meet the layout of the integrals returned by the Libint integral library

//hold all data required for the electrons
struct Electrons {
  int nelectron;
  int ndocc_e;
  //# of frozen core orbitals
  size_t nfc_e;
  //# of AO basis functions
  int nao_e;
  //# of MO basis functions
  int nmo_e;
  //Overlap S matrix of electronic basis functions
  Matrix S_e;
  //Core Hamiltonian matrix of electrons
  Matrix H_core_e;
  //electron-electron repulsion integrals
  //TensorRank4 g_ee(int, int, int, int);
  //MO expansion coefficints
  Eigen::MatrixXd C_e;
  //electronic orbital energies
  Eigen::MatrixXd E_e;
  //total electronic (NEO) energy
  double E_electronic_tot;
};

//hold all data required for quantum protons
struct Protons {
  //mass of proton in a.u.
  const double m_p = 1836.15267389;
  //const double m_p = 1836.00;
  int nproton;
  //# of basis functions
  int nao_p;
  //# of MO basis functions
  int nmo_p;
  //Overlap S matrix of quantum protonic basis functions
  Matrix S_p;
  //Core Hamiltonian matrix of quantum protons
  Matrix H_core_p;
  //proton-proton repulsion integrals
  //TensorRank4 g_pp(int, int, int, int);
  //electron-proton attraction integrals
  //TensorRank4 g_ep(int, int, int, int);
  //MO expansion coefficints
  Eigen::MatrixXd C_p;
  //protonic orbital energies
  Eigen::MatrixXd E_p;
};

//hold all data regarding options for calculation
struct Options {
  //Overlap matrix threshold
  double S_thresold_e = 1.0;
  double S_thresold_p = 1e-8;

  double threshold_E_neo = 1e-10;

  double P_threshold_e = 1e-7;
  double P_threshold_p = 1e-7;

  bool frozen_core = false;
  std::string method;
  std::string plot;

  //v_pp in Gamess
  bool v_pp = false;

  //type of calculation, can be opt or sp
  //opt (optimized position of the H basis set) and sp (single point calculation)
  //default if sp
  std::string type = "sp";

  //calculate proton position
  bool proton_position = true;

};

