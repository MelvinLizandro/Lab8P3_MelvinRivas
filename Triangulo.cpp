#include "Triangulo.h"

Triangulo::Triangulo(string color, double base_, double altura_) : Figura(color) {
	base = base_;
	altura = altura_;
}

double Triangulo::area() {
	return ((1 / 2) * base * altura);
}

ostream& operator<<(ostream& ostream, const Triangulo& triangulo) {
	double resultado = ((1 / 2) * triangulo.base * triangulo.altura);
	ostream << "Color del triangulo: " << triangulo.color << endl <<
		"Area del triangulo: " << resultado << endl;
	return ostream;
}