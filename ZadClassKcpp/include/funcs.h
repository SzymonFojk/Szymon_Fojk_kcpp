#include <iostream>

using namespace std;

int& referencje(int x)
{
  int value = x+1;
  return value;
}

int wartosc(int a)
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

void funA()
{
        cout << "Funkcja A" << endl;
}

void funB()
{
        cout << "Funkcja B" << endl;
}

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
}


bool c(int x)
{
  return (x&1) ? false : true;
}


void aa()
{
  int i = 0;

  while(i<10)
  {
    if(i%2 == 0)
    {
      cout << "Parzyste i: " << i << endl;
    }
    else
    {
      cout << "Nieparzyste i: " << i << endl;
    }
    i++;
  }
}

void bb()
{
  int i = 0;
  do {
    i++;
    cout << i << endl;
  } while (i < 10);

  i = 0;
  while(i<10){
    i++;
    cout << i << endl;
  }
}

void cc(){
  for(int i = 0;i<10;i++){
    if(i%2==0){
      continue;
    }
    cout << i << endl;
  }
}

class A {
  public:
    int a, b, c;
    A() {}
    A(int zmienna1, int zmienna2);
    A(int zmienna1) {
      a = zmienna1;
    }
    ~A(){}
};

A::A(int zmienna1, int zmienna2) : a(zmienna1), b(zmienna2)
{}
