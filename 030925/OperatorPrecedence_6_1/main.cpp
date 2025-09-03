#include<iostream>


int calcResult(int a, int b, int c) {// create fn with 3 args
	int res{};
	res = a + (b * c); //7=1+2*3 vs 5=3+2*1 
	return res;
};

int getInput() { // create input takes 3 args (runs 3 times)
	std::cout << "Add argument: ";
	int input{};
	std::cin >> input;
	return input;
}
int main() { // note evaluation of arguments from L->R vs R->L
	int res = calcResult(getInput(), getInput(), getInput());
	std::cout << res; // entering 1,2,3 -> resulted in 5=3+2*1 ie R->L eval
	return 0;
}