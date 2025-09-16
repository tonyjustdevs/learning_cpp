#include<iostream>

namespace Goo {
	int doSomething(int a, int b) {
		return a - b;
	}
}

namespace Foo {
	int doSomething(int a, int b) {
		return a + b;
	}
}

int main() {
	std::cout << "Foo::doSomething(6,9): " << Foo::doSomething(6, 9)<<"\n";
	std::cout<<  "Goo::doSomething(6,9): " << Goo::doSomething(6, 9)<<"\n";
	return 0;
}