#include<iostream>
#include<string>

void print_sv(std::string_view input_sv) {
	std::cout << "input_sv: " << input_sv << "\n";
}
int main() {

	print_sv("a string literal input");
	
	std::string a_str{ "a string object" };
	print_sv(a_str);

	std::string_view sv_obj1{ "a string_view object via string literal" };
	print_sv(sv_obj1); 

	std::cout << "sv_obj2{ a_str } next: \n";
	std::string_view sv_obj2{ a_str }; 

	print_sv(sv_obj2);
	return 0;
}