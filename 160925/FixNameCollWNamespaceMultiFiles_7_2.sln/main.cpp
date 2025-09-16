#include<iostream>
#include"foo_and_goo.h"

int main() {
	std::cout << "Foo::doThings(6, 9): " << Foo::doThings(6, 9)<<"\n";
	std::cout << "Goo::doThings(6, 9): " << Goo::doThings(6, 9)<<"\n";
	return 0;
}