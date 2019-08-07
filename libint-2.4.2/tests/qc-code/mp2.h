#include "tensor.h"

typedef Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> MatrixCD; //custom double
typedef Eigen::Matrix<int, Eigen::Dynamic, Eigen::Dynamic, Eigen::RowMajor> MatrixCI; //custom integer

double RunMP2(const TensorRank4 *, const Eigen::MatrixXd *, const int, const int, const Eigen::VectorXd *);