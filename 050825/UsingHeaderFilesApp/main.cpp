#include"add.h" // forward declaration from add.cpp
#include<iostream>


//int add(int x, int y); // og copy/paste method (non-header method)

int main() {
	int x{}, y{};
	std::cout << "Enter x: " << "\n";
	std::cin >> x;
	
	std::cout << "Enter y: " << "\n";
	std::cin >> y;
	
	std::cout<<x<<" + "<<y<<" = "<< add(x, y) << "\n";
	return 0;
}