#include<iostream>
#include"add.h"
#include"subtract.h"
int main() {
	std::cout << "CoolMath::add(64,5) = " << CoolMath::add(64, 5) << "\n";
	std::cout << "CoolMath::subtract(64,5) = "<< CoolMath::subtract(64, 5)<<"\n";
	return 0;
}