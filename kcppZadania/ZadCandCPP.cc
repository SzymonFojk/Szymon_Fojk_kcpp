#include <iostream>

using namespace std;

int main() {
	cout << "Output w c++" << endl;
	printf("Output w c\n");

	int a = 7;

	cout << "Output liczby w c++ : " << a << endl;
	printf("Output liczby w c : %d\n", a);

	int x, y;

	cout << "Input c++: " << endl;
	cin >> x;

	cout << "Input c: " << endl;
	scanf("%d", &y);
}
