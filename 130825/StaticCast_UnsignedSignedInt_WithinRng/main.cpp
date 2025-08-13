#include<iostream>

int main() {
	unsigned int u_num{ 5 };

	int i_num  = static_cast<int>(u_num);
	std::cout << "inum (sc<int>): " << i_num <<" (unsigned int u_num{5})\n";
	return 0;
}