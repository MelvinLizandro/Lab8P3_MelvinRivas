#include "Conjunto.h"

void Conjunto::agregar_elemento(int eleccion) {
	if (eleccion == 1)
	{
		int usuario;
		cout << "Ingrese elemento para agregar al conjunto 1:";
		cin >> usuario;
		conjunto1.push_back(usuario);
	}
	else if (eleccion == 2)
	{
		int usuario;
		cout << "Ingrese elemento para agregar al conjunto 2:";
		cin >> usuario;
		conjunto2.push_back(usuario);
	}
	else
	{
		cout << "Caracter invalido..." << endl;
	}
}

void Conjunto::mostrar() {
	if (conjunto1.empty())
	{
		cout << "No hay nada en el conjunto 1" << endl;
	}
	else
	{
		cout << "Conjunto 1 [ ";
		for (size_t i = 0; i < conjunto1.size(); i++)
		{
			cout << conjunto1[i] << ", ";
		}
		cout << "]" << endl;
	}
	if (conjunto2.empty())
	{
		cout << "No hay nada en el conjunto 2" << endl;
	}
	else
	{
		cout << "Conjunto 2 [ ";
		for (size_t i = 0; i < conjunto2.size(); i++)
		{
			cout << conjunto2[i] << ", ";
		}
		cout << "]" << endl;
	}
}