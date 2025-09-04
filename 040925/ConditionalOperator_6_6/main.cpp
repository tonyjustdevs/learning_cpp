#include<iostream>

int main() {
// initialise some bool var x

// use x in conditional opeator and initalise another variable y


	bool x{ false };

	int y{ x ? 69 : 420 };

	std::cout << "[x, y]: [" << x << ", " << y << "]\n";

	x = true;
	y= x ? 69 : 420 ;
	std::cout << "[x, y]: [" << x << ", "<<y<<"]\n";


	return 0;
}