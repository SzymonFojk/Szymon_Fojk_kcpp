#include <iostream>
using namespace std;

void funA()
{
        cout << "Funkcja A" << endl;
}

void funB()
{
        cout << "Funkcja B" << endl;
}

int main(int argc, char *argv[])
{
	/*
	// Sposob 1
	cout << "Podaj ktora funkcja: [a|b]" << endl;

        char choice;
        cin >> choice;

        switch (choice)
        {
                case 'a':
                        funA();
                        break;
                case 'b':
                        funB();
                        break;
        }
	*/
	if(argc < 2)
		return 0;
	switch (argv[1][0])
        {
                case 'a':
                        funA();
                        break;
                case 'b':
                        funB();
                        break;
        }


	return 0;

}
