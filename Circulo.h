#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Figura.h"
class Circulo : public Figura
{
private:
	double radio;
public: 
	Circulo(string,double);
	virtual double area() override;
	friend ostream& operator<<(ostream&, const Circulo&);
};

