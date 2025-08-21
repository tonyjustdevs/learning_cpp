#include<iostream>
#include<string>
// initialise with a returned value from a fn
// this function is a std::string

std::string cool_function() {
	std::string cool_name{ "iniesta" };
	return cool_name;
}

int main() {
	std::string_view sv{ cool_function() };
	std::cout << "sv: " << sv << "\n";
	//gsl::span or std::string_view created from a temporary will be invalid when the temporary is invalidated (gsl.view).
	//The pointer is dangling because it points at a temporary instance which was destroyed.
}