#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Figura.h"
class Triangulo : public Figura
{
private:
	double altura;
	double base;
public:
	Triangulo(string,double,double);
	virtual double area() override;
	friend ostream& operator<<(ostream&, const Triangulo&);
};

