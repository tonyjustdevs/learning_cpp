#include<iostream>

void doSomething() {

#ifdef PRINT
	std::cout << "printing!!!\n";
#endif // PRINT

#ifndef PRINT
	std::cout << "not printing!!!\n";
#endif // !PRINT

}