#pragma once
#include "tensor.h"

typedef Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> MatrixCD; //custom double
typedef Eigen::Matrix<int, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> MatrixCI; //custom integer

//TensorRank4 Update_MP2_doubles(const int , const int , TensorRank4 *, const TensorRank4 *, const Eigen::MatrixXd *);
//TensorRank4 Update_MP2_doublesspinorbital(const int , const int , TensorRank4 *, const TensorRank4 *, const Eigen::MatrixXd *);
//TensorRank4 Calculate_MP2_residuals(int *, const double, const int, const int, const TensorRank4 *, const TensorRank4 *, const Eigen::MatrixXd *);
//TensorRank4 Calculate_MP2_residualsspinorbital(int *, const double, const int, const int, const TensorRank4 *, const TensorRank4 *, const Eigen::MatrixXd *);
//Eigen::MatrixXd Test_Noncanonical_MP2(const int, Eigen::MatrixXd *);//Test the code with localized MOs on water; easiest to get from GAMESS with LOCAL keyword.
//Eigen::MatrixXd Test_Spinfree_Noncanonical_MP2(const int, Eigen::MatrixXd *);//Test the code with localized MOs on water; easiest to get from GAMESS with LOCAL keyword.
//double RunMP2spinfreenoncanon(const TensorRank4 *, Eigen::MatrixXd *, const int , const int , const Eigen::VectorXd *, const Eigen::MatrixXd *, const Eigen::MatrixXd *);
//double RunMP2spinorbitalnoncanon(const TensorRank4 *, Eigen::MatrixXd *, const int, const int, const Eigen::VectorXd *, const Eigen::MatrixXd *, const Eigen::MatrixXd *);

//Eigen::MatrixXd fock_spinfreebuildforMP2(const int, const Eigen::MatrixXd *, const Eigen::MatrixXd *, const Eigen::MatrixXd *, const TensorRank4 *);
//Eigen::MatrixXd fock_spinorbitalbuildforMP2(const int, const Eigen::MatrixXd *, const TensorRank4 *);
//Eigen::MatrixXd fock_spinorbitalbuildforMP2(const int, const int, const Eigen::MatrixXd *, const TensorRank4 *, const Eigen::MatrixXd *);

//TensorRank4 Basic_convert_ERI_Tensor_AOtospinfreeMO(const int, const int, Eigen::MatrixXd *, const TensorRank4 *);
//double Spinfree_EMP2(const int, const int, const TensorRank4 *, const TensorRank4 *);
//double Spinorbital_EMP2(const int, const int, const TensorRank4 *, const TensorRank4 *);
//double Canonical_EMP2_Spinfree(const int, const int, const TensorRank4 *, const Eigen::VectorXd *);
//double Canonical_EMP2_Spinorbital(const int, const int, const TensorRank4 *, const Eigen::MatrixXd *);
//TensorRank4 Basic_convert_ERI_Tensor_SpinfreeMOtoSpinorbitalMO(const int, const TensorRank4 *);
class SpinFreeMP2{
    public:
    const TensorRank4 eriTensor;//make sure I pass instance of class the reference to eriTensor, NOT make a copy.
    const int nbfs, numocc;
    Eigen::MatrixXd Coeffs;
    const Eigen::MatrixXd H_core, S;
    const Eigen::VectorXd Evals;
    
    SpinFreeMP2(const TensorRank4 *eriTensor, Eigen::MatrixXd *Coeffs, const int nbfs, const int numocc, const Eigen::VectorXd *Evals, const Eigen::MatrixXd *H_core, const Eigen::MatrixXd *S);

    Eigen::MatrixXd fock_spinfreebuildforMP2(const Eigen::MatrixXd *P);

    TensorRank4 Basic_convert_ERI_Tensor_AOtospinfreeMO();

    double Canonical_EMP2_Spinfree(const TensorRank4 *MP2Tensor, const Eigen::VectorXd *Fockevals);

    double Spinfree_EMP2(const TensorRank4 *MP2Tensor, const TensorRank4 *doubles);

    TensorRank4 Calculate_MP2_residuals(int *residcounter, const double residconv, const TensorRank4 *MP2Tensor, const TensorRank4 *doubles, const Eigen::MatrixXd *F);

    TensorRank4 Update_MP2_doubles(TensorRank4 *doubles, const TensorRank4 *residual, const Eigen::MatrixXd *F);
};

class SpinOrbitalMP2{
    public:
    const TensorRank4 eriTensor;//make sure I pass instance of class the reference to eriTensor, NOT make a copy.
    const int nbfs, numocc;
    //const int numMP2steps;
    //const double residconv;
    Eigen::MatrixXd Coeffs;
    const Eigen::MatrixXd H_core, S;
    const Eigen::VectorXd Evals;

    SpinOrbitalMP2(const TensorRank4 *eriTensor, Eigen::MatrixXd *Coeffs, const int nbfs, const int numocc, const Eigen::VectorXd *Evals, const Eigen::MatrixXd *H_core, const Eigen::MatrixXd *S);

    Eigen::MatrixXd fock_spinfreebuildforMP2(const Eigen::MatrixXd *P);
    
    Eigen::MatrixXd fock_spinorbitalbuildforMP2(const Eigen::MatrixXd *F_mo);

    TensorRank4 Basic_convert_ERI_Tensor_AOtospinfreeMO();

    TensorRank4 Basic_convert_ERI_Tensor_SpinfreeMOtoSpinorbitalMO(const TensorRank4 *MP2Tensor);

    double Canonical_EMP2_Spinorbital(const TensorRank4 *MP2Tensor, const Eigen::MatrixXd *CanFock);

    double Spinorbital_EMP2(const TensorRank4 *MP2Tensor, const TensorRank4 *doubles);

    TensorRank4 Calculate_MP2_residualsspinorbital(int *residcounter, const double residconv, const TensorRank4 *MP2Tensor, const TensorRank4 *doubles, const Eigen::MatrixXd *F);

    TensorRank4 Update_MP2_doublesspinorbital(TensorRank4 *doubles, const TensorRank4 *residual, const Eigen::MatrixXd *F);

};

class OMP2_SO{
    public:
    const TensorRank4 eriTensor;//make sure I pass instance of class the reference to eriTensor, NOT make a copy.
    const int nbfs, numocc;
    const double enuc;
    //const int numMP2steps;
    //const double residconv;
    const Eigen::MatrixXd SFCoeffs;
    const Eigen::MatrixXd S;
    Eigen::MatrixXd H_core;
    Eigen::VectorXd Evals;

    OMP2_SO(const TensorRank4 *eriTensor, const Eigen::MatrixXd SFCoeffs, const int nbfs, const int numocc, Eigen::VectorXd *Evals, Eigen::MatrixXd *H_core, const Eigen::MatrixXd *S, const double enuc);

    void diis_input_check(int DIIS_max_num_iters, double DIIS_storage_threshhold, double DIIS_threshhold);

    double compute_condition_number(const int dim1, const Eigen::MatrixXd &A);

    Eigen::MatrixXd rotate_so_sized_matrix(const Eigen::MatrixXd *matrix_to_rotate, const Eigen::MatrixXd *coefficients);

    Eigen::Tensor<double,4> experimental_copy_eriTensorSO_to_standard_tensor_format(const TensorRank4 &eriTensorSO);

    Eigen::MatrixXd construct_generalized_fock(const TensorRank4 *eriTensorSO, const Eigen::MatrixXd *H_core, const Eigen::MatrixXd *one_particle_density, const TensorRank4 *two_particle_density);

    Eigen::MatrixXd fock_build_sf(const Eigen::MatrixXd *P, const Eigen::MatrixXd *Coeffs);
    
    Eigen::MatrixXd fock_build_so(const Eigen::MatrixXd *F_mo);

    TensorRank4 basic_convert_ERI_tensor_AO_to_soMO(const Eigen::MatrixXd *Coeffs);

    TensorRank4 basic_convert_ERI_tensor_sfMO_to_soMO(const TensorRank4 *MP2Tensor);

    TensorRank4 calculate_residuals_so(int *residcounter, const double residconv, const TensorRank4 *two_electron_integral, const TensorRank4 *doubles, const Eigen::MatrixXd *F);

    TensorRank4 update_doubles_so(TensorRank4 *doubles, const TensorRank4 *residual, const Eigen::MatrixXd *F);

    Eigen::MatrixXd build_one_particle_density_hf();

    Eigen::MatrixXd build_one_particle_density_mp2(TensorRank4 *doubles);

    Eigen::MatrixXd build_total_one_particle_density(const Eigen::MatrixXd &rdm1e_hf, const Eigen::MatrixXd &rdm1e_mp2);

    TensorRank4 build_two_particle_density(TensorRank4 *doubles, const Eigen::MatrixXd &rdm1e_hf, const Eigen::MatrixXd &rdm1e_mp2);

    //Compute the Newton-Raphson orbital rotation matrix
    Eigen::MatrixXd compute_newton_raphson_step(const Eigen::MatrixXd *generalized_fock, const Eigen::MatrixXd *fso, double level_shift);

    Eigen::MatrixXd compute_orbital_gradient(const Eigen::MatrixXd &generalized_fock);

    Eigen::MatrixXd compute_orbital_rotation_parameter(const Eigen::MatrixXd &w, const Eigen::MatrixXd &fso, double level_shift);//DO LEVEL SHIFTING???

    void cycle_sync(Eigen::MatrixXd &Gen_fock, Eigen::MatrixXd &orbital_gradient, Eigen::MatrixXd &orbital_rotation_parameter, Eigen::MatrixXd &collective_orbital_rotation_parameters, 
    const double level_shift, const Eigen::MatrixXd &F_SO, const Eigen::MatrixXd &one_electron_integrals, const Eigen::MatrixXd &one_particle_density, const TensorRank4 &two_electron_integrals, const TensorRank4 &two_particle_density);

    void diis_storage_and_cleanup(bool &recent_reset, std::vector<double> &DIIS_energies, std::vector<Eigen::VectorXd> &DIIS_error_vectors_t2, std::vector<Eigen::MatrixXd> &DIIS_orbital_rotation_parameters, std::vector<Eigen::MatrixXd> &DIIS_error_vectors_rot, std::vector<TensorRank4> &DIIS_Tensors,
    const bool DIIS_time, const double E_omp2, const int diiscount, const int nbfs, const int numocc, const int diiscount_at_reset, const int DIIS_max_num_iters, const Eigen::MatrixXd &collective_orbital_rotation_parameters, const Eigen::MatrixXd &orbital_gradient, const TensorRank4 &doublesSO);

    void diis_control_flow(bool &MK_DIIS_time, bool &DIIS_time, bool &recent_reset, bool &DIIS_restart_given_time_to_be_used, int &effective_DIIS_num_iters, int &DIIS_reset_delay, int &diiscount_at_reset, int &until_next_DIIS_restart, std::vector<Eigen::VectorXd> &DIIS_error_vectors_t2, std::vector<Eigen::MatrixXd> &DIIS_error_vectors_rot, std::vector<Eigen::MatrixXd> &DIIS_orbital_rotation_parameters, std::vector<TensorRank4> &DIIS_Tensors,
    const std::string CN_handling, const bool enforce_well_behaved_DIIS, const bool print_diis_results, const int CN_DIIS_reset_delay, const int diiscount, const int nbfs, const int numocc, const int DIIS_max_num_iters, const double diff_E, const double DIIS_threshhold, const Eigen::MatrixXd &DIIS_error_matrix, const Eigen::MatrixXd &orbital_gradient);

    void diis_interpolation(Eigen::MatrixXd &DIIS_error_matrix, Eigen::MatrixXd &DIIS_orbitalsSO, TensorRank4 &DIIS_doublesSO, std::vector<Eigen::VectorXd> &DIIS_error_vectors_t2,
    const std::vector<Eigen::MatrixXd> &DIIS_error_vectors_rot, const std::vector<Eigen::MatrixXd> &DIIS_orbital_rotation_parameters, const std::vector<TensorRank4> &DIIS_Tensors, const bool print_diis_results, const int diiscount, const int nbfs, const int numocc, const int count, const int effective_DIIS_num_iters);

    Eigen::MatrixXd collective_newton_raphson_step(const Eigen::MatrixXd &collective_rotation);

    Eigen::MatrixXd rotate_spin_orbital_coefficients(Eigen::MatrixXd SFCoeffs, const Eigen::MatrixXd *orbital_rotation_matrix);

    Eigen::MatrixXd rotate_one_electron_integrals(const Eigen::MatrixXd *rotated_coefficients, const Eigen::MatrixXd *h_core_ao);

    TensorRank4 construct_so_ao_electron_integral_tensor();

    TensorRank4 rotate_two_electron_integrals(const Eigen::MatrixXd &rotated_coefficients, const TensorRank4 &eriTensorSO);

    TensorRank4 rotate_two_electron_integrals_experimental(const Eigen::MatrixXd &rotated_coefficients, const Eigen::Tensor<double, 4> &eriTensorSO);

    double calculate_E_oomp2(const Eigen::MatrixXd *one_particle_density, const TensorRank4 *two_particle_density, const Eigen::MatrixXd *rotated_one_electron_integrals, const TensorRank4 *rotated_two_electron_integrals);
};

class SpinOrbitalCCD{
    public:
    const TensorRank4 eriTensor;//make sure I pass instance of class the reference to eriTensor, NOT make a copy.
    const int nbfs, numocc;
    const double enuc;
    //const int numMP2steps;
    //const double residconv;
    const Eigen::MatrixXd SFCoeffs;
    const Eigen::MatrixXd S;
    Eigen::MatrixXd H_core;
    Eigen::VectorXd Evals;

    SpinOrbitalCCD(const TensorRank4 *eriTensor, const Eigen::MatrixXd SFCoeffs, const int nbfs, const int numocc, Eigen::VectorXd *Evals, Eigen::MatrixXd *H_core, const Eigen::MatrixXd *S, const double enuc);

    double compute_condition_number(const int dim1, const Eigen::MatrixXd &A);

    double canonical_E_ee_so(const TensorRank4 &two_electron_integrals, const TensorRank4 &doublesSO);
    
    Eigen::MatrixXd rotate_so_sized_matrix(const Eigen::MatrixXd *matrix_to_rotate, const Eigen::MatrixXd *coefficients);

    TensorRank4 stanton_t2_eqn(const TensorRank4 *g, const TensorRank4 *doubles, const Eigen::MatrixXd *F, const Eigen::MatrixXd *f, const TensorRank4 &two_particle_intermediate);

    Eigen::MatrixXd construct_generalized_fock(const TensorRank4 *eriTensorSO, const Eigen::MatrixXd *H_core, const Eigen::MatrixXd *one_particle_density, const TensorRank4 *two_particle_density);

    Eigen::MatrixXd construct_one_particle_intermediate(const Eigen::MatrixXd &F_SO, const TensorRank4 &doublesSO, const TensorRank4 &two_electron_integrals, bool stanton_CCD);
    
    TensorRank4 construct_two_particle_intermediate(const TensorRank4 &doublesSO, const TensorRank4 &two_electron_integrals);

    Eigen::MatrixXd fock_build_sf(const Eigen::MatrixXd *P, const Eigen::MatrixXd *Coeffs);
    
    Eigen::MatrixXd fock_build_so(const Eigen::MatrixXd *F_mo);

    TensorRank4 basic_convert_ERI_tensor_AO_to_soMO(const Eigen::MatrixXd *Coeffs);

    TensorRank4 basic_convert_ERI_tensor_sfMO_to_soMO(const TensorRank4 *MP2Tensor);

    TensorRank4 calculate_residuals_so(int *residcounter, const double residconv, const TensorRank4 *MP2Tensor, const TensorRank4 *doubles, const Eigen::MatrixXd *F, const TensorRank4 &two_particle_intermediate);

    TensorRank4 update_doubles_so(TensorRank4 *doubles, const TensorRank4 *residual, const Eigen::MatrixXd *F);

    Eigen::MatrixXd build_one_particle_density_hf();

    Eigen::MatrixXd build_one_particle_density_ccd(TensorRank4 *doubles);

    Eigen::MatrixXd build_total_one_particle_density(const Eigen::MatrixXd &rdm1e_hf, const Eigen::MatrixXd &rdm1e_mp2);

    TensorRank4 build_two_particle_density(TensorRank4 *doubles, const Eigen::MatrixXd &rdm1e_hf, const Eigen::MatrixXd &rdm1e_mp2);

    //Compute the Newton-Raphson orbital rotation matrix
    Eigen::MatrixXd compute_newton_raphson_step(const Eigen::MatrixXd *generalized_fock, const Eigen::MatrixXd *fso);

    Eigen::MatrixXd rotate_so_coefficients(Eigen::MatrixXd SFCoeffs, const Eigen::MatrixXd *orbital_rotation_matrix);

    Eigen::MatrixXd rotate_one_electron_integrals(const Eigen::MatrixXd *rotated_coefficients, const Eigen::MatrixXd *h_core_ao);

    TensorRank4 construct_so_ao_electron_integral_tensor();

    TensorRank4 rotate_two_electron_integrals(const Eigen::MatrixXd *rotated_coefficients, const TensorRank4 *eriTensorSO);

    double calculate_E_ccd(const Eigen::MatrixXd *one_particle_density, const TensorRank4 *two_particle_density, const Eigen::MatrixXd *rotated_one_electron_integrals, const TensorRank4 *rotated_two_electron_integrals);
};