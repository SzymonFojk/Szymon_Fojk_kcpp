#include <iostream>
#include <math.h>

using namespace std;

extern "C" void fun1(int a, int b)
{
  cout << "Suma: " << a+b << endl;
}

extern "C" void fun2(int a, int b)
{
  cout << "Roznica: " << a-b << endl;
}

void fun3(int a, int b)
{
  cout << "Iloczyn: " << a*b << endl;
}

void fun4(int a, int b)
{
  if(b == 0)
  {
    cout << "b jest zerem" << endl;
    return;
  }

  cout << "Iloraz: " << a/b << endl;
}

void fun5(int a, int b)
{
  cout << a << "^" << b << " == " << pow(a, b) << endl;
}

int main(int argc, char** argv)
{

  int a = 2;
  int b = 3;

  for(int i=0;i<argc;i++)
  {
    string arg = (string)argv[i];
    if(arg == "a")
    {
      fun1(a, b);
    }
    else if(arg == "s")
    {
      fun2(a, b);
    }
    else if(arg == "m")
    {
      fun3(a, b);
    }
    else if(arg == "d")
    {
      fun4(a, b);
    }
    else if(arg == "p")
    {
      fun5(a, b);
    }
  }

  return 0;
}
