#include<iostream>
#include<string>

int main() {
	std::string input_name{};
	std::cout << "Enter your full name : ";
	std::getline(std::cin >> std::ws, input_name);

	std::cout << "Enter your age: ";
	int input_age{};
	std::cin >> input_age;
	
	std::cout << "\nYour age + length of name is : " << static_cast<signed int>(input_name.length()) + input_age << "\n";
	return 0;	
}




//Enter your full name : John Doe
//Enter your age : 32
//Your age + length of name is : 40