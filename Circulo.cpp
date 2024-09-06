#include "Circulo.h"

Circulo::Circulo(string color , double radio_) : Figura(color) {
	radio = radio_;
}

double Circulo::area() const {
	return (radio * 3.14);
}

