#include "Triangulo.h"

Triangulo::Triangulo(string color, double base_, double altura_) : Figura(color) {
	base = base_;
	altura = altura_;
}

double Triangulo::area() const { 
	return (0.5 * base * altura);
}
