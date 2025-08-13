#include<iostream>

int main() {
	//int{ 5.5 }; //error:conv 'double' to 'int' requires a narrowing conversion

	double y{ 5 }; //disable 'warnings as errors
	std::cout << "dbl y{5}: " << y << "\n";
	std::cout << "sizeof(y): " << sizeof(y) << "\n";
	return 0;
}