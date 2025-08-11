#include<iostream>
#include<limits>
#include<iomanip>
int main() {
	std::cout << std::left;
	std::cout << std::setw(20) << "type:" << "true/false\n";
	//IEEE 754 compatible format
	std::cout << std::setw(20) << "float:"<<std::numeric_limits<float>::is_iec559 << "\n";
	std::cout <<std::setw(20)<< "double:" << std::numeric_limits<double>::is_iec559 << "\n";
	std::cout <<std::setw(20)<< "long double:" << std::numeric_limits<long double>::is_iec559<<"\n";
	return 0;
}
