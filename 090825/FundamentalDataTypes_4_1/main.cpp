#include<iostream>

void noReturn(int x) // void here means no return value
{
    std::cout << "The value of x is: " << x << '\n';

    return 5; // error
}


int main() {

	return 0;
}