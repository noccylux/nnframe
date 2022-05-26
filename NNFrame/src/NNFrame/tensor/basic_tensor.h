#pragma once
#include "../../../thirdPart/eigen/Eigen/Eigen"
#include "../../../thirdPart/eigen/unsupported/Eigen/CXX11/Tensor"

namespace BasicTensor {

template<typename Scalar_, int NumIndices_, int Options_, typename IndexType_>
class Tensor : public Eigen::Tensor {}; // Package Eigen::Tensor.

}