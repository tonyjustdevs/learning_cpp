#include<iostream>
#include<string>
// does a fn string_param acccept string_view?

void printS(std::string str) {
	std::cout << "str: " << str << "\n";
}
int main() {
	// create string_view
	std::string a_str{ "mate" };
	std::string_view a_view{a_str };
	
	printS(std::string(a_view)); // explicity convert str_view to str
	printS(a_str); 

	//printS(a_view); 
	// - 'void printS(std::string)': cannot convert argument 1 from 'std::string_view' to 'std::string'
	// - or //compiler error: accept 'str' only
	return 0;
}