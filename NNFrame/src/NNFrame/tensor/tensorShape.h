#pragma once
#include <iostream>
struct TensorShape
{
	TensorShape(int NumDimensions_, int* Dims_) {
		this->NumDimensions = NumDimensions_;
		this->Dims = Dims_;
	}
	~TensorShape() {
		delete Dims;
	}
	int NumDimensions = 0;
	int* Dims;
	const int& operator[](int I_) const {
		return Dims[I_];
	};
	void print() {
		for (int i = 0; i < NumDimensions; i++) {
			std::cout << Dims[i] << " ";
		}
		std::cout << std::endl;
	}
};

