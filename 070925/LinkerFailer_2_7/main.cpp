#include<iostream>
int add(int, int);

int main() {
// declare function (but not define)
	std::cout << "add(3,4)" << add(3, 4);
// run function

// expected linker fail

	return 0;
}