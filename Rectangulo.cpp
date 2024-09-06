#include "Rectangulo.h"

Rectangulo::Rectangulo(string color, double base_, double altura_) : Figura(color){
	base = base_;
	altura = altura_;
}

double Rectangulo::area() const {
	return (base * altura);
}
