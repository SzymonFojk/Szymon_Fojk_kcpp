#include <math.h>
#include <iomanip>
#include <fstream>
#include "funcs.h"
#include <string.h>
using namespace std;

class Zadania{
public:
	Zadania(){};
  //void zad11(char arg);
  void zad21();
  void zad22(); //nie ma
  void zad31(); //nie ma
  void zad32();
  void zad33();
  void zad34();
  void zad35();
  void zad36();
  void zad37();
  void zad40();
  void zad41();
  void zad42();
  void zad43();
  void zad44();
  void zad45();
  void zad46(); //nie ma
  void zad47(); //nie ma
  void zad51(); //nie ma
  void zad52();
  void zad53();
  void zad54();
  void zad55();
  void zad56();

};



void Zadania::zad21(){
	cout << "**************" << endl;
  cout << "Zad 2.1" << endl;
  cout << "**************" << endl;
  int a = 3;

  cout << wartosc(a) << endl;
  cout << referencje(a)<< endl;
  cout << wskaznik() << endl;
  cout << tab() << endl;
}

void Zadania::zad22(){
	cout << "**************" << endl;
  cout << "Zad 2.2" << endl;
  cout << "**************" << endl;

}

void Zadania::zad31(){
	cout << "**************" << endl;
  cout << "Zad 3.1" << endl;
  cout << "**************" << endl;
  int arr[] = {1, 2, 3, 4};
  int i = 0;

  for(i;i<4;i++)
  {
    cout << i[arr] << endl;
  }

  // i[arr] jest to to samo co arr[i] poniewaz te wyrazenie jest rowne wyrazeniu *(i+arr) lub *(arr+i)
}

void Zadania::zad32(){
	cout << "**************" << endl;
  cout << "Zad 3.2" << endl;
  cout << "**************" << endl;

}

void Zadania::zad33(){
	cout << "**************" << endl;
  cout << "Zad 3.3" << endl;
  cout << "**************" << endl;


  cout << "---------------Funkcja1:" << endl;
  Funkcja1();
  cout << "---------------Funkcja2:" << endl;
  Funkcja2();
  cout << "---------------Funkcja3:" << endl;
  Funkcja3();
}

void Zadania::zad34(){
	cout << "**************" << endl;
  cout << "Zad 3.4" << endl;
  cout << "**************" << endl;

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
				*/

}

void Zadania::zad35(){
	cout << "**************" << endl;
  cout << "Zad 3.5" << endl;
  cout << "**************" << endl;

  cout << "Funkcja 1:" << endl;
	fun1();
	cout << "Funkcja 2:" << endl;
	fun2();
}

void Zadania::zad36(){
	cout << "**************" << endl;
  cout << "Zad 3.6" << endl;
  cout << "**************" << endl;

  int x = 1, y = 2, z = 3;
	int result[] = {4, 4, 4, 4};

	result[0] *= -++x*x--+-y--%++z;
	cout << "0. " << result[0] << endl;
	result[1] *= -(++x)*(x--)+-(y--)%(++z);
	cout << "1. " << result[1] << endl;
	result[2] *= (-(++x))*(x--)+(-(y--))%(++z);
	cout << "2. " << result[2] << endl;
	result[3] *= ((-(++x))*(x--))+((-(y--))%(++z));
	cout << "3. " << result[3] << endl;
}

void Zadania::zad37(){
	cout << "**************" << endl;
  cout << "Zad 3.7" << endl;
  cout << "**************" << endl;

  int dec = 0,
	    pow = 1,
	    rem;

	long long bin;

	cout << "Podaj liczbe binarnie : ";
	cin >> bin;

	while(bin>0) {
		rem = bin%10;
		bin /= 10;
		dec += rem*pow;
		pow *= 2;
	}

	cout << "Podana liczba dziesietnie: " << dec << endl;

  		dec = 0;
      rem= 0;
      int i = 1;
      int st = 1;

  bin = 0;

  cout << "Podaj liczbe : ";
  cin >> dec;

  while(dec>0) {
    rem = dec%2;
    dec /= 2;
    bin += rem*i;
    i *= 10;
  }

  cout << "Podana liczba binarnie : " << bin << endl;
}

void Zadania::zad40(){
	cout << "**************" << endl;
  cout << "Zad 4.0" << endl;
  cout << "**************" << endl;

  float a = 7,
        b = 3,
        x = b/a;


  cout << "output:" << setprecision(4) << setw(3) << " " << x << setw(3) << "T:" << setw(3) << " " << setprecision(3) << x << endl;
  cout << "output1:" << setprecision(4) << setw(3) << " " << x << setw(3) << "T:" << setw(3) << " " << setprecision(5) << x << endl;
  cout << "output2:" << setprecision(4) << setw(3) << " " << x << setw(3) << "T:" << setw(3) << " " << setprecision(7) << x << endl;
}

void Zadania::zad41(){
	cout << "**************" << endl;
  cout << "Zad 4.1" << endl;
  cout << "**************" << endl;

  ofstream sfile("plik.txt");
	sfile << "Zapisuje do pliku" << endl;
	sfile.close();


	string text;
	ifstream rfile("plik.txt");

	while(getline(rfile, text)) {
		cout << text << endl;
	}

	cerr << "CERR" << endl;

	rfile.close();
}

void Zadania::zad42(){
	cout << "**************" << endl;
  cout << "Zad 4.2" << endl;
  cout << "**************" << endl;

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

void Zadania::zad43(){
	cout << "**************" << endl;
  cout << "Zad 4.3" << endl;
  cout << "**************" << endl;


  	/*
  		Liczba 6 : 0110
  		& to operacja 'and'
  		0110 & 1 otrzymujemy 0
  	*/

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
}

void Zadania::zad44(){
	cout << "**************" << endl;
	cout << "Zad 4.4" << endl;
	cout << "**************" << endl;

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
}

void Zadania::zad45(){
	cout << "**************" << endl;
	cout << "Zad 4.5" << endl;
  cout << "**************" << endl;


  aa();
  bb();
  cc();
}

void Zadania::zad46(){
	cout << "**************" << endl;
	cout << "Zad 4.6" << endl;
	cout << "**************" << endl;
}

void Zadania::zad47(){
	cout << "**************" << endl;
	cout << "Zad 4.7" << endl;
	    cout << "**************" << endl;
}

void Zadania::zad51(){
	cout << "**************" << endl;
	cout << "Zad 5.1" << endl;
	cout << "**************" << endl;
}

void Zadania::zad52(){
	cout << "**************" << endl;
  cout << "Zad 5.2" << endl;
  cout << "**************" << endl;

  struct Samochod {
  	char* marka;
  	float pojemnoscSilnika;
  	int konieMechaniczne;
  	int rokProdukcji;
  };

  Samochod samochod1;
	//strncpy(samochod1.marka, "Mercedes", 8);
	samochod1.marka = strndup("Mercedes", 8);
	samochod1.konieMechaniczne = 300;

	cout << "Samochod marki " << samochod1.marka << " o mocy " << samochod1.konieMechaniczne << " koni mechanicznych" << endl;
}

void Zadania::zad53(){
	cout << "**************" << endl;
  cout << "Zad 5.3" << endl;
  cout << "**************" << endl;

  union Liczby {
  	int l1;
  	float l2;
  };

  Liczby licz;

	licz.l2 = 1.3;
	cout << licz.l2 << endl;

	licz.l1 = 3;
	cout << licz.l1 << endl;
	cout << licz.l2 << endl;

	licz.l2 = 7.8;
	cout << licz.l2 << endl;
	cout << licz.l1 << endl;
}

void Zadania::zad54(){
	cout << "**************" << endl;
  cout << "Zad 5.4" << endl;
  cout << "**************" << endl;


  A klasa(1, 2);
  cout << klasa.a << endl;
}

void Zadania::zad55(){
	cout << "**************" << endl;
  cout << "Zad 5.5" << endl;
  cout << "**************" << endl;
}

void Zadania::zad56(){
	cout << "**************" << endl;
  cout << "Zad 5.6" << endl;
  cout << "**************" << endl;

  class Figura {
  	virtual float obwod() = 0;

  };

  class Trojkat : public Figura
  {
  	private:
  		float a, b, c, h;
  	public:
  		Trojkat(float aa, float bb, float cc, float hh){
  		a = aa;
  		b = bb;
  		c = cc;
  		h = hh;
  		}
  		float obwod(){
  			return a+b+c;
  		}
  		float pole(){
  			return (a*h)/2;
  		}
  };

  class Kwadrat : public Figura
  {
  	private:
  		float a;
  	public:
  		Kwadrat(float aa){
  			a = aa;
  		}

  		float obwod(){
  			return 4*a;
  			}
  		float pole(){
  			return a*a;
  		}
  };

  class Prostokat : public Figura
  {
  	private:
  		float a, b;
  	public:
  		Prostokat(float aa, float bb){
  			a = aa;
  			b = bb;
  		}

  		float obwod(){
  			return 2*a + 2*b;
  		}
  		float pole(){
  			return a*b;
  		}
  };

  class Kolo : public Figura
  {
  	private:
  		float r;
  	public:
  		Kolo(float rr){
  			r = rr;
  			}
  		float obwod(){
  			return 2*3.14*r;
  		}
  		float pole(){
  			return 3.14*r*r;
  		}
  		float dystans(){
  			return 0.0;
  		}
  };

  Kwadrat *objKwadrat = new Kwadrat(4);
	Trojkat *objTrojkat = new Trojkat(2, 2, 2, 1);
	Prostokat *objProstokat = new Prostokat(4, 5);
	Kolo *objKolo = new Kolo(5);
	cout << "Obwod kola " << objKolo->obwod() << endl;
	cout << "Obwod prostokata " << objProstokat->obwod() << endl;
	cout << "Obwod trojkata " << objTrojkat->obwod() << endl;
	cout << "Obwod kwadrata " << objKwadrat->obwod() << endl;
}

int main(){
	Zadania zad;
	int choice;
	while(1)
	{
		cout << "Podaj numer zadania np. 33" << endl;
		cin >> choice;

		switch(choice)
		{
			case 21:
				zad.zad21();
				break;
			case 31:
				zad.zad31();
				break;
			case 32:
				zad.zad32();
				break;
			case 33:
				zad.zad33();
				break;
			case 34:
				zad.zad34();
				break;
			case 35:
				zad.zad35();
				break;
			case 36:
				zad.zad36();
				break;
			case 37:
				zad.zad37();
				break;
			case 40:
				zad.zad40();
				break;
			case 41:
				zad.zad41();
				break;
			case 42:
				zad.zad42();
				break;
			case 43:
				zad.zad43();
				break;
			case 44:
				zad.zad44();
				break;
			case 45:
				zad.zad45();
				break;
			case 46:
				zad.zad46();
				break;
			case 47:
				zad.zad47();
				break;
			case 51:
				zad.zad51();
				break;
			case 52:
				zad.zad52();
				break;
			case 53:
				zad.zad53();
				break;
			case 54:
				zad.zad54();
				break;
			case 55:
				zad.zad55();
				break;
			case 56:
				zad.zad56();
					break;
			default:
				cout << "Podane zadanie nie istnieje" << endl;
		}
	}
  return 0;
}
