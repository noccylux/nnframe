#pragma once
#include <iostream>
// Support int, int32_t, int64_t, uint16_t, uint32_t, uint64_t, float, double, long double, PrintInterface
class PrintInterface {
public:
	virtual char* getStr() = 0;
};

void print() { std::cout << std::endl; };



void print(const char* Str_) {
	std::cout << Str_ << std::endl;
}

void print(const PrintInterface& Object_) {

}

void print(const PrintInterface& Object_, const char* end) {
	
}
