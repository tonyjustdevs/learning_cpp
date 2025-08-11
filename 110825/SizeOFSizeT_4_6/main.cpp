#include<iostream>
#include<cstddef>

int main() {

	int x;
	size_t s{ sizeof(x) }; // 4 bytes
	std::cout << "s: " << s << "\n"; // some int

	// print sizeof size t?
	std::cout <<"sizeof(size_t): " << sizeof(size_t) <<"\n"; // 8
	std::cout <<"sizeof(void*): " << sizeof(void*) <<"\n"; //   8 on 64bit


}