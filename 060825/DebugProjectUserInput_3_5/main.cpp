
#include<iostream>

//#define DEBUG_THINGS

int take_userinput() {
#ifdef DEBUG_THINGS
std::cerr << "Entered take_userinput()\n";
#endif // DEBUG
	
	int x{};// declare [input_variable]
	std::cout << "Type a number: " << "\n"; // ask user for [user_input]
	std::cin >> x; // assign [user_input] to [variable]
	return x;
}


int main() {
#ifdef DEBUG_THINGS
std::cerr <<"Entered main()\n";
#endif // DEBUG

	int x{ take_userinput() };// declare [input_variable]
	std::cerr << "main::x = " << x << "\n"; // ask user for [user_input]
	return 0;
}