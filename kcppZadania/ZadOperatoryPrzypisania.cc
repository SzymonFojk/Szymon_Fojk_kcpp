#include <iostream>

using namespace std;

void fun1() {
	int a = 4;
	int b = 2;

	cout << a/b++ * 2 << endl;

}

void fun2() {
	int a = 4;

	a *= 2;
	a /= 4;

	cout << a << endl;
}


int main() {
	
	cout << "Funkcja 1:" << endl;
	fun1();
	cout << "Funkcja 2:" << endl;
	fun2();

	return 0;
}
