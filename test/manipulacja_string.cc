#include <iostream>
#include <string.h>

using namespace std;

int main(){

  string a = "Wszystko wiem";
  string b = "Nic nie wiem";

  if (a == b) cout << "a i b sa takie same" << endl;
  if (a != b) cout << "a i b sa rozne" << endl;

  a += " i ";
  cout << "Dodane do wyrazu a: " << a << endl;

  string c = a + b;
  cout << "Polaczone: " << c << endl;

  b[0] = a[0];

  cout << "Zmieniony wyraz b: " << b << endl;

  return 0;
}
