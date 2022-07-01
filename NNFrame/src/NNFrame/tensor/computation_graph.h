#pragma once

#include "basic_tensor.h"
# include "../tensor/tensor.h"
#include <vector>

namespace NNFrame {
int ADD = 1;
int MUL = 2;
} // namespace NNFrame

namespace NNFrame{
namespace ComputGraph {

struct GraphNode {
	int operate;

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

