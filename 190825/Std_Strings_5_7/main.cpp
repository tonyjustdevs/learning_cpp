#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>

int main() {
	std::string name{ "cat" };
	std::cout << "name: " << name << "\n";
	std::cout << "sizeof(cat) : " << sizeof(name) << "\n";
	name = "tiger";
	std::cout << "name: " << name << "\n";
	std::cout << "sizeof(tiger) : " << sizeof(name) << "\n";
	return 0;
}