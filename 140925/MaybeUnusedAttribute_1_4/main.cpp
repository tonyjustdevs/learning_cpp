#include<iostream>

int main() {

	// compilation error: 
	// "the following warning is treated as an error"
	// "'mate': local variable is initialized but not referenced"
	//double pi{ 3.14515926 };
	//double mate{ 420.69 };
	//double phi{ 1.61803	};

	[[maybe_unused]] double pi{ 3.14515926 };
	[[maybe_unused]] double mate{ 420.69 };
	[[maybe_unused]] double phi{ 1.61803 };

	std::cout << "pi: "<<pi<<"\n";
	std::cout << "phi: " << phi<<"\n";
	return 0;
}