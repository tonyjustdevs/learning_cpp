#include<iostream>

void a() 
{
	std::cout << "a() called\n";
	int x = 2;
	std::cout << "x in a(): " << x << "\n";
}

void b() 
{
	std::cout << "b() called\n";
	int y = 3;
	std::cout << "y in b(): " << y << "\n";
	a();
}

int main() 
{
	std::cout << "main() called\n";
	int x = 1;
	int y = 1;
	std::cout << "x,y in main(): "<<x<<","<<y << "\n";
	a();
	b();

	return 0;
}
