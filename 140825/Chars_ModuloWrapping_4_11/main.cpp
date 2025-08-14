#include<iostream>
#include<cmath>
#include<iomanip>

int main() {
	int s_num{ -1 };
	unsigned int u_num = static_cast<unsigned int>(s_num);
	
	std::cout << "s_num: " << s_num << " (exp: 2)\n";
	std::cout << "u_num: " << u_num << " (exp: -2bio)\n";
	std::cout << "sizeof(u_num): " << sizeof(u_num) << "(exp: 4bytes)\n";
	std::cout << std::fixed<<std::setprecision(2)<<
		"u_num_vals((2^32)-1): " << pow(2,32)-1 << "(exp: 4.2bio)\n";
	return 0;
}