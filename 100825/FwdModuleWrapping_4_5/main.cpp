#include<iostream>

int main() {

	unsigned short x{ 65535 };

	std::cout << "x: " << x << "\n";
	x += 1;
	std::cout << "x=x+1: " << x << "\n"; //0
	x += 1;
	std::cout << "x=x+2: " << x << "\n"; //1


	// Calculate Integer Overflow
	// 1. Forward Modulo Wrapping
	
	// 2. Forward Modulo Wrapping
	unsigned short y{ 65535 };
	y += 1;
	std::cout << "y: " << y << " (expected: 0 <- 65536/65536 rem is 0)\n";
	y += 65536;
	std::cout << "y+65536: " << y << " (expected: 0 <- (2*65536)/65536 rem is 0)\n";
	//std::cout << "y: " << y << " (expected: 0 <- 65536=65535+1 <- 65536/65536 rem is 0);
	return 0;
}