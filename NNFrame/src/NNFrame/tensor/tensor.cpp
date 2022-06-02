#include "tensor.h"

namespace NNFrame{

template<typename T, int NumIndices_>
Tensor<T, NumIndices_>::Tensor(std::initializer_list<int> list) {
	data = new BasicTensor::Tensor<T, list.size()>(list);
	require_grad_ = true;
	dims = list.size();
	std::printf(data->NumDimensions);
}

template<typename T, int NumIndices_>
Tensor<T, NumIndices_>::Tensor(std::initializer_list<int> list, bool require_grad) {
	data = new BasicTensor::Tensor<T, list.size()>(list);
	require_grad_ = true;
	std::printf(data->NumDimensions);
}

template<typename T, int NumIndices_>
Tensor<T, NumIndices_>::~Tensor() {
	delete data;
	delete grad;
	printf("Delet Tensor\n");
}

template<typename T, int NumIndices_>
const TensorShape& Tensor<T, NumIndices_>::shape() {
	int* tensor_shape_ = new int[data.NumDimensions];
	for (int I_; I_ < data.NumDimensions; I_++) {
		tensor_shape_[I_] = data.dimension(I_);
	}
	Shape(data.NumDimensions, tensor_shape_);
	return Shape;
}


} // namespcae NNFrame