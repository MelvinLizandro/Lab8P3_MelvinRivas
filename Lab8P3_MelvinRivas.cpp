#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include "Figura.h"
#include "Circulo.h"
#include "Triangulo.h"
#include "Rectangulo.h"
#include "Conjunto.h"

vector <Figura*> figu;
Circulo* cir;
Rectangulo* rec;
Triangulo* tri;
Conjunto conju;

void Crear_circulo() {
	string color;
	double radio;
	cout << "Ingrese el color del circulo: " << endl; 
	cin >> color;
	cout << "Ingrese el radio del circulo: " << endl;
	cin >> radio;
	cir = new Circulo(color,radio);
	figu.push_back(cir);
}

void Crear_rectangulo() {
	string color;
	double base,altura;
	cout << "Ingrese el color del rectangulo: " << endl;
	cin >> color;
	cout << "Ingrese la base del rectangulo: " << endl;
	cin >> base;
	cout << "Ingrese la altura del rectangulo: " << endl;
	cin >> altura;
	rec = new Rectangulo(color, base, altura);
	figu.push_back(rec);
}

void Crear_Triangulo() {
	string color;
	double base, altura;
	cout << "Ingrese el color del rectangulo: " << endl;
	cin >> color;
	cout << "Ingrese la base del rectangulo: " << endl;
	cin >> base;
	cout << "Ingrese la altura del rectangulo: " << endl;
	cin >> altura;
	tri = new Triangulo(color, base, altura);
	figu.push_back(tri);
}

void ejercicio1() {
	int opciones = 1;
	while (opciones != 0)
	{
		cout << "---- Menu de Figuras ----" << endl << "1. Crear un circulo" <<
			endl << "2. Crear un rectangulo" << endl << "3. Crear un triangulo" <<
			endl << "4. Mostrar la figuras mas reciente" << endl <<
			"5. Listar todas las figuras creadas" << endl << "0. Salir" << endl <<
			"Cual desea elegir: ";
		cin >> opciones;
		cout << endl;
		switch (opciones)
		{
		case 0: {
			cout << "Saliendo del ejericio 1" << endl;
			break;
		}
		case 1: {
			Crear_circulo();
			break;
		}
		case 2: {
			Crear_rectangulo();
			break;
		}
		case 3: {
			Crear_Triangulo();
			break;
		}
		case 4: {
			Figura* figuras = figu[(figu.size() - 1)];
			cout << figuras << endl;
			break;
		}
		case 5: {
			for (size_t i = 0; i < figu.size(); i++)
			{
				Figura* figuras =  figu[i];
				cout << figuras << endl;
			}
			break;
		}
		default:
			cout << "Error de caracter, porfavor vuelva a intentarlo" << endl;
			break;
		}
	}
}



void ejercicio2() {
	int opciones = 1;
	while (opciones != 0)
	{
		cout << "---- Menu de conjuntos ----" << endl
			<< "1. Agregar elemento a conjunto 1" << endl
			<< "2. Agregar elemento a conjunto 2" << endl
			<< "3. Mostrar conjuntos" << endl
			<< "4. Union de conjuntos" << endl
			<< "5. Interseccion de conjunto" << endl
			<< "6. Diferencia de conjuntos" << endl
			<< "0. Salir" << endl
			<< "Cual desea elegir: " << endl;
		cin >> opciones; 
		switch (opciones)
		{
		case 0: {
			cout << "Saliendo del ejericio 2" << endl;
			break;
		}
		case 1: {
			conju.agregar_elemento(1);
			break;
		}
		case 2: {
			conju.agregar_elemento(2);
			break;
		}
		case 3: {
			conju.mostrar();
			break;
		}
		case 4: {

			break;
		}
		case 5: {

			break;
		}
		case 6: {

			break;
		}
		default:
			cout << "Error de caracter, porfavor vuelva a intentarlo" << endl;
			break;
		}
	}
}

void menu() {
	int opciones = 1;
	while (opciones != 0)
	{
		cout << "---- MENU ----" << endl << "1. Figuras" << endl
			<< "2. Operaciones con conjunto" << endl <<
			"0. Salir" << endl << "Cual desea elegir: ";
		cin >> opciones;
		cout << endl;
		switch (opciones)
		{
		case 0: {
			cout << "Saliendo...." << endl;
			break;
		}
		case 1: {
			ejercicio1();
			break;
		}
		case 2: {
			ejercicio2();
			break;
		}
		default:
			cout << "Error de caracter, porfavor vuelva a intentarlo" << endl;
			break;
		}
	}
}

int main()
{
	menu();
}