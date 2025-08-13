#include<iostream>

void to_int_implicit(int a) {
	std::cout << "Implicit conversion to int: " << a << "\n";
}
int main() {
	
	to_int_implicit(5.5); // comp-err: L4+, output:5 [@L1_warnings]
	// or disable 'warnings as errors': ok ---> ouptut 5 [@L4_warnings]
	return 0;
}