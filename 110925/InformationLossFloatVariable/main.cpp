#include<iostream>
#include<iomanip>

int main() {
	float flt{ 123456789.0 };
	std::cout << "float (default cout) 123456789.0: " << flt << " (exp: 1.23457e+008 6 sig figs as cout default prec is 6)\n";
	std::cout << std::setprecision(9);
	std::cout <<"float (setprecision(9)) 123456789.0: "<<flt<<" (exp: 1.234567??e+008 float precision to 7 sigfig typically)\n";
// Note TODO: Properties -> C/C++ -> "Treat Warning As Errors" : "No"
// Otherwise Cannot Build Project:
	// error C2220 : the following warning is treated as an error <---------- [prevents build]
	// warning C4305 : 'initializing' : truncation from 'double' to 'float'

// After Change, Warning persists but build is possible:
// warning C4305 : 'initializing' : truncation from 'double' to 'float'
	return 0;
}

//- Program 2: Show how * *information is loss * *(for a large number) via cout, when :
//    -declare `float` variable with 8 + significant figures(note `float` accurate to typically 7)
//    - print variable via default precision
//    - print variable via setprecision(8 + ) to see information loss