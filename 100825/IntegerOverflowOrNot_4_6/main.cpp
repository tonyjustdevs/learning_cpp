#include<iostream>

int main()
{
    int x{ 32767 };         // x may be 16-bits or 32-bits

    std::cout <<"x=" << x << '\n'; // what will this print?
    std::cout <<"2^16=" <<pow(2, 15)<<" vals [OVERFLOW: on 16-bit cpu]\n";
    std::cout <<"2^32=" <<pow(2, 31)<<" vals [OVERFLOW: on 32-bit cpu]\n";
    x = x + 1;              // 32768 overflows if int is 16-bits, okay if int is 32-bits
    std::cout << "x=x+1=" <<x<< '\n'; // what will this print?

    // assume 16-bit int machine
    // int x{ 32767 }; [-32768,+32767]
    // x+=1; overflows , ie +32767 -> warp around -> -32768
    //

    return 0;
}