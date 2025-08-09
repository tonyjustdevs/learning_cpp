#include <iostream>

int readNumber()
{
	std::cout << "Please enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The sum is: " << x << '\n';
}

int main()
{
	//int x{};//og
	//readNumber(x); og
	//x = readNumber(x) + readNumber(x); //update 1
	
	int x{ readNumber()};//update 2
	x = x + readNumber(); // update 2
	//x = x + readNumber(x); // og
	writeAnswer(x);

	return 0;
}