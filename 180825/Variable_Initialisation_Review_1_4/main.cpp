#include<iostream>

int main() {
	int num1 = 6.9 ;
	int num2 ( 6.9 );
	//int num3 { 6.9 };

	std::cout << "num1: " << num1 << "\n";
	std::cout << "num2: " << num2 << "\n";
	//std::cout << "num3: " << num3 << "\n";

	// narrowing allowed at level 1 for num1 and num2
	// num3: Compiler Warning (level 2) C4244 rightly so
	return 0;
}