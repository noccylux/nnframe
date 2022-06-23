#pragma once
#include "../core.h"
#include "../tensor/tensor.h"

namespace NNFrame{
namespace nn {

class NNFRAME_API Linear {
public:
	Linear();
public:

private:
	int in_feature{};
	int out_feature{};
	
};

} // namespace nn
} // namespace NNFrame