#include<iostream>
#include<bitset>
int main() {
	std::bitset<8> bity{ 0b00001101 };
	std::cout << "bity" << bity << "\n";				// # total bits
	std::cout<<"bity.size(): ["<<  bity.size()<<"] (exp: 8 bits)\n";				// # total bits
	std::cout << "bity.count(): [" << bity.count()<<"] (exp: 3 bits turned on hurhurhurh) \n\n";			// # bits true
	
	
	std::cout << "bity.all() are all true: [" << bity.all()    <<"] (exp: 0)\n";	// # bits true
	std::cout << "bity.any() at least 1 true: [" << bity.any()   <<"] (exp: 1)\n";	// # bits true
	std::cout << "bity.none() none are true: ["<< bity.none()    <<"] (exp: 0)\n\n";	// # bits true

	std::cout << std::boolalpha;
	std::cout << "std::boolalpha\n";

	std::cout << "bity.all() are all true: [" << bity.all() <<    "] (exp: False)\n";	// # bits true
	std::cout << "bity.any() at least 1 true: [" << bity.any() << "] (exp: True)\n";	// # bits true
	std::cout << "bity.none() none are true: [" << bity.none() << "] (exp: False)\n";	// # bits true


	return 0;
}