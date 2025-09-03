#include<iostream>

int main () {
// add two const exp integers
	constexpr int a{ 7 };
	constexpr int b{ 4 };
// divide both with static cast
	std::cout << "a/b:" << a/b << " (no static_cast())\n";
	std::cout << "a/b:" << static_cast<float>(a)/ static_cast<float>(b) << " (with static_cast<float>)\n";;
// validate output is fp
	return 0;
// note:
// - if either operand is a floating point number, 
// - the result will be floating point division, not integer division.
}