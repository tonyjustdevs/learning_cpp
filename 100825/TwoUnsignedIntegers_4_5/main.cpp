#include<iostream>
#include<cmath>
#include<iomanip>

int main() {

	unsigned int x{ 2 };
	unsigned int y{ 3 };

	std::cout << "x: " << x << " (" << sizeof(x) << " bytes)" << "\n";
	std::cout << "y: " << y << " (" << sizeof(y) << " bytes)" << "\n";

	// calculate range
	std::cout << std::fixed << std::setprecision(0) << "total values: " << pow(2, 4 * 8) << " (" << sizeof(x) << " bytes)" << "\n";
	std::cout << std::fixed << std::setprecision(0) << "range: [0-" << pow(2, 4 * 8)-1 << "]\n";
	std::cout <<"x-y: " << x - y << "\n"; // OKAY 4294967295
	
	return 0;

}