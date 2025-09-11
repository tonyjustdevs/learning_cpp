#include<iostream>
#include<iomanip>

int main() {
	double dbl{ 123456789.987654321 };
	std::cout << std::setprecision(17);


	std::cout << "123456789.987654321: " << dbl;

	return 0;
}