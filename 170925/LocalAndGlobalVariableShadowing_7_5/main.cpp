#include<iostream>

int x = 1;
void doStuff();
int main() {
	std::cout << "[main()] x: " << x << " (exp: 1 from global)\n";
	
	int x{ 2 };  //main.cpp(7,6): warning C4459: declaration of 'x' hides global declaration  //error C2220: the following warning is treated as an error ------ [so lets turn off warning-errros]
	std::cout << "[main()] int x{2}: " << x << " (exp: 2 from main())\n";
	
	doStuff(); // 2 then 3
	std::cout << "[main()] int x{2}: " << x << " (exp: 2 from main())\n";
	return 0;
}

void doStuff() {
	std::cout << "[doStuff()] x: " <<x<< " (exp: 1 from global)\n";
	int x{ 3 };//(17,6): warning C4459: declaration of 'x' hides global declaration
	std::cout << "[doStuff()] int x{ 3 }: " <<x<< " (exp: 3 from doStuff())\n";
}