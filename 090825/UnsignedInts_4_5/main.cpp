#include<iostream>
#include<cmath>
//int main() {
//	unsigned short us; // 2 bytes
//	std::cout << "unsigned short: " << sizeof(us) << " (bytes)\n";
//	std::cout << "unsigned short: " << sizeof(us) * CHAR_BIT << " (bits)\n";
//	std::cout << "unsigned short: " << pow(2, sizeof(us) * CHAR_BIT) << " (values)\n";
//	std::cout << "unsigned short range[min,max]: [0,"<< pow(2,sizeof(us)*CHAR_BIT)-1 << "] (values)\n\n";
//	us = 65535;
//	std::cout << "us: "		<< us	<< "\n";
//	us += 1;
//	std::cout << "us+1: "	<< us << " (expected remainder : 0)\n";
//	us += 1;
//	std::cout << "us+2: " << us << " (expected remainder : 1)\n";
//	return 0;
//}

//////////////// modulo wrapping //////////////// 
//#include <iostream>
//int main()
//{   // turn off 'Treat Warnings as Errors'
//    unsigned short x{ 65535 }; // largest 16-bit unsigned value possible
//    std::cout << "x was: " << x << '\n';
//
//    x = 65536; // 65536 is out of our range, so we get modulo wrap-around
//    std::cout << "x is now: " << x << '\n';
//
//    x = 65537; // 65537 is out of our range, so we get modulo wrap-around
//    std::cout << "x is now: " << x << '\n';
//
//    return 0;
//}

//////////////// reverse modulo wrapping ////////////////	
//-1 is not representable, so it wraps around to the top of the range, producing the value 65535

#include <iostream>

int main()
{
    unsigned short x{ 0 }; // smallest 2-byte unsigned value possible
    std::cout << "x was: " << x << '\n';

    x = -1; // -1 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << x << '\n';

    x = -2; // -2 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << x << '\n';

    return 0;
}