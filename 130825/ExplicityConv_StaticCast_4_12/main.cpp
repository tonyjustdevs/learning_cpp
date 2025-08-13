#include<iostream>

// Goal: 
// - Explicit convert type double to integer
// - Without turning off existing warnings
// - Enabled Warnings: Level 4 + "Warnings as Errors" Enabled 

void printInt(int a) {
	std::cout << "a: " << a << "\n";
}
int main() {
	//printInt(5.5); // ERROR 'argument': conv 'double' to 'int', possible loss of data
	
	printInt(static_cast<int>(5.5));
	
	return 0;
}