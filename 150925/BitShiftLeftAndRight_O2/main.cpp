#include<iostream>
#include<bitset>

int main() {
// create bitset 1100
	std::bitset<4>x{ 0b1100 };
	std::cout << "x{0b1100}: [" << x << "] (exp: 1100)\n";

	//shift right
	std::cout << "(x>>1): [" << (x >> 1) << "] (exp: 1100 ---> 0110)\n";

	//shift left 
	std::cout << "(x<<1): [" << (x << 1) << "] (exp: 1100 ---> 1000)\n";

	return 0;
}