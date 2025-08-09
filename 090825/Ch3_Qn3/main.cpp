#include <iostream>
//What does the call stack look like 
// when the point of execution 
// is on line 4/
void d()
{ // here
}

void c(){}

void b(){
	c();
	d();
}

void a(){
	b();
}

int main(){
	a(); // main()->a()->b()-> c() and returns -> d();
	return 0;
}

// call stack
// - c():		line 6
// - d():		line 13 (returns to)
// - a():		line 17 (returns to)
// - main():	line 21 (returns to)

// expected solution to question
// d() line 4
// b() line 14
// a() line 19
// main() line 24
