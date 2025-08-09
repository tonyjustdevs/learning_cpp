#include <iostream>
// Fix program to add two numbers: enter 8 and 4. 
int readNumber()
{
    std::cout << "Please enter a number: ";
    //char x{}; og
    int x{}; // update 1
    std::cin >> x; // 8 4

    return x;
}

void writeAnswer(int x)
{
    std::cout << "The sum is: " << x << '\n';
}

int main()
{
    int x{ readNumber() };
    int y{ readNumber() };
    writeAnswer(x + y);

    return 0;
}
