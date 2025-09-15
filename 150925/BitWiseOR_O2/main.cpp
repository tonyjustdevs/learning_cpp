#include<iostream>
#include<bitset>
int main() {

	// create 2 bitsets 0101 & 0110
	std::bitset<4>a{ 0b0101 };
	std::bitset<4>b{ 0b0110 };
	std::bitset<4>d{ (a | b) };

	// apply Bitwise OR (|)
	std::cout << (std::bitset<4>{ 0b0101 } | std::bitset<4>{ 0b0110 }) << "\n";
	std::cout << (a | b)<<"\n";
	std::cout << d << "\n";
	std::cout << d.to_ulong()<<"\n";

	// output


	// add validation
	return 0;
}