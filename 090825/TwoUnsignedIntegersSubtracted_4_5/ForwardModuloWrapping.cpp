#include<iostream>
#include<cmath>
#include"ModuloWrappers.h"

void forward_modulo_wrapping() {
	// 16 bits  (2 bytes)
	// std::cout << "2^16 = " << pow(2, 16); //2^16 = 65536

	unsigned int a{ 65535 };

	std::cout << "a = " << a <<"\n";
}