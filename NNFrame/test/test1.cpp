#include "../src/NNFrame.h"
#include <iostream>
#include <array>


int main() {
	
	NNFrame::Tensor my_tensor(2, 3, 4); 
	//std::shared_ptr<NNFrame::TensorShape> shape = my_tensor.shape();
	//shape->print();
	//std::cout << &my_tensor.data << std::endl;

	NNFrame::Log::Init();
	CORE_WARN("Initiaized Log!");
	NF_INFO("Hello World!");
	return 0;
}