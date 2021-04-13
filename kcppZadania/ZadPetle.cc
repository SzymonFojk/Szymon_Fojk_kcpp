#include <iostream>

using namespace std;

void a()
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

void b()
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

void c(){
	for(int i = 0;i<10;i++){
		if(i%2==0){
			continue;
		}
		cout << i << endl;
	}
}


int main()
{
	a();
	b();
	c();
	return 0;
}
