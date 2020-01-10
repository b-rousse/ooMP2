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

class OOSpinOrbitalMP2{
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

    OOSpinOrbitalMP2(const TensorRank4 *eriTensor, const Eigen::MatrixXd SFCoeffs, const int nbfs, const int numocc, Eigen::VectorXd *Evals, Eigen::MatrixXd *H_core, const Eigen::MatrixXd *S, const double enuc);

    Eigen::MatrixXd rotate_so_sized_matrix(const Eigen::MatrixXd *matrix_to_rotate, const Eigen::MatrixXd *coefficients);

    Eigen::MatrixXd construct_generalized_fock(const TensorRank4 *eriTensorSO, const Eigen::MatrixXd *H_core, const Eigen::MatrixXd *one_particle_density, const TensorRank4 *two_particle_density);

    Eigen::MatrixXd fock_spinfreebuildforMP2(const Eigen::MatrixXd *P, const Eigen::MatrixXd *Coeffs);
    
    Eigen::MatrixXd fock_spinorbitalbuildforMP2(const Eigen::MatrixXd *F_mo);

    TensorRank4 Basic_convert_ERI_Tensor_AOtospinorbitalMO(const Eigen::MatrixXd *Coeffs);

    TensorRank4 Basic_convert_ERI_Tensor_SpinfreeMOtoSpinorbitalMO(const TensorRank4 *MP2Tensor);

    double Canonical_EMP2_Spinorbital(const TensorRank4 *MP2Tensor, const Eigen::MatrixXd *CanFock);

    double Spinorbital_EMP2(const TensorRank4 *MP2Tensor, const TensorRank4 *doubles, const Eigen::MatrixXd *one_electron_integrals, const Eigen::MatrixXd *one_particle_density);

    TensorRank4 Calculate_MP2_residualsspinorbital(int *residcounter, const double residconv, const TensorRank4 *MP2Tensor, const TensorRank4 *doubles, const Eigen::MatrixXd *F);

    TensorRank4 Update_MP2_doublesspinorbital(TensorRank4 *doubles, const TensorRank4 *residual, const Eigen::MatrixXd *F);

    Eigen::MatrixXd build_one_particle_density_hf();

    Eigen::MatrixXd build_one_particle_density_mp2(TensorRank4 *doubles);

    Eigen::MatrixXd build_total_one_particle_density(const Eigen::MatrixXd &rdm1e_hf, const Eigen::MatrixXd &rdm1e_mp2);

    TensorRank4 build_two_particle_density(TensorRank4 *doubles, const Eigen::MatrixXd &rdm1e_hf, const Eigen::MatrixXd &rdm1e_mp2);

    //Compute the Newton-Raphson orbital rotation matrix
    Eigen::MatrixXd compute_newton_raphson_step(const Eigen::MatrixXd *generalized_fock);

    Eigen::MatrixXd rotate_spin_orbital_coefficients(Eigen::MatrixXd SFCoeffs, const Eigen::MatrixXd *orbital_rotation_matrix);

    Eigen::MatrixXd rotate_one_electron_integrals(const Eigen::MatrixXd *rotated_coefficients, const Eigen::MatrixXd *h_core_ao);

    TensorRank4 construct_spinorbital_ao_electron_integral_tensor(const TensorRank4 *eriTensor);

    TensorRank4 rotate_two_electron_integrals(const Eigen::MatrixXd *rotated_coefficients, const TensorRank4 *eriTensorSO);

    double calculate_E_oomp2(const Eigen::MatrixXd *one_particle_density, const TensorRank4 *two_particle_density, const Eigen::MatrixXd *rotated_one_electron_integrals, const TensorRank4 *rotated_two_electron_integrals);
};