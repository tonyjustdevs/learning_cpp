#include<iostream>
#include<iomanip>

int main() {
	// get sizeof size_t

	std::cout<<"sizeof(size_t): "<< sizeof(size_t)<<"\n";
	// unsigned 4bytes -> rng (0 - 4,294,967,295)
	///			u_4_byte rng : [0, 4,294,967,295]
	std::cout<<std::fixed<<std::setprecision(0)<<
		"u_4_byte rng: [0," << pow(2, 32) - 1 << "]\n";

	std::cout << std::fixed << std::setprecision(0) <<
	"An object cannot larger than: "<< pow(2, 32)-1 << " (bytes)\n";
	std::cout << "or 4 gbs";
	return 0;
}