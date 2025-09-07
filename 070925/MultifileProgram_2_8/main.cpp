#include<iostream>
int add(int a, int b);


int main() {
	std::cout << "add(3,4): " << add(3, 4);
	return 0;
}


// create two files
// add.cpp: 
// - add_fn() - definition

// main.cpp:
// - add_fn() - (fwd) declaration 
// - run add_fn()