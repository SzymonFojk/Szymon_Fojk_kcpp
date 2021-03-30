#include <iostream>
using namespace std;

void Funkcja1()
{
  int a = 5, *p;

  p = &a;
  cout << "Operacja: " << "p++" << "\t" << p++ << endl;
  p = &a;
  cout << "Operacja: " << "++p" << "\t" << ++p << endl;
  p = &a;
  cout << "Operacja: " << "++*p" << "\t" << ++*p << endl;
  p = &a;
  cout << "Operacja: " << "++(*p)" << "\t" << ++(*p) << endl;
  p = &a;
  cout << "Operacja: " << "++*(p)" << "\t" << ++*(p) << endl;
  p = &a;
  cout << "Operacja: " << "*p++" << "\t" << *p++ << endl;
  p = &a;
  cout << "Operacja: " << "(*p)++" << "\t" << (*p)++ << endl;
  p = &a;
  cout << "Operacja: " << "*(p)++" << "\t" << *(p)++ << endl;
  p = &a;
  cout << "Operacja: " << "*++p" << "\t" << *++p << endl;
  p = &a;
  cout << "Operacja: " << "*(++p)" << "\t" << *(++p) << endl;

}

void Funkcja2()
{
  int a[] = {1, 2, 3, 4, 5}, *p;
  p = a;

  cout << "Operacja: " << "p++" << "\t" << p++ << endl;
  cout << "Operacja: " << "++p" << "\t" << ++p << endl;
  cout << "Operacja: " << "++*p" << "\t" << ++*p << endl;
  cout << "Operacja: " << "++(*p)" << "\t" << ++(*p) << endl;
  cout << "Operacja: " << "++*(p)" << "\t" << ++*(p) << endl;
  cout << "Operacja: " << "*p++" << "\t" << *p++ << endl;
  cout << "Operacja: " << "(*p)++" << "\t" << (*p)++ << endl;
  cout << "Operacja: " << "*(p)++" << "\t" << *(p)++ << endl;
  cout << "Operacja: " << "*++p" << "\t" << *++p << endl;
  cout << "Operacja: " << "*(++p)" << "\t" << *(++p) << endl;

}

void Funkcja3()
{
  int a;
  int b;
  int c;

  a = b = c = 0;
  int *p = &a;

  p++;
	cout <<"1. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  ++p;
	cout <<"2. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
   ++*p;
	cout <<"3. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  ++(*p);
	cout <<"4. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  ++*(p);
	cout <<"5. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  *p++;
	cout <<"6. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  (*p)++;
	cout <<"7. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  *(p)++;
	cout <<"8. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  *++p;
	cout <<"9. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
  *(++p);
	cout <<"10. A, B, C: "<< a <<"\t"<< b <<"\t"<< c << endl;
}


int main()
{
  cout << "---------------Funkcja1:" << endl;
  Funkcja1();
  cout << "---------------Funkcja2:" << endl;
  Funkcja2();
  cout << "---------------Funkcja3:" << endl;
  Funkcja3();


  return 0;
}
