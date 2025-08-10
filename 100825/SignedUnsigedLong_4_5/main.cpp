#include<iostream>
#include<cmath>
#include<iomanip>
int main() {
	signed long l1{ -1 };
	unsigned long l2{ 1 };

	std::cout << "sizeof(l1):" << sizeof(l1) << " (bytes)\n"; // 4 bytes
	
	std::cout << std::fixed << std::setprecision(0) << "values" << pow(2, 8 * sizeof(l1)) << " (bytes)\n"; // 4 bytes
	
	std::cout << std::fixed<<std::setprecision(0)<<"l1+l2: " << l1+l2 << " (exp: "<< pow(2, 8 * sizeof(l1)) <<")\n";

	
	


	// add different signs but same rank types
	// the signed becomes unsigned
	//std::cout << "l1(-1) + l2(1)" << l1 + l2; //l1(-1)-> wrap around l

	// long values
	return 0;
}