#include<iostream>

int main() {
	std::cout << "Enter First Int:" << '\n';
	int int1{};
	std::cin >> int1;

	int int2{};
	std::cout << "Enter Second Int:" << '\n';
	std::cin >> int2;
	
	if (int1%int2==0)
	{
		std::cout << int1 << " is divisible by " << int2 << '\n';;
	}
	else
	{
		std::cout << int1 << " is not divisible by " << int2<<'\n';
	}

		std::cout <<" the remainder is: " << int1 % int2 << '\n';;

	return 0;
}