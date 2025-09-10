#include<iostream>
#include<iomanip>

int main() {
	float a_cool_float{ 123456789.0f };
	std::cout<<std::setprecision(9);
	std::cout << "floating val:" << a_cool_float;
	return 0;
}
	// 1. create floating type variable with 10 sig figs (recall floats only sig to 7)
	// 2. set precision to 9 via ionmanip  & std::set_precision(9) (ie output shown to set_prec)
	// 3. see [rounding error] from cout
