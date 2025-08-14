#include<iostream>

int main() {
	char a = 'a';

	std::cout << "a: " << a << "\n";
	std::cout << "int(a): " << (int)a <<"\n\n";
	
	char chr_intval= 69;
	std::cout << "chr_intval: " << chr_intval<< "(exp: e)\n";
	std::cout << "(char)chr_intval: " << (char)chr_intval<< "(exp: e)\n";
	std::cout << "(int)chr_intval: " << (int)chr_intval<< "(exp: 69)\n";

	return 0;
}