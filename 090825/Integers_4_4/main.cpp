#include<iostream>
#include<cmath>
#include<climits>
#include<iomanip>
int main() {

// calculate ranges for 
// short ss
// int i
// long l 
// long long ll

	char c;
	short s;
	int i;
	long l;
	long long ll;
	
	std::cout << "Number of bits in one byte: " << CHAR_BIT << "\n";
	std::cout << std::left;
	std::cout << std::setw(16) << "c-8-bit: " << sizeof(c) << " bytes\n";
	std::cout << std::setw(16) << "s-16-bit: " << sizeof(s) << " bytes\n";
	std::cout << std::setw(16) << "i-32-bit: " << sizeof(i) << " bytes\n";
	std::cout << std::setw(16) << "l-32-bit: " << sizeof(l) << " bytes\n";
	std::cout << std::setw(16) << "ll-64-bit: " << sizeof(ll) << " bytes\n\n";

	
	std::cout << "Min and Max Values (range)\n";
	//std::cout << std::setw(16) << "short[min]: ["<<-pow(2,16)/2<<","<<+pow(2, 16)/2-1<<"]\n";
	std::cout << std::setw(1) << "c[8bit]: [" << -pow(2, (sizeof(c) * CHAR_BIT-1))  << "," << +pow(2, (CHAR_BIT * sizeof(c))-1)  - 1 << "]\n";
	std::cout << std::setw(1) << "s[16bit]: [" << -pow(2, (sizeof(s) * CHAR_BIT - 1))  << "," << +pow(2, (CHAR_BIT * sizeof(s))-1)  - 1 << "]\n";
	std::cout << std::setw(1) << "i[32bit]: [" << -pow(2, (sizeof(i) * CHAR_BIT - 1))  << "," << +pow(2, (CHAR_BIT * sizeof(i))-1)  - 1 << "]\n";
	std::cout << std::setw(1) << "l[32bit]: [" << -pow(2, (sizeof(l) * CHAR_BIT - 1))  << "," << +pow(2, (CHAR_BIT * sizeof(l))-1)  - 1 << "]\n";
	std::cout << std::setw(1) << "ll[64bit]: [" << -pow(2, (sizeof(ll) * CHAR_BIT - 1))  << "," << +pow(2, (CHAR_BIT * sizeof(ll))-1)  - 1 << "]\n";
	return 0;

}