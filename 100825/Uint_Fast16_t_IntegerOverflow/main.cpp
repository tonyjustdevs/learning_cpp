#include<iostream>
#include<cstdint>

int main() {

	std::uint_fast16_t x{0};
	std::cout << "x:0, x1: " << x << "\n";
	x -= 1;
	std::cout << "x:0, x-=1: " << x << "\n";
	return 0;
}

//#include <cstdint>
//#include <iostream>
//int main()
//{
//    std::uint_fast16_t sometype{ 0 };
//    sometype = sometype - 1; // intentionally overflow to invoke wraparound behavior
//    std::cout << sometype << '\n';
//    return 0;
//}