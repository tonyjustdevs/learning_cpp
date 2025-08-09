#include<iostream>

// add add()
static int add(int x, int y) {
	return x + y;
}

// add testadd()
static void testadd() {
	std::cout << "Expected: 2,0,0,-2\n";
	std::cout << "Actual: ";

	std::cout << add(1, 1) << ", ";
	std::cout << add(1, -1)		<< ", ";
	std::cout << add(-1, 1)		<< ", ";
	std::cout << add(-1, -1)	<< ", ";

}

// add 4 test cases

int main() {

	testadd();

}