#include <iostream>

using namespace std;

int main() {
	
	int dec = 0,
	    pow = 1,
	    rem;
	
	long long bin;

	cout << "Podaj liczbe binarnie : ";
	cin >> bin;

	while(bin>0) {
		rem = bin%10;
		bin /= 10;
		dec += rem*pow;
		pow *= 2;
	}

	cout << "Podana liczba dziesietnie: " << dec << endl;
	

	return 0;
}
