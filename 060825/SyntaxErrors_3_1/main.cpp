#include <iostream>

int getValue()
{
std::cerr << "get Value() called\n";
    return 4;
}

int main()
{
std::cerr << "get main() called\n";
    std::cout << getValue << '\n';

    return 0;
}