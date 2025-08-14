#include<iostream>
#include<cstdint>

int main() {
	//std::int8_t myInt{ 69 };
	//std::cout << "<int8_t>myInt: " << myInt << "(exp: E)\n";
	//std::cout << "<int>myInt: " << static_cast<int>(myInt) << "(exp: 69)\n";

	std::cout << "Type in any integer value: " << "\n";
	
	int8_t input_ints{}; //int8_t is usually alias for signed char
	std::cin >> input_ints;
	std::cout << "You entered : " << input_ints << "\n";
	std::cout << "You entered : " << static_cast<int>(input_ints) << "\n";
	// cin took 69 as because '6' is 54 integral 
	// leaving '9' in input stream
	return 0;
}