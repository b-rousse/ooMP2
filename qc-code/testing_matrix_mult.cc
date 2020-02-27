#include <iostream>
#include <Eigen/Dense>
int main()
{
  Eigen::MatrixXd mat1 = Eigen::MatrixXd::Zero(2,2);
  mat1 << 1, 2, 3, 4;
  Eigen::VectorXd vec1 = Eigen::VectorXd::Zero(4);
  vec1(0)=1; vec1(1)=2; vec1(2)=3; vec1(3)=4;
  Eigen::MatrixXd mat2 = Eigen::MatrixXd::Zero(2,2);
  mat2 << 5, 6, 7, 9;
  Eigen::VectorXd vec2 = Eigen::VectorXd::Zero(4);
  vec2(0)=5; vec2(1)=6; vec2(2)=7; vec2(3)=9;

  std::cout << "sum mat1 * mat2 adjoint: " << std::endl<< (mat1.adjoint() * mat2).sum() << std::endl;
  std::cout << "sum mat1 adjoint * mat2: " << std::endl<< (mat1 * mat2.adjoint()).sum() << std::endl;
  std::cout << "sum mat1 elementwise product with mat2 : " << std::endl<< mat1.cwiseProduct(mat2).sum() << std::endl;
  std::cout << "sum mat2 elementwise product with mat1 : " << std::endl<< mat2.cwiseProduct(mat1).sum() << std::endl;
  std::cout << "vec1 adjoint * vec2: " << std::endl<< vec1.adjoint() * vec2<< std::endl;

  return 0;
}