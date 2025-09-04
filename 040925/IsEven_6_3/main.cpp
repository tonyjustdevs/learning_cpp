#include<iostream>

constexpr bool isEven(int a) {
	return (a % 2 == 0);
}

int main() {
	std::cout << "Enter an integer: ";
	int int1{};
	std::cin >> int1;

	if (isEven(int1))
	{
		std::cout << int1 << " is even";
	}
	else {
		std::cout << int1 << " is odd";

	}
	return 0;
}


// Write a constexpr function called isEven() 
// that returns true if an integer passed to it is even, 
// and false otherwise.
// Use the remainder operator to test 
// whether the integer parameter is even.
// Make sure isEven() works with both positive and negative numbers.