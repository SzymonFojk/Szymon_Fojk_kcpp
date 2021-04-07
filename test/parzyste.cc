#include <iostream>

using namespace std;

int main()
{
	int x;
	cout << "Podaj liczbę" << endl;
	cin >> x;

	if(x%2 == 0)
	{
		cout << "Liczba jest parzysta" << endl;
	}
	else
	{
		cout << "Liczba nie jest parzysta" << endl;
	}

	return 0;
}
