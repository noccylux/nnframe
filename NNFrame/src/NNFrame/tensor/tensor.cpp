//#include "tensor.h"
//
//namespace NNFrame{
//
//template<typename T, int NumIndices_>
//NNFRAME_API 
//Tensor<T, NumIndices_>::Tensor(std::initializer_list<int> list) {
//	data = std::make_shared<BasicTensor::Tensor<T, NumIndices_>>(list);
//	require_grad_ = true;
//	std::printf(data->NumDimensions);
//}
//
//template<typename T, int NumIndices_>
//NNFRAME_API
//Tensor<T, NumIndices_>::Tensor(std::initializer_list<int> list, bool require_grad) {
//	data = std::make_shared<BasicTensor::Tensor<T, NumIndices_>>(list);
//	require_grad_ = true;
//	std::printf(data->NumDimensions);
//}
//
//template<typename T, int NumIndices_>
//NNFRAME_API
//Tensor<T, NumIndices_>::~Tensor() {
//	delete data;
//	delete grad;
//	printf("Delet Tensor\n");
//}
//
//template<typename T, int NumIndices_>
//NNFRAME_API
//const TensorShape& Tensor<T, NumIndices_>::shape() {
//	std::shared_ptr<int[NumIndices_]> tensor_shape_ = std::make_shared<int[NumIndices_]>;
//	for (int I_; I_ < NumIndices_; I_++) {
//		*tensor_shape_[I_] = data.dimension(I_);
//	}
//	Shape(data.NumDimensions, *tensor_shape_);
//	return Shape;
//}
//
//
//} // namespcae NNFrame