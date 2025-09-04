#include <iostream>

int main()
{
    int x{ 2 };
    int y{ 1 };
    int z{ 10 - x > y ? x : y }; // === { (10 - x > y) ? x : y }
    std::cout << "x: " << x<<'\n';
    std::cout << "y: " << y<<'\n';
    std::cout << "z = 10-x>y ? x:y ---> [" << z<<"] (exp: 2)";

    return 0;
}