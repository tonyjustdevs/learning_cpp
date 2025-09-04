#include<iostream>
// apply postfix operator
int main() {
	int x{ 5 };
	int y{ x++ };
	// 1. make copy of x, then assign to y
	// 2. increment x and return x
	
	std::cout << "x y: " << x <<"," << y << " (eta: 6, 5)\n";
	return 0;
}