#include<iostream>
#define TONY_CODE 42
#define MATE_CODE 666

void mate(int);

int main() {

#ifdef TONY_CODE
	std::cout << "Tonys Code [og]: " << TONY_CODE << "\n";
#endif // TONY_CODE

#ifdef MATE_CODE
	std::cout << "Mates Code [og: " << MATE_CODE << "\n";
#endif // MATE_CODE

	mate(MATE_CODE);
	return 0;
}