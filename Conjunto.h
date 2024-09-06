#pragma once
#include <iostream>
using namespace std;
#include <string>
#include <vector>
class Conjunto
{
private:
	vector <Conjunto> conjunto1;
	vector <Conjunto> conjunto2;
	vector <Conjunto> conjunto3;
	int num;
public:
	Conjunto(int);
	void agregar_elemento(int);
	void mostrar();
	void copiar_vectores(vector <Conjunto> con1, vector <Conjunto> con2);
	Conjunto& operator+(const Conjunto&) const;
	Conjunto& operator*(const Conjunto&) const;
	Conjunto& operator-(const Conjunto&) const;
};

