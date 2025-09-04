#include<iostream>

bool isOdd(int a) {
	return (a % 2 != 0);
}
int main() {
	int a{};
	std::cout << "Enter int: ";
	std::cin >> a;

	std::cout << "\nIs it Odd: " << isOdd(a)<<'\n';
	return 0;
}