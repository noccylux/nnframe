#include "tensor.h"


namespace NNFrame{

template<typename T>
Tensor<T>::Tensor(std::initializer_list<int> list) {
	data = new BasicTensor::Tensor<T, list.size()>(list);
	require_grad_ = true;
	std::printf(data->NumDimensions);
}

template<typename T>
Tensor<T>::Tensor(std::initializer_list<int> list, bool require_grad) {
	data = new BasicTensor::Tensor<T, list.size()>(list);
	require_grad_ = true;
	std::printf(data->NumDimensions);
}



} // namespcae NNFrame