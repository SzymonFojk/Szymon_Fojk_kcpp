#include <iostream>

using namespace std;

int main() {
	
	int dec,
	    rem,
	    i = 1,
	    st = 1;

	long long bin = 0;

	cout << "Podaj liczbe : ";
	cin >> dec;

	while(dec>0) {
		rem = dec%2;
		dec /= 2;
		bin += rem*i;
		i *= 10;
	}

	cout << "Podana liczba binarnie : " << bin << endl;
	  
	return 0;	
}
