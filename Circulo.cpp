#include "Circulo.h"

Circulo::Circulo(string color , double radio_) : Figura(color) {
	radio = radio_;
}

double Circulo::area() {
	return (radio * 3.14);
}

ostream& operator<<(ostream& ostream, const Circulo& circulo) {
	double resultado = (circulo.radio * 3.14);
	ostream << "Color del circulo: " << circulo.color << endl <<
		"Area del circulo: " << resultado;
	return ostream;
}