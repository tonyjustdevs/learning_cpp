//#include<iostream>
//#include <typeinfo> //typeid(result1).name()

//
//int main() {
//	//		  = [unsigned] +/- [unsigned] 
//	// or 
//	//		  = [signed]   +/- [unsigned]  
//	//		 -> [unsigned] +/- [unsigned] (aka [signed] becomes [unsigned])
//	// 
//	// 1)		signed[-2]	 - signed[+3]	---> signed[+1] --- matching signs ok
//	// 2)		unsigned[+2] - unsigned[3]	---> unsigned[-1]? --- wrapping!
//
//	signed short x{ -2 };
//	signed short y{ +3 };
//	std::cout << "(signed: -2)x - (signed: +3)y: " << x - y << "(exp: -5=(-2)-(+3))\n";
//	
//	unsigned short a{ 2 };
//	signed   short b{ 3 };
//	std::cout << "(us: 2)x - (s: 3)y: " << a - b << "(exp: 65535 == -1=(2)-(3))\n";
//	//rng: [0-65535]: [-1 -> 65535]
//
//	unsigned int a1{ 2 };
//	signed   int b1{ 3 };
//	std::cout << "(us: 2)x - (s: 3)y: " << x - y << "(exp: 4294967295 == -1=(2)-(3))\n";
//
//	signed short x1{ -1 }; //-1 -1 -> -2
//	signed short y1{ +1 };
//	std::cout << "(s: -1)x - (s: 1)y: " << x1 - y1 << "(exp: -2=-1-1)\n";
//
//
//	signed short x2{ -1 }; //-1 -1 -> 2 but its 0 because 1-1
//	unsigned short y2{ +1 };
//	std::cout << "(s: -1)x - (us: 1)y: "<<x2-y2<< "(exp: 0=1-1)\n";
//
//
//	return 0;
//}


#include <iostream>
#include <typeinfo>

int main() {
    // Case 1: signed short + unsigned short
    signed short a = -1;
    unsigned short b = 1;
    auto result1 = a + b;
    std::cout << "Type: " << typeid(result1).name() << std::endl; // int

    // Case 2: signed int + unsigned int  
    signed int x = -1;
    unsigned int y = 1;
    auto result2 = x + y;
    std::cout << "Type: " << typeid(result2).name() << std::endl; // unsigned int

    // Demonstration:
    std::cout << "signed(-1) + unsigned(1) = " << result2 << std::endl;
    // This will be a very large positive number!
    // -1 gets converted to unsigned: 4294967295 (on 32-bit systems)
    // 4294967295 + 1 = 4294967296 (or wraps around)
}