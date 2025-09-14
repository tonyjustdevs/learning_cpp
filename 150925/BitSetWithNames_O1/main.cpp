#include<iostream>
#include<bitset>

int main() {
	// create 8 integers for each bit in a bitset
	[[maybe_unused]] constexpr int isHungry{ 0 };
	[[maybe_unused]] constexpr int isSad{ 1 };
	[[maybe_unused]] constexpr int isMad{ 2 };
	[[maybe_unused]] constexpr int isHappy{ 3 };
	[[maybe_unused]] constexpr int isLaughing{ 4 };
	[[maybe_unused]] constexpr int isAsleep{ 5 };
	[[maybe_unused]] constexpr int isDead{ 6 };
	[[maybe_unused]] constexpr int isCring{ 7 };

	// create a bitset 0000'0101
	std::bitset<8> mybit{ 0b0000'0101 };

	std::cout <<"bits{0b00000101}: " << mybit << " (exp: 00000101)"<<"\n";
	mybit.set(isHappy);			// 3 -> 0000'[0]101 ---> 0000'[1]101
	std::cout << ".set(isHappy): " << mybit << " (exp: 00001101)" << "\n";
	mybit.flip(isLaughing);		// 4 -> 000[0]'1101 ---> 000[1]'1101
	std::cout << ".flip(isLaughing): " << mybit << " (exp: 00011101)" << "\n";
	mybit.reset(isLaughing);	// 4 -> 000[1]'1101	---> 000[0]'1101
	std::cout << ".reset(isLaughing): " << mybit << " (exp: 00001101)" << "\n";
	return 0;
}