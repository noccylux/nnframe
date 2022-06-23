#pragma once
#include <iostream>
#include "../core.h"

namespace NNFrame {

struct NNFRAME_API TensorShape
{
	TensorShape() {
		this->Dims = 0;
		this->Dims = nullptr;
	}
	TensorShape(int NumDimensions_, int64_t* Dims_) {
		this->NumDimensions = NumDimensions_;
		this->Dims = Dims_;
	}
	~TensorShape() {
		if (this->Dims != nullptr) { delete Dims; }
	}

	int NumDimensions = 0;
	int64_t* Dims;

	const int64_t& operator[](int I_) const {
		return Dims[I_];
	};
	void print() {
		for (int i = 0; i < NumDimensions; i++) {
			std::cout << Dims[i] << " ";
		}
		std::cout << std::endl;
	}
};

template<int N>
std::shared_ptr<NNFrame::TensorShape> NNFRAME_API ArrayToTensorShape(std::array<int64_t, N>& Array) {
	std::shared_ptr<NNFrame::TensorShape> tensorShape = std::make_shared<NNFrame::TensorShape>();
	tensorShape->NumDimensions = N;
	tensorShape->Dims = new int64_t[N];
	for (int i = 0; i < N; i++) {
		tensorShape->Dims = reinterpret_cast<int64_t>(Array[i]);
	}
	return tensorShape;
}

} // namespace NNFrame

