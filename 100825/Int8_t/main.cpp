#include<iostream>

int main() {
	std::int8_t x{ 65 };
	std::int8_t y{ 42 };
	std::cout <<"x_int8_t{65} ---> "<< x << "\n"; //'A' printed, not 65
	std::cout <<"y_int8_t{42} ---> "<< y << "\n"; //'A' printed, not 65


	std::uint8_t x2{ 65 };
	std::uint8_t y2{ 42 };
	std::cout << "x_uint8_t{65} ---> " << x2 << "\n"; //'A' printed, not 65
	std::cout << "y_uint8_t{42} ---> " << y2 << "\n"; //'A' printed, not 65


	return 0;
}