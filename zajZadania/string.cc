#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char myString[] = "Witam";
  char ch = 't';
  char *fch = strchr(myString, ch);

  if (fch != NULL)
  {
    cout << "Znaleziono " << ch << " w wyrazie " << myString << endl;
  }
  else
  {
      cout << "Nie znaleziono " << ch << " w wyrazie " << myString << endl;
  }

  return 0;
}
