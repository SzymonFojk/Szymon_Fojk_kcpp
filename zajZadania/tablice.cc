#include <iostream>

using namespace std;


void przekaz(int tab[])
{
  int iSize = sizeof(&tab)/sizeof(tab[0]) + 1;
  for(int i=0;i<iSize;i++)
  {
    cout << tab[i] << endl;
  }
}

int main()
{
  int tab[3] = {1,2,3};

  przekaz(tab);
  return 0;
}
