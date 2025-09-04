#include<iostream>

int main() {
	//apply prefix operator

	int a{ 5 };
	int b{ ++a };
	
	std::cout << "a,b: "<<a<<","<<b<<" (exp: 6,6)\n";

	// 1. increment a then return a
	// 2. assign to b, return b
	return 0;
}