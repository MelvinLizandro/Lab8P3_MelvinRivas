#include "Rectangulo.h"

Rectangulo::Rectangulo(string color, double base_, double altura_) : Figura(color){
	base = base_;
	altura = altura_;
}

double Rectangulo::area() {
	return (base * altura);
}

ostream& operator<<(ostream& ostream, const Rectangulo& rectangulo) {
	double resultado = (rectangulo.base * rectangulo.altura);
	ostream << "Color del rectangulo: " << rectangulo.color << endl 
		<< "Area del rectangulo: " << resultado << endl;
	return ostream;
 }