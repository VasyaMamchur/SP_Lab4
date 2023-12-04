#include <iostream>
#include "calculator.h"

using namespace std;

int main() {
	
	Calculator calculator;
	
	double a = 6.3;
	double b = 4.1;
	
    cout << "Sum: " << a << " + " << b << " = " << calculator.Add(a, b) << endl;
	
	cout << "Difference: " << a << " - " << b << " = " << calculator.Sub(a, b) << endl;
	
    return 0;
	
}
