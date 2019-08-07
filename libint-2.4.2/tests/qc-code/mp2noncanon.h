#include "tensor.h"

typedef Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> MatrixCD; //custom double
typedef Eigen::Matrix<int, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> MatrixCI; //custom integer

TensorRank4 Update_MP2_doubles(const int , const int , TensorRank4 *, const TensorRank4 *, const Eigen::MatrixXd *);
TensorRank4 Update_MP2_doublesspinorbital(const int , const int , TensorRank4 *, const TensorRank4 *, const Eigen::MatrixXd *);
TensorRank4 Calculate_MP2_residuals(int *, const double, const int, const int, const TensorRank4 *, const TensorRank4 *, const Eigen::MatrixXd *);
TensorRank4 Calculate_MP2_residualsspinorbital(int *, const double, const int, const int, const TensorRank4 *, const TensorRank4 *, const Eigen::MatrixXd *);
Eigen::MatrixXd Test_Noncanonical_MP2(const int, Eigen::MatrixXd *);//Test the code with localized MOs on water; easiest to get from GAMESS with LOCAL keyword.
Eigen::MatrixXd Test_Spinfree_Noncanonical_MP2(const int, Eigen::MatrixXd *);//Test the code with localized MOs on water; easiest to get from GAMESS with LOCAL keyword.
double RunMP2spinfreenoncanon(const TensorRank4 *, Eigen::MatrixXd *, const int , const int , const Eigen::VectorXd *, const Eigen::MatrixXd *, const Eigen::MatrixXd *);
double RunMP2spinorbitalnoncanon(const TensorRank4 *, Eigen::MatrixXd *, const int, const int, const Eigen::VectorXd *, const Eigen::MatrixXd *, const Eigen::MatrixXd *);

Eigen::MatrixXd fock_spinfreebuildforMP2(const int, const Eigen::MatrixXd *, const Eigen::MatrixXd *, const Eigen::MatrixXd *, const TensorRank4 *);
//Eigen::MatrixXd fock_spinorbitalbuildforMP2(const int, const Eigen::MatrixXd *, const TensorRank4 *);
Eigen::MatrixXd fock_spinorbitalbuildforMP2(const int, const int, const Eigen::MatrixXd *, const TensorRank4 *, const Eigen::MatrixXd *);

TensorRank4 Basic_convert_ERI_Tensor_AOtospinfreeMO(const int, const int, Eigen::MatrixXd *, const TensorRank4 *);
double Spinfree_EMP2(const int, const int, const TensorRank4 *, const TensorRank4 *);
double Spinorbital_EMP2(const int, const int, const TensorRank4 *, const TensorRank4 *);
double Canonical_EMP2_Spinfree(const int, const int, const TensorRank4 *, const Eigen::VectorXd *);
double Canonical_EMP2_Spinorbital(const int, const int, const TensorRank4 *, const Eigen::MatrixXd *);
TensorRank4 Basic_convert_ERI_Tensor_SpinfreeMOtoSpinorbitalMO(const int, const TensorRank4 *);
