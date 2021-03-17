#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
}


int main()
{
  int a = 2;
  int b = 5;

  cout << "A=" << a <<" B=" << b << endl;

  swap(&a, &b);

  cout << "A=" << a <<" B=" << b << endl;
  return 0;
}
