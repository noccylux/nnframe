#pragma once
#include "../core.h"
#include "../tensor.h"

namespace NNFrame {
	NNFRAME_API class Module {
	/*
	 * Module interface.
	 */
	public:
		Module() {};
		~Module() {};
	public:
		virtual Tensor forward(Tensor& X) = 0;
		virtual Tensor backward(Tensor& X) = 0;
	};
}