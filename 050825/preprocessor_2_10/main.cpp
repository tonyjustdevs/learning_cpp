#include<iostream>
#define TONY_CODE 42
//#define MATE_CODE 666


int get_code() {

#ifdef TONY_CODE
	std::cout << "Tonys Code [og]: " << TONY_CODE << "\n";
#endif // TONY_CODE

#ifndef MATE_CODE
	std::cout << "Mates Code [og: " << MATE_CODE << "\n";
#endif // MATE_CODE
	return 0;
} 