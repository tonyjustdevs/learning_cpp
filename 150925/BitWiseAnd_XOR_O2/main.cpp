#include<iostream>
#include<bitset>

int main() {
	// Bitwise AND &
	// 0101
	// 0110
	// 0100
	std::cout << "(AND) (0101&0101): [";
	std::cout << (std::bitset<4>{0b0101}&std::bitset<4>{0b0110}) << "] (0100)\n\n";
	
	std::cout << "(AND) (0001&0011&0111): [";
	std::cout << (std::bitset<4>{0b0001} 
					& std::bitset<4>{0b0011}
					& std::bitset<4>{0b0111}) 
			  << "] (0001)\n";

	//   0110 XOR
	//   0011 XOR
	// = 0101
	std::cout << "(XOR) (0110^0011): ["; // opposites only
	std::cout << (std::bitset<4>{0b0110}
				 ^std::bitset<4>{0b0011}) << "] (0101)\n\n";
	
	//	 0001 XOR
	//	 0011 XOR
	//	 0111      NOTE: even 1s -> 0, odd 1s -> 1
	// = 0101
	std::cout << "(XOR) (0001^0011^0111): [" <<
		( std::bitset<4>{0b0001}
		^ std::bitset<4>{0b0011}
		^ std::bitset<4>{0b0111}) << "] (0101)\n";

	return 0;
}