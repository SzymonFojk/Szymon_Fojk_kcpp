#include <iostream>


class Kolor {
	public:
		int red;
		int green;
		int blue;

		Kolor(){};
		Kolor(int r) {
			red = r;
		};
		Kolor(int r, int g) {
			red = r;
			green = g;
		};
		Kolor(int r, int g, int b) {
			red = r;
			green = g;
			blue = b;
		};

};


int main() {
	
	Kolor czerwony(255);

	std::cout << czerwony.red << std::endl;
	return 0;
}
