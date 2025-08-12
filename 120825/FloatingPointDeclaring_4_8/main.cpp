#include<iostream>
#include<iomanip>

int main() {
	int a{ 5 };
	double b{ 5.0 };
	float c{ 5.0f };
	double d{ 5.0f };
	
	
	std::cout << std::left;
	std::cout << std::setw(20);
	std::cout << "sizeof(int a 5): " << sizeof(a) << " (exp: 4)\n";
	std::cout << std::setw(20);
	std::cout << "sizeof(flt c 5.0f): "	<< sizeof(c) << " (exp: 4)\n";
	std::cout << std::setw(20);
	std::cout << "sizeof(dbl b 5.0): "	<< sizeof(b) << " (exp: 8)\n";
	std::cout << std::setw(20);
	std::cout << "sizeof(dbl b 5.0f): "	<< sizeof(d) << " (exp: 8)\n";


	float e{ 5.0 }; // narrowing - comp error
	std::cout << std::setw(20);
	std::cout << "sizeof(flt e 5.0): " << sizeof(e) << " (exp: 4 or err)\n";
	
	float f{ 5 }; // same as int?
	std::cout << std::setw(20);
	std::cout << "sizeof(flt f 5): " << sizeof(f) << " (exp: 4 or err)\n";

	int g{ 5.0f }; // same as int?
	std::cout << std::setw(20);
	std::cout << "sizeof(int g 5.0f): " << sizeof(g) << " (exp: 4 or err)\n";

	//int d{ 0.0 }; 
	// This will cause a compilation error because 0.0 is a double literal and cannot be implicitly converted to int without a cast.`

	return 0;
}
	//std::cout << std::setw(20) << "sizeof(int a 5): " << sizeof(a) << " (exp: 4)\n";