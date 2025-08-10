#include<iostream>

int main() {
	// unsigned int + signed int ----> unsigned int
	// [u]2 - [s]3 ---> u[-1] -------> modulo wrap -----> -4bio
	
	unsigned int x{ 2 };
	signed int y{ 3 };

	std::cout << "x(u2)-y(s3)=" << x - y << "(exp: 4bn...)\n";

	return 0;
}