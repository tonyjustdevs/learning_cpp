#include<iostream>
#include<cmath>
#include<iomanip>
int main() {
	std::cout << "sizeof(int):" << sizeof(int) << " (bytes)\n";
	// sizeof(int): 4 bytes
	// - but all integers (including above) have a [type]:
	// - short, int, long, long long
	// - what [type] is this value?

	// - why does it matter, the type?
	// - arithmetic/operations

	// - if short: 2 bytes ---> overflows @ [-32768,	32767]
	// - if int: 4 bytes ---> overflows @	[-2bio...,	+2bio]

	//short s;
	//std::cout << "short values: " << pow(2, 16)<< "\n";
	std::cout << "short rng (2 bytes):  [" << -pow(2, 15) << ", " << pow(2, 15) - 1 << "]\n";
	std::cout << std::fixed<<std::setprecision(0)<<"int rng (4 bytes):  ["<< -pow(2, 31)<<", " << pow(2, 31) - 1<<"]\n";
	return 0;
}