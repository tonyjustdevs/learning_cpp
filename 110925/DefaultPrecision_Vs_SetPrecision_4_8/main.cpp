#include<iostream>
#include<iomanip>

int main() {
	std::cout << std::setprecision(17);
	std::cout << "std::setprecision(17): we print to 17 digits!\n";
	std::cout << "float: "<<3.33333333333333333333333333333333333333f << " (3.33333333333333333333333333333333333333f aka float)\n";
	std::cout << "double: "<<3.33333333333333333333333333333333333333  <<" (3.33333333333333333333333333333333333333 aka double)\n";
	std::cout << "std::setprecision(17): doesnt mean we're accurate to 17 digits!\n";
	std::cout << "Notice float is less precise and more error prone!!\n";
	return 0;
}