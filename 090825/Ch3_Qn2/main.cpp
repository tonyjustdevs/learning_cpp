#include <iostream>
// Use the integrated debugger to step through this program.
// For inputs, enter 8 and 4. Fix the following program:

int readNumber()
{
	std::cout << "Please enter a number: ";
	int x{};
	std::cin >> x; // 8 4
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The quotient is: " << x << '\n';
}

int main()
{
	int x{ readNumber() }; //update1
	int y{ readNumber() }; //update2
	//x = readNumber();//og
	//x = readNumber();//og
	writeAnswer(x / y);

	return 0;
}