#include<iostream>
#include<cstdint>
#include<cmath>

int main() {
	// how many bits does 16-bit int machine hold?
	std::cout << "16_bit_values: " << pow(2, 16)<< "\n";
	
	// calculate 16-bit range
	std::cout << "16_bit_int_rng: [" << -pow(2, 15) << "," << pow(2, 15) - 1 << "]\n";
	
	// is a short 16-bit? yes 2 bytes
	std::cout << "sizeof(short)" << sizeof(short) << "(bytes)\n";

	// Scenario 1: [TESTED OK PASSED]
	// - declare short @ max val: s {32767}
	// - s+=1
	// - print s ---> should be [-32768]

	short s{ 32767 };
	std::cout << "s: " << s << "(exp: 32767)\n";
	s += 1;
	std::cout << "s+1: "<<s<< "(exp: -32768)\n";

	std::int16_t i16{ 32767 };
	std::cout << "i16 : " << i16 << "(exp: 32767)\n";
	i16 += 1;
	std::cout << "i16 +1: " << i16 << "(exp: -32768)\n";

	// do int32bits
	// 2
	//int i{ INT_MAX};
	//int i{ pow(2,31) - 1 }; // ERROR: requires narrowing (dbl to int)
	
	int i{ static_cast<int> (pow(2,31) - 1)}; //2147483647
	std::cout << "i: " << i << "(exp: 2147483647)\n";
	i += 1;
	std::cout << "i+1: " << i << "(exp: -2147483648)\n";
	
	int i2{ (1 << 31) - 1 };  // Bit shifting - more precise
	std::cout << "i2: "<<i2<<"(exp: 2147483647)\n";
	i2 += 1;
	std::cout << "i2+1: " << i2 << "(exp: -2147483648)\n";

	int i3{ static_cast<int>((1u << 31) - 1) };  // safe, defined behavior
	std::cout << "i3: " << i3 << "(exp: 2147483647)\n";
	i3 += 1;
	std::cout << "i3+1: " << i3 << "(exp: -2147483648)\n";

	return 0;
}