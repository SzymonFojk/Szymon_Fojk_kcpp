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
	char ch;
	bool wynik;

	cout << "Podaj liczbe" << endl;
	cin >> x;

	cout << "Ktora funkcje wybierasz? a/b/c" << endl;
	cin >> ch;

	switch (ch)
	{
		case 'a':
			wynik = a(x);
			break;
		case 'b':
			wynik = b(x);
			break;
		case 'c':
			wynik = c(x);
			break;
	}

	if(wynik)
	{
		cout << "Liczba jest parzysta" << endl;
	}
	else
	{
		cout << "Liczba nie jest parzysta" << endl;
	}

	return 0;
}
