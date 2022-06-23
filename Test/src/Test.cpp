#include "NNFrame.h"

int main(int argc, char** argv) {
	NNFrame::Tensor<float, 3> t({ 2, 3, 4 });
	t.shape();
	//printf(shape.size());
	//printf(shape[0]);
	return 0;
}