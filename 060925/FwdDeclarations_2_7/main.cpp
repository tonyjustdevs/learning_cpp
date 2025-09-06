#include<iostream>

int add(int a, int b);

int main() {

	//std::cout << "The number of 6 and 9 is:" << 6+9;		// v1
	std::cout << "The number of 6 and 9 is: " << add(6, 9);	// v2
	return 0;
}

int add(int a, int b) {
	return a + b;
}