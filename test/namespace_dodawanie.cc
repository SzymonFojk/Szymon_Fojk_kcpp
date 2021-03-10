#include <iostream>

using namespace std;

namespace dodawanie {
  int a = 3;
  int b = 4;
  int dodaj (int a, int b){
    return (a+b);
  }
}

using namespace dodawanie;

int main() {

cout << dodaj(a, b) << endl;

  return 0;
}
