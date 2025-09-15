#include <bitset>
#include <iostream>

// "rotl" stands for "rotate left"
//std::bitset<4> rotl(std::bitset<4> bits)
//{
//	// Your code here
//
//}

std::bitset<4> bitwise_shift_left(std::bitset<4> bity) {
	return (bity << 1);
}

std::bitset<4> bitwise_rotate_left_verbose(std::bitset<4> bity) {
	std::cout << "[in rl()] bity: " << bity;
	bool last_flag_on = bity.test(3); // get [prev_1st_bit] = test(0) ---> the value of first bit
	std::cout << "[in rl()] bity.test(3): " << bity.test(3)<<"\n";
	std::cout << "[in rl()] last_flag_on: " << last_flag_on << "\n";
	bity <<= 1; // do normal shift [x<<1]
	std::cout << "[in rl()] bity<<=1: " << bity << "\n";
	if (last_flag_on)
	{
		bity.set(0); // set position 0 on if [last_flag_on]: true
		std::cout << "last_flag_on: true, therefore bity.set(0) (first bit is turn on hurthurhurh).\n";
	}
	return bity;
}

std::bitset<4> bitwise_rotate_left(std::bitset<4> bity) {
	//int last_flag_on = bity.test(3);
	bool last_flag_on = bity.test(3);

	bity <<= 1; // bitwise shift left

	//if (last_flag_on == 1)
	if (last_flag_on)
	{
		bity.set(0); // set position 0 on if [last_flag_on]: true
		//std::cout << "last_flag_on: true, therefore bity.set(0) (1st bit turned on hurhurhurh).\n";
	}
	else {
		//std::cout << "last_flag_on: false, first bit left at [0]\n";
	}
	return bity;
}

int main()
{
	std::bitset<4> bits1{ 0b0001 }; // ---> 0010

	//do single shift 
	std::cout << "og: [" << bits1 << "]\n";
	std::cout << "sl: [ans: " << bitwise_rotate_left(bits1) << "] (exp: 0010)\n\n";
	
	//std::cout << rotl(bits1) << '\n';
	std::bitset<4> bits2{ 0b1001 }; // ---> 0011
	std::cout << "og2: [" <<bits2<< "]\n";
	std::cout << "sl2: [ans: " << bitwise_rotate_left(bits2) << "] (exp: 0011)\n";

	return 0;
}