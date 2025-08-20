#include<iostream>
#include<string>
// does string_view param accept string arg?

void printSV(std::string_view input_sv) {
	std::cout << "input_sv: " << input_sv << "\n";
}

int main() {
	std::string a_str{ "mate" };
	printSV(a_str);
	return 0;
}