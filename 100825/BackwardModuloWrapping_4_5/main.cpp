#include<iostream>
#include<cmath>
int main() {

	// backward modulo wrapping

	// 1. base case - char - range [-128,127]? 
	// are chars just integrals?

	char c{ 127 }; // a. get char
	std::cout << "max c assignable: " << (int)c << " (expected: 127)\n"; // b. get size of char
	std::cout << "sizeof(c): " << sizeof(c) <<" (expected: 1 byte)\n"; // b. get size of char
	// b. calc range of char
	std::cout << "total char values (2^8): " << pow(2, 8) << "(expected: 2^8=256)\n"; 
	
	//char range[-128, 127]
	unsigned char c1{ 0 }; // rng [0,255]
	std::cout << "min unsigned c: " << (int)c1 << " (expected: 0)\n"; // b. get size of char
	c1 -= 1; // c1 -> 255

	std::cout << "c1-=1: " << (int)c1 << " (expected: 255)\n"; // b. get size of char
	c1 -= 100; // c1 -> 155
	std::cout << "c1-=1: " << (int)c1 << " (expected: 155)\n"; // b. get size of char
	









	return 0;
}