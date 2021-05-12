#include <iostream>


union Liczby {
	int l1;
	float l2;
};


int main() {
	
	Liczby licz;

	licz.l2 = 1.3;
	std::cout << licz.l2 << std::endl;

	licz.l1 = 3;
	std::cout << licz.l1 << std::endl;
	std::cout << licz.l2 << std::endl;

	licz.l2 = 7.8;
	std::cout << licz.l2 << std::endl;
	std::cout << licz.l1 << std::endl;
	return 0;
}
