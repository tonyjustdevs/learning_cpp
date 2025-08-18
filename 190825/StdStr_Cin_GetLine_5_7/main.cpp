#include<iostream>
#include<string>

int main() {
	std::string name1{};
	std::string name2{};
	std::string name3{};
	
	std::cout << "Type your full name 1 (cin): " << name1 << "\n";
	std::cin >> name1;
	std::cout << "You typed : " << name1 << "\n";
	
	std::cout << "Type your full name 2 (cin): " << name2 << "\n";
	std::cin >> name2;
	std::cout << "You typed: " << name2 << "\n";

	std::cout << "Expected Bug: fullname1 splits int 2 by whitespace." << "\n";
	std::cout << "Expected Bug: fullname2 ignored." << "\n";
	
	//  Type your full name 1:
	//  jason bourne
	//	You typed : jason
	//	Type your full name 2 :
	//	You typed : bourne
	//	Expected Error : fullname splits at first whitespace


	std::cout << "Type your full name (getline): " << name3 << "\n";
	std::getline(std::cin>>std::ws, name3);
	std::cout << "You typed: " << name3 << "\n";
	std::cout << "Expected Ok."<< "\n";
	return 0;
}