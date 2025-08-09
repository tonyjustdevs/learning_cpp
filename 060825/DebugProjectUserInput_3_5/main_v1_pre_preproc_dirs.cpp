
#include<iostream>
	

int take_userinput() {
	std::cerr << "Entered take_userinput()\n";
	int x{};// declare [input_variable]
	std::cout << "Type a number: " << "\n"; // ask user for [user_input]
	std::cin >> x; // assign [user_input] to [variable]
	return x;
}


int main() {
std::cerr <<"Entered main()\n";
	int x{ take_userinput() };// declare [input_variable]
	std::cerr << "main::x = " << x << "\n"; // ask user for [user_input]

	return 0;
}