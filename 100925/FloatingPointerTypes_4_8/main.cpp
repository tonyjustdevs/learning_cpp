#include<iostream>
#include<limits>
int main() {
	// show bytes for float, double, long double

	std::cout << "float: " << sizeof(float) <<				" [IEE754 compliant: "<< std::numeric_limits<float>::is_iec559<<"]\n";
	std::cout << "double: " << sizeof(double) <<			" [IEE754 compliant: "<< std::numeric_limits<double>::is_iec559<<"]\n";
	std::cout << "long double: " << sizeof(long double) <<	" [IEE754 compliant: "<< std::numeric_limits<long double>::is_iec559 << "]\n";
	return 0;
}