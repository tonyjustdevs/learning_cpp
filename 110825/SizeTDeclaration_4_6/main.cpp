#include<iostream>
#include<cstddef>

int main() {
	// 1. declare some int x
	int x;

	// 2. declare size_t s sizeof(x)
	std::size_t s{ sizeof(x) };

	// 3. print s
	std::cout << "s:" << s << "(type: size_t)\n";
	s = s * 2;
	std::cout << "s*2:" << s << "(type: size_t)\n";
	return 0;
}