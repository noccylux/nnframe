#pragma once

#include "basic_tensor.h"
# include "../tensor/tensor.h"
#include <vector>

namespace NNFrame {
NNFrame::int16 ADD = 1;
NNFrame::int16 MUL = 2;
} // namespace NNFrame

namespace NNFrame{
namespace ComputGraph {

struct GraphNode {
	NNFrame::int16 operate;

	// Point to BasicTensor::Tensor .
	std::vector<void*> previous_Nodes;
	std::vector<void*> back_nodes;
};

class ComputationGraph
{
public:
	ComputationGraph();

public:

private:


};

} // namespace ComputGraph

} // namespace NNFrame

