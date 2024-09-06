#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Figura.h"
class Rectangulo : public Figura
{
private: 
	double altura;
	double base;
public:
	Rectangulo(string,double,double);
	double area() override;
	
	friend ostream& operator<<(ostream&, const Rectangulo&);
};

