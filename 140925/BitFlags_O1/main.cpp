#include<iostream>
#include<bitset>

int main() {
	std::bitset<8> mybitset1{}; // 8 bits ---> 8 flags available
	std::bitset<8> mybitset2{0b0000'0101};
	std::cout << mybitset1.to_string()<<'\n';
	std::cout << mybitset2.to_string() << '\n';

	std::cout << mybitset2.set(3);
	std::cout << ".set(3): [" << mybitset2.to_string() << "] (exp: 00001101)\n";
	
	std::cout << mybitset2.flip(4);
	std::cout << ".flip(4): [" << mybitset2.to_string() << "] (exp: 00011101)\n";
	
	std::cout << mybitset2.reset(4);
	std::cout << ".reset(4): [" << mybitset2.to_string() << "] (exp: 00001101)\n";

	std::cout << "all bits: [" << mybitset2 << "] (exp: 00001101)\n";
	std::cout << ".test(3) or [bit 3]: [" << mybitset2.test(3) << "] (exp: 1)\n";
	std::cout << ".test(4) or [bit 4]: ["<< mybitset2.test(4) << "] (exp: 0)\n";

	return 0;

}

// 76543210  Bit position
// 00000101  Bit sequence
// Position 0 and 2 are value 1, rest at 0

// biset has 4 key member functions 
// test()	: test wheter bit is 0 or 1
// set()	: assign bit value ---> 1
// reset()	: assign bit value ---> 0
// flip()	: flip the value (0->1, or 1->0)