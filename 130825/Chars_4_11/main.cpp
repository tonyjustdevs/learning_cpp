#include<iostream>

int main() {
	char a = 'a';

	std::cout << "a: " << a << "\n";
	std::cout << "int(a): " << (int)a <<"\n\n";
	

	char chr_intvalue = 69;
	std::cout << "chr_intvalue: " << chr_intvalue << "(exp: e)\n";
	std::cout << "(char)chr_intvalue: " << (char)chr_intvalue << "(exp: e)\n";
	std::cout << "(int)chr_intvalue: " << (int)chr_intvalue << "(exp: 69)\n";

	return 0;
}