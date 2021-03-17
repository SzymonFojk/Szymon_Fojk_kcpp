#include <iostream>

using namespace std;

int a = 3;

int wartosc(int a)
{
  return a;
}

int& referencje()
{
  return a;
}

int* wskaznik()
{
  static int a = 5;
  return &a;

}
int* tab()
{
  static int tab[3] = {1, 2, 3};
  return tab;
}



int main()
{
  cout << wartosc(a) << endl;
  cout << referencje()<< endl;
  cout << wskaznik() << endl;
  cout << tab() << endl;
  return 0;
}
