#pragma once
#include <iostream>
#include "core.h"
// Support int, int32_t, int64_t, uint16_t, uint32_t, uint64_t, float, double, long double, PrintInterface

class NNFRAME_API PrintInterface {
public:
	virtual char* getStr() = 0;
};

//void NNFRAME_API print();
void print() { std::cout << std::endl; };

//void NNFRAME_API print(const char* Str_);
void print(const char* Str_) {
	std::cout << Str_ << std::endl;
}

//void NNFRAME_API print(const PrintInterface& Object_);
void print(const PrintInterface& Object_) {

}

//void NNFRAME_API print(const PrintInterface& Object_, const char* end);
void print(const PrintInterface& Object_, const char* end) {
	
}

template<typename T>
void print(T Obj_) {
	std::cout << T << std::endl;
}