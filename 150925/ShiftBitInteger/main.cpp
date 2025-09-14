#include<iostream>
#include<bitset>
#include<cmath>
#include<iomanip>

int main() {
// create integer
	int unsigned x{ 0b0100 };
	std::cout << "x{0b0100}: [" << x << "] (exp: 4)\n";

// bit shift left 1 & assign back
	x = x << 1;
	std::cout << "x=x<<1: [" << x << "] (exp: 8)\n";

	// bit shift left 1 & assign back
	x = x << 1;

	std::bitset<8>x8{ x };
	std::bitset<32>x32{x};

	std::cout << "x8: [" << x8 << "] (exp: 00010000)\n";
	std::cout<< "x32: ["<< x32 << "] (exp: 0.....010000)\n";

	std::bitset<8>x8_255{255};
	std::cout << "x8_255: [" << x8_255 << "] (exp: 11111111)\n";

	std::bitset<8>x8_256{ 256 };
	std::cout << "x8_256: [" << x8_256 << "] (exp: 00000000)\n";

	std::bitset<8>x8_257{ 257 };
	std::cout << "x8_257: [" << x8_257 << "] (exp: 00000001)\n";


	std::cout << std::setprecision(12);
	std::cout << "bits_32_total : [" << pow(2, 32) << "] (exp: 4,294,967,296)\n";

	std::bitset<32>x32_max{ 4294967295 };
	//std::bitset<32>x32_max{ pow(2, 32)-1 }; [error Element '1': conversion 'double' to 'unsigned __int64' req a narrowing conv]
	std::cout << "x32_max: [" << x32_max << "] (exp: all 1s baby!)\n";

	uint32_t xu32_max{ std::numeric_limits<uint32_t>::max() };
	uint32_t xu32_overflow = xu32_max + 1;
	std::bitset<32>xub32_max{ xu32_max };
	std::bitset<32>xub32_overflow{ xu32_overflow };
	std::cout << "xub32_max: [" << xub32_max << "] (exp: all 1s baby!)\n";
	std::cout << "xub32_overflow: [" << xub32_overflow << "] (exp: 0s!!)\n";

	//std::bitset<32>x32_int_overflow{ x32_max + 1 };
	//std::cout << "x32_int_overflow: [" << x32_int_overflow << "] (exp: all 0s)\n";
	//std::bitset<32>x32_int_overflow1{ x32_int_overflow+1 };
	//std::cout << "x32_int_overflow: [" << x32_int_overflow << "] (exp: all 0s)\n";
	// output
	return 0;
}