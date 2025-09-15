#include<iostream>
#include<bitset>

int main() {
	std::bitset<4> a{ 0b0100 }; // 1. create 4-bit 0100
	std::bitset<8> b{ 0b0100 }; // 2. create 8-bit 0100

	std::cout << "a: [" << a << "] (0100)\n";
	std::cout << "b: [" << b << "] (00000100)\n";

	// 3. output & validate: bits, values
	std::cout << "a.to_ulong: [" << a.to_ulong() << "] (4)\n";
	std::cout << "b.to_ulong: [" << b.to_ulong() << "] (4)\n";

	// 4. apply reassign 4bit & 8bit ~ (NOT)
	a = ~a;
	b = ~b;

	std::cout << "~a: [" << a << "] (1011)\n";
	std::cout << "~b: [" << b << "] (11111011)\n";
	std::cout << "~a.to_ulong: [" << a.to_ulong() << "] (11)\n";
	std::cout << "~b.to_ulong: [" << b.to_ulong() << "] (251)\n";

	// 5. output & validate
	return 0;
}