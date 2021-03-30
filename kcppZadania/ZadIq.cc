#include <iostream>
using namespace std;

int main()
{
  int arr[] = {1, 2, 3, 4};
  int i = 0;

  for(i;i<4;i++)
  {
    cout << i[arr] << endl;
  }

  // i[arr] jest to to samo co arr[i] poniewaz te wyrazenie jest rowne wyrazeniu *(i+arr) lub *(arr+i)

  return 0;
}
