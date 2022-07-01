#pragma once
#include "../core.h"
#include "Tensor"
#include "tensorShape.h"
#include <vector>
#include <memory>
#include <array>
#include <variant>
#include <iostream>

namespace NNFrame{

template<int NumIndices>
using TemplateTensor = Eigen::Tensor<float, NumIndices>;
using BasicTensor = std::variant<Eigen::Tensor<float, 1>, Eigen::Tensor<float, 2>, Eigen::Tensor<float, 3>,
                                 Eigen::Tensor<float, 4>, Eigen::Tensor<float, 5>, Eigen::Tensor<float, 6>>;

class Tensor {
/*
* Based on Eigen matrix lib.
* Use float type.
*/
public: // 
  BasicTensor data; // Point to Eigen::Tensor
  //BasicTensor grad;
  std::shared_ptr<NNFrame::TensorShape> shape_;
  int NumIndices = 0;
  bool require_grad_ = true;
  bool leaf_node = true;

public:
  // Initialize
  //Tensor(typename T, );

  //template<typename T, int NumIndices_>
  //NNFRAME_API init_grad {
  //  grad = std::make_shared<Eigen::Tensor<T, NumIndices_>>(list);
  //  
  //}
  
  template<typename... T>
  Tensor(T... dims) {
    const int n = sizeof...(dims);
    std::array<int64_t, n> dims_{};
    this->NumIndices = n;
    
    int i = 0;
    for (int x : { dims... }) {
      dims_[i] = x;
      std::cout << dims_[i] << " ";
      i++;
    }
    std::cout << std::endl;
    const std::array Dim = dims_;
    data = Eigen::Tensor<float, n>(Dim);
    //grad = Eigen::Tensor<float, n>(Dim);
  }

  NNFRAME_API ~Tensor() {
    printf("Delet Tensor\n");
  }
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
  
  
  NNFRAME_API 
  std::shared_ptr<TensorShape> shape() {
    return shape_;
  }

  //void int16();
  //void int32();
  //void int64();
  //void float32();
  //void float64();

  //void display();
  friend std::ostream&& operator<< (std::ostream & ostream, const Tensor & tensor){
    ostream << "Shape : [";
    for (int i = 0; i < Tensor::NumIndices; i++) {

    }
  }


};

//template<typename T>
//Tensor<T> zeros(std::initializer_list<int> list);

//template<typename T>
//Tensor<T> ones(std::initializer_list<int> list);

} // namespace NNFrame

