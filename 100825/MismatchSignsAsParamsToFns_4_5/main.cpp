#include<iostream>

//void doSomething(unsigned int x){
//    std::cout << "x is " << x << '\n';
//}

//void doSomething2(unsigned short x) {
//    std::cout << "x is " << x << '\n';
//}

//void doSomething3(unsigned long x) {
//    std::cout << "x is " << x << '\n';
//}

void doSomething4(unsigned char x) { //0-255 -> -1 -> 255?
    //std::cout << "x is " << x << '\n';
    std::cout << "x is " << static_cast<int>(x) << '\n';
}

void doSomething5(unsigned char x) { 
    std::cout << "x is " << x << '\n'; //note above 127, ascii no exist     
}

int main(){
    //doSomething(-1);
    //doSomething2(-1);
    //doSomething3(-1);
    doSomething4(-1); // 255 <- because char is 1 byte -> 256 values or
    // [0-255], thus [-1] wraps to [255]
    doSomething5(-191); // 165 -> A
    return 0;
}
