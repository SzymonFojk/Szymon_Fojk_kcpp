#include <iostream>
#include <cstring>

struct Samochod {
	char* marka;
	float pojemnoscSilnika;
	int konieMechaniczne;
	int rokProdukcji;
};



int main() {
	Samochod samochod1;
	//strncpy(samochod1.marka, "Mercedes", 8);
	samochod1.marka = strndup("Mercedes", 8);
	samochod1.konieMechaniczne = 300;

	std::cout << "Samochod marki " << samochod1.marka << " o mocy " << samochod1.konieMechaniczne << " koni mechanicznych" << std::endl;

	return 0;
}

