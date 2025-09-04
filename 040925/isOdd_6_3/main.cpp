#include<iostream>

int main() {
	std::cout << "Enter an integer" << '\n';
	int int1{};
	std::cin >> int1;
	if (int1 % 2 != 0)
	{
		std::cout << int1 << " is odd\n";
		return 0;
	}
	else {
		std::cout << int1 << " is even\n";
	}
	return 0;
}