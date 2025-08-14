#include<iostream>
//Write program 
// - user is asked to enter sgl char. 
// - Print value chr & its ASCII code, 
// - using [static_cast].

int main() {
	
	// create space in memory for char
	char input_c{};
	std::cout << "Enter a single alphanumeric character: " << "\n";
	std::cin >> input_c;
	std::cout << "You entered: '" << input_c << "'\n";
	std::cout << "ASCII: '" << static_cast<int>(input_c) << "'\n";



	return 0;
}