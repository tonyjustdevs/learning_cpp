#include<iostream>

bool isOdd1_Fn(int a) {
	return (a % 2 == 1) ? true : false;
}
int main() {
	std::cout << "enter an integer: ";
	int a{};
	std::cin >> a;
	bool isOdd1Result = isOdd1_Fn(a);

	if (isOdd1Result)
	{
		std::cout << a << " is odd!";
	}
	else {
		std::cout << a << " is even!";

	}
	
	return 0;	
}
	//isOdd1
	//isOdd2
	//isEven
	//postfix_op
	//prefix_op
	//divChecker
	//conOpeerator