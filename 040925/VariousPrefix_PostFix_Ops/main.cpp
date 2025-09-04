#include <iostream>

int main()
{
    int x{ 5 };
    int y{ 5 };
    std::cout << "  x   y: ["  <<x   << ' ' << y   << "]: (exp: 5 5)" << '\n';
    std::cout << "++x --y: ["  <<++x << ' ' << --y << "]: (exp: 6 4)" << '\n'; // prefix
    std::cout << "  x   y: ["  <<x   << ' ' << y   << "]: (exp: 6 4)" << '\n';
    std::cout << "x++ y--: ["  <<x++ << ' ' << y-- << "]: (exp: 6 4)" << '\n'; // postfix
    std::cout << "  x   y: ["  <<x   << ' ' << y   << "]: (exp: 7 3)" << '\n';

    return 0;
}