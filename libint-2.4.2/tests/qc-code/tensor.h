// standard C++ headers
#pragma once
#include <cmath>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <chrono>

// Eigen matrix algebra library
#include <Eigen/Dense>
#include <Eigen/Eigenvalues>

/*class TensorRank4 {

public:
  TensorRank4(size_t dim0, size_t dim1, size_t dim2, size_t dim3) {
    dims_[0] = dim0;
    dims_[1] = dim1;
    dims_[2] = dim2;
    dims_[3] = dim3;
    data_.resize(dims_[0] * dims_[1] * dims_[2] * dims_[3]);
  }

  double& operator ()(size_t i, size_t j, size_t k, size_t l) {
    return data_(index(i, j, k, l));
  }

  const double& operator ()(size_t i, size_t j, size_t k, size_t l) const {
    return data_(index(i, j, k, l));
  }

  void zero() { data_.setZero();} // This will make all the values in the vector 0.
  void resize(size_t new_size) { data_.resize(new_size);}

private:

  size_t index(size_t i, size_t j, size_t k, size_t l) const {
    return i * dims_[3] * dims_[2] * dims_[1]
         + j * dims_[3] * dims_[2]
         + k * dims_[3]
         + l;
  }
  size_t dims_[4];
  Eigen::VectorXd data_;
};*/

class TensorRank4 {
public:
  TensorRank4(size_t dim0, size_t dim1, size_t dim2, size_t dim3) {
    dims_[0] = dim0;
    dims_[1] = dim1;
    dims_[2] = dim2;
    dims_[3] = dim3;
    data_.resize(dims_[0] * dims_[1] * dims_[2] * dims_[3]);
  }
  double& operator ()(size_t i, size_t j, size_t k, size_t l) {
    return data_(index(i, j, k, l));
  }
  const double& operator ()(size_t i, size_t j, size_t k, size_t l) const {
    return data_(index(i, j, k, l));
  }

  void setZero() { data_.setZero();}
  void clear() {
       data_.resize(0);
       std::fill(dims_, dims_ + 4, 0); // It may not be std::fill but you get the posize_t.
  }
private:
  size_t index(size_t i, size_t j, size_t k, size_t l) const {
    return i * dims_[3] * dims_[2] * dims_[1]
         + j * dims_[3] * dims_[2]
         + k * dims_[3]
         + l;
  }
  size_t dims_[4];
  Eigen::VectorXd data_;
};

/*
class TensorRank3 {
public:
  TensorRank3(size_t dim0, size_t dim1, size_t dim2) {
    dims_[0] = dim0;
    dims_[1] = dim1;
    dims_[2] = dim2;
    data_.resize(dims_[0] * dims_[1] * dims_[2]);
  }
  double& operator ()(size_t i, size_t j, size_t k) {
    return data_(index(i, j, k));
  }
  const double& operator ()(size_t i, size_t j, size_t k) const {
    return data_(index(i, j, k));
  }

  void setZero() { data_.setZero();}
  void clear() {
       data_.resize(0);
       std::fill(dims_, dims_ + 3, 0); // It may not be std::fill but you get the point.
  }
private:
  size_t index(size_t i, size_t j, size_t k, size_t l) const {
    return i * dims_[2] * dims_[1]
         + j * dims_[2]
         + k;
  }
  size_t dims_[3];
  Eigen::VectorXd data_;
};*/

class TensorRank5 {

public:
  TensorRank5(size_t dim0, size_t dim1, size_t dim2, size_t dim3, size_t dim4) {
    dims_[0] = dim0;
    dims_[1] = dim1;
    dims_[2] = dim2;
    dims_[3] = dim3;
    dims_[4] = dim4;
    data_.resize(
        dims_[0] * dims_[1] * dims_[2] * dims_[3] * dims_[4]);
  }

  double& operator ()(size_t i, size_t j, size_t k, size_t l, size_t m) {
    return data_(index(i, j, k, l, m));
  }

  const double& operator ()(size_t i, size_t j, size_t k, size_t l, size_t m) const {
    return data_(index(i, j, k, l, m));
  }

private:

  size_t index(size_t i, size_t j, size_t k, size_t l, size_t m) const {
    return i * dims_[4] * dims_[3] * dims_[2] * dims_[1]
         + j * dims_[4] * dims_[3] * dims_[2]
         + k * dims_[4] * dims_[3]
         + l * dims_[4]
         + m;
  }
  size_t dims_[5];
  Eigen::VectorXd data_;
};

class TensorRank6 {

public:
  TensorRank6(size_t dim0, size_t dim1, size_t dim2, size_t dim3, size_t dim4, size_t dim5) {
    dims_[0] = dim0;
    dims_[1] = dim1;
    dims_[2] = dim2;
    dims_[3] = dim3;
    dims_[4] = dim4;
    dims_[5] = dim5;
    data_.resize(
        dims_[0] * dims_[1] * dims_[2] * dims_[3] * dims_[4]
            * dims_[5]);
  }

  double& operator ()(size_t i, size_t j, size_t k, size_t l, size_t m, size_t n) {
    return data_(index(i, j, k, l, m, n));
  }

  const double& operator ()(size_t i, size_t j, size_t k, size_t l, size_t m, size_t n) const {
    return data_(index(i, j, k, l, m, n));
  }

  void setZero() { data_.setZero();}
  void clear() {
       data_.resize(0);
       std::fill(dims_, dims_ + 6, 0); // It may not be std::fill but you get the point.
  }
private:

  size_t index(size_t i, size_t j, size_t k, size_t l, size_t m, size_t n) const {
    return i * dims_[5] * dims_[4] * dims_[3] * dims_[2] * dims_[1]
         + j * dims_[5] * dims_[4] * dims_[3] * dims_[2]
         + k * dims_[5] * dims_[4] * dims_[3]
         + l * dims_[5] * dims_[4]
         + m * dims_[5]
         + n;
  }
  size_t dims_[6];
  Eigen::VectorXd data_;
};

