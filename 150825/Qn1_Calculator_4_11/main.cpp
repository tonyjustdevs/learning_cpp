#include<iostream>

int main() {
	double dbl_1{}, dbl_2{};
	char op_chr{};

	std::cout << "Enter a double value: " << "\n";
	std::cin >> dbl_1;
	
	std::cout << "Enter a double value: " << "\n";
	std::cin >> dbl_2;
	
	std::cout << "Enter + , -, *, or / : \n";
	std::cin >> op_chr;

	switch (op_chr)
	{
		case '+':
			std::cout << dbl_1 << " " << op_chr << " " << dbl_2 <<" is "<< dbl_1 + dbl_2 << "\n";
			break;
		case '-':
			std::cout << dbl_1 << " " << op_chr << " " << dbl_2 << " is " << dbl_1 - dbl_2 << "\n";
			break;
		case '*':
			std::cout << dbl_1 << " " << op_chr << " " << dbl_2 << " is " << dbl_1 * dbl_2 << "\n";
			break;
		case '/':
			std::cout << dbl_1 << " " << op_chr << " " << dbl_2 << " is " << dbl_1 / dbl_2 << "\n";
			break;

		default:
			std::cout << "TP Error: Invalid Operator!"  << "\n";
			break;
	}
	return 0;
}

//Enter a double value : 6.2
//Enter a double value : 5
//Enter + , -, *, or / : *
//6.2 * 5 is 31

