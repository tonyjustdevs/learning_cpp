#include<iostream>
#include<string>

void printSV(std::string_view input_str) {
	std::cout << "input_SV: " << input_str << "\n";
	std::cout << "input_SV.size(): " << input_str.size() << "\n\n";
}

void printS(std::string input_str) {
	std::cout << "input_S: " << input_str << "\n";
	std::cout << "input_S.size(): " << input_str.size() << "\n\n";
}
int main() {
	std::string s1{ "testasdfas dfasdfasdf asdf asd 1" };
	printSV(s1);
	printS(s1);
	std::string s2{ s1 };
	printSV(s2);
	printS(s2);

	std::string_view s3{ s2 };
	printSV(s3);
	//printS(s3); // accpets str not string_view
	return 0;
}

// 
//void printS(std::string input_str)  --- accepts str not str_view








	// call fn with param type std::string_view
	// - arg1: str "literal"
	// - arg2: string
	// - arg3: string_view