#include<iostream>
// Goal:
// - Convert 'char' to 'int'
// - Warning Level 4 + 'Warning as Errors' Enabled

void print_ascii_value(int letter) {
	std::cout << "letter: " << letter << "\n";
}
int main() {
	char some_char{ 't' };
	std::cout<< "letter: " <<some_char<<"\n";
	print_ascii_value(static_cast<int>((some_char)));

	
}