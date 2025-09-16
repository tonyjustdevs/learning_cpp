#include<iostream>

namespace Foo::Goo {
	int addFG(int a, int b) {
		return a + b;	
	}
}
namespace Foo {
	int addF(int a, int b) {
		return a + b;
	}

}

namespace BarBaz{
	int addFG(int a, int b) {
		return a + b;
	}
}
int main() {
	std::cout << "Foo::Goo::addFG(1,2): " << Foo::Goo::addFG(1, 2) << "\n";
	namespace FG = Foo::Goo;
	std::cout << "FG::addFG(1,2): "		<< FG::addFG(1, 2) << "\n";
	std::cout << "BarBaz::addFG(1,2): " << BarBaz::addFG(1, 2)<<"\n";
	return 0;	
}