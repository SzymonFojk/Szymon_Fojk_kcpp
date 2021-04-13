#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float a = 2,
	      b = 0.1234567;
	
	int d = 15;
	cout << showpos << a << endl;
	setprecision(4);
	cout << noshowpos << a+b << endl;
	setprecision(10);
	cout << scientific << b << endl;
	cout << hex << d << endl;

	return 0;
}

