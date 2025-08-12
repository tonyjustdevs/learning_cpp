#include<iostream>
#include<limits>
#include<iomanip>
int main() {
	
	std::cout << std::fixed<<std::setprecision(0)<<"float: " << std::numeric_limits<float>::is_iec559 << "\n";
	std::cout << std::fixed<<std::setprecision(0)<<"double: " << std::numeric_limits<double>::is_iec559 << "\n";;
		std::cout << std::fixed << std::setprecision(0) << "double long: " << std::numeric_limits<double long>::is_iec559 << " (incorrect but compiler is lenient)\n";;
		std::cout << std::fixed<<std::setprecision(0) << "long double: " << std::numeric_limits<long double>::is_iec559 << "\n";;
	return 0;
}