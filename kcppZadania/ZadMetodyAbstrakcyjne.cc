#include <iostream>


class Figura {
	virtual float obwod() = 0;

};

class Trojkat : public Figura
{
	private:
		float a, b, c, h;
	public:
		Trojkat(float aa, float bb, float cc, float hh){
		a = aa;
		b = bb;
		c = cc;
		h = hh;
		}
		float obwod(){
			return a+b+c;
		}
		float pole(){
			return (a*h)/2;
		}
};

class Kwadrat : public Figura
{
	private:
		float a;
	public:
		Kwadrat(float aa){
			a = aa;
		}

		float obwod(){
			return 4*a;
			}
		float pole(){
			return a*a;
		}
};

class Prostokat : public Figura 
{
	private:
		float a, b;
	public:
		Prostokat(float aa, float bb){
			a = aa;
			b = bb;
		}

		float obwod(){
			return 2*a + 2*b;
		}
		float pole(){
			return a*b;
		}
};

class Kolo : public Figura
{
	private:
		float r;
	public:
		Kolo(float rr){
			r = rr;
			}
		float obwod(){
			return 2*3.14*r;
		}
		float pole(){
			return 3.14*r*r;
		}
		float dystans(){
			return 0.0;
		}
};




int main()
{
	Kwadrat *objKwadrat = new Kwadrat(4);
	Trojkat *objTrojkat = new Trojkat(2, 2, 2, 1);
	Prostokat *objProstokat = new Prostokat(4, 5);
	Kolo *objKolo = new Kolo(5);
	std::cout << "Obwod kola " << objKolo->obwod() << std::endl;
	std::cout << "Obwod prostokata " << objProstokat->obwod() << std::endl;
	std::cout << "Obwod trojkata " << objTrojkat->obwod() << std::endl;
	std::cout << "Obwod kwadrata " << objKwadrat->obwod() << std::endl;

	return 0;
}


