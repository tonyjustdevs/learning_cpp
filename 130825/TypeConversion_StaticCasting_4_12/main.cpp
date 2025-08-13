#include<iostream>

static void implicitConvervion_DblToInt(double a) {
	a = a - 1.5;
	std::cout << "a=(b-1.5): " << a << "(exp: some fp)\n";
}

static void noConversion(int a) {
	a = a - 1.5;
	std::cout << "a=(b-1.5): " << a << "(exp: some int)\n";
// [L4] comp-warning: dbl to int conversion -> loss of data
} // [L1] no warning, precision lost output: 3


static void noConversion2(int a) {
	a = a*0.25;
	std::cout << "a=(b-1.5): " << a << "(exp: some int)\n";
	// [L4] comp-warning: dbl to int conversion -> loss of data
} // [L1] no warning, precision lost output: 3

int main() {
	int b{ 5 };

	std::cout << "int b: " << 5 << "\n";
	
	implicitConvervion_DblToInt(b);

	noConversion(b);

	noConversion2(b);
	return 0;
}