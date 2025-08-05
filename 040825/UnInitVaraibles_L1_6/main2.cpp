#include<iostream>

int dblr(int x) {
	return x * 2;
}

int main() {
	int x{};
	std::cout << "Enter a value: " << "\n";
	std::cin >> x;
	//std::cout << "Doubled: " << dblr(x) << "\n";

	std::cout << "Doubling it: " << x * 2 <<"\n";



	return 0;
}