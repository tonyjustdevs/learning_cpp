#include<iostream>
#include<cmath>
#include<iomanip>
int main() {
	int a{ -1 }; // recall int: [-2e-9,2e9]

	std::cout << "int a: " << a << "(exp: 1)\n";
	std::cout << 
		std::scientific <<
		std::setprecision(1) <<
		"<dbl>u_int a: " << static_cast<double>(static_cast<unsigned int>(a)) << "(exp: 4.3e9)\n";
	// scientific only works on floating point types if we want to print fancily.
	// need to convert int to double zzz.
	return 0;
}