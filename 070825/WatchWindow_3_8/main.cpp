#include <iostream>

int main()
{
	int x{ 1 };
	int y{ x };
	x = x + 2;
	y = x - 1;
	std::cout << x << ' ' << y;

	x = x + 3;
	y = y + x - 1;

	std::cout << x << ' ' << y;

	return 0;
}