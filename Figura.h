#pragma once
#include <iostream>
using namespace std;
#include <string>
class Figura
{
protected:
	string color;
public:
	Figura(string);
	virtual double area() const = 0;
	friend ostream& operator<<(ostream&, const Figura&);
};

