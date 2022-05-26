#pragma once
#include "../core.h"
#include "basic_tensor.h"
#include <vector>
#include <memory>
#include <iostream>

namespace NNFrame{

using int16 = std::int16_t;
using int32 = std::int32_t;
using int64 = std::int64_t;

using float32 = float;
using float64 = double;

template<typename T>
class Tensor {
/*
* Based on Eigen matrix lib.
* 
*/
public:
  // Initialize
  //Tensor(typename T, );
  Tensor(std::initializer_list<int> list); // Initialize with list.
  Tensor(std::initializer_list<int> list, bool require_grad);
  ~Tensor();

public:
  
  //Tensor add(NNFrame::Tensor X);
  //Tensor mul(NNFrame::Tensor X);
  //Tensor operator+(const Tensor& A) const;
  //Tensor operator-(const Tensor& A) const;
  //Tensor operator*(const Tensor& A) const;
  //Tensor operator/(const Tensor& A) const;

  //void require_grad(bool require_grad);
	//Tensor copy();
  //Tensor reshape(bool inplace);
  //Tensor detach();
  //void backward();
  
  
  //int* shape(); // Return an array.
  //void int16();
  //void int32();
  //void int64();
  //void float32();
  //void float64();

  //void display();
  //ostream& ostream << (ostream & ostream, const Tensor & tensor);

private:
  void* data; // Point to BasicTensor::Tensor .
  void* grad; 
  bool require_grad_ = true;
  bool leaf_node;
};

//template<typename T>
//Tensor<T> zeros(std::initializer_list<int> list);

//template<typename T>
//Tensor<T> ones(std::initializer_list<int> list);

} // namespace NNFrame

