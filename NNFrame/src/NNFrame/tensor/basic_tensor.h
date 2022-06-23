#pragma once
#include <memory>
#include "../../../thirdPart/eigen/Eigen/Eigen"
#include "../../../thirdPart/eigen/unsupported/Eigen/CXX11/Tensor"

namespace BasicTensor {



template<typename Scalar_, int NumIndices_>
class Tensor : public Eigen::Tensor<Scalar_, NumIndices_> {}; // Package Eigen::Tensor.

//class Tensor {
//private:
//	std::shared_ptr<>
//public:
//};

}