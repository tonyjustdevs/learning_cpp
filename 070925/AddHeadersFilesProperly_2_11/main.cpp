#include "add.h"
#include "arith.h"
#include<iostream>


int main() {

	std::cout << "add(5,2)"		  <<                add(2, 3)<<'\n';
	std::cout << "arith_add(5,2)" <<          arith_add(5, 2)<<'\n';
	std::cout << "arith_sub(5,2)" <<     arith_subtract(5, 2)<<'\n';
	std::cout << "arith_div(5,2)" <<   arith_divide_int(5, 2)<<'\n';
	std::cout << "arith_rem(5,2)" << arith_get_remaider(5, 2)<<'\n';

	return 0;
}
// add add.cpp 
// - add add() definition (aka implementation)
// - add add.h fwd declaration
// add add.h
// - add add() forward declaration
// - [next chptr] header guard?
// add #include directive add.h to main.cpp
// run add() in main.cpp