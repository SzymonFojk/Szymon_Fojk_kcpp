#include <iostream>

using namespace std;

bool a(int x)
{
	if(x%2 == 0)
        {
                return true;
        }
        else
        {
                return false;
        }
}

bool b(int x)
{
	if(x & 1)
	{
		return false;
	}
	else
	{
		return true;
	}

	/*
		Liczba 6 : 0110
		& to operacja 'and'
		0110 & 1 otrzymujemy 0
	*/
}

bool c(int x)
{
	return (x&1) ? false : true;

}

int main()
{

	int x;

	cout << "Podaj liczbe" << endl;
	cin >> x;

	if(c(x))
	{
		cout << "Liczba jest parzysta" << endl;
	}
	else
	{
		cout << "Liczba nie jest parzysta" << endl;
	}

	return 0;
}
