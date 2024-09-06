#include "Figura.h"

Figura::Figura(string color_) {
	color = color_;
}

ostream& operator<<(ostream& ostream, const Figura& figura) {
	ostream << "Color: " << figura.color << endl << "Area: "  <<
		figura;
	return ostream;
}