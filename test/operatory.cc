#include <iostream>

using namespace std;

int main()
{
	for (int i = 0;i<100;i++)
	{
		int b = 2*i-1;
		if(i%10 == 0)
		{
			cout << b << endl;
		}
	}
	return 0;
}
