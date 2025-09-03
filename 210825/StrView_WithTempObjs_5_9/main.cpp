#include<iostream>
#include<string>


// write fn that creates and return str_obj

std::string getName() {
	std::string name_str_obj{ "Iniesta Cules" };
	return name_str_obj; 
}
// recall all fns return a temporary object
// if you run getName() by itself
// - it returns the object, you can do assign it to a variable or copy it
// - it will be destroyed at end of the full expression

int main() {
	std::string_view sv{ getName() }; // UB:
	// - string_view grabs pointer + data from this object
	// - but the object is destoryed after end of expression
	// - pointer becomes dangling pointer, pointing at nothing.
	std::cout << "sv: " << sv << "(exp: UB)\n";
	
	std::string_view sv2{ "another temp string literal" }; // UB:
	std::cout << "sv2: " << sv2 << "(exp: UB)\n";


	std::string str{ getName() }; // this makes copy to str
	std::cout << "str: " << str<< "\n"; // ok

	return 0;
}