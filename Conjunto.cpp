#include "Conjunto.h"

Conjunto::Conjunto(int num_) {
	num = num_;
}

void Conjunto::mostrar() {
	cout << num;
}

void Conjunto::copiar_vectores(vector <Conjunto> con1, vector <Conjunto> con2) {
	for (size_t i = 0; i < con1.size(); i++)
	{
		conjunto1.push_back(con1[i]);
	}
	for (size_t i = 0; i < con2.size(); i++)
	{
		conjunto2.push_back(con1[i]);
	}
}

Conjunto& Conjunto::operator+(const Conjunto& timestamp) const {
	Conjunto conjunto3 = *this;
	return conjunto3;
}

Conjunto& Conjunto::operator*(const Conjunto& timestamp) const {
	Conjunto conjunto3 = *this;
	return conjunto3;
}

Conjunto& Conjunto::operator-(const Conjunto& timestamp) const {
	Conjunto conjunto3 = *this;
	return conjunto3;
}


