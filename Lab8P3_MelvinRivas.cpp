#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include "Figura.h"
#include "Circulo.h"
#include "Triangulo.h"
#include "Rectangulo.h"
#include "Conjunto.h"

vector <Conjunto*> conjunto1;
vector <Conjunto*> conjunto2;
vector <Figura*> figu;
Circulo* cir;
Rectangulo* rec;
Triangulo* tri;

void Crear_circulo() {
	//le da valor a todas las variables para poder agregarlo
	//al vector
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
	//le da valor a todas las variables para poder agregarlo
	//al vector
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
	//le da valor a todas las variables para poder agregarlo
	//al vector
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
			//valida que haya algo que se pueda imprimir
			if (figu.empty())
			{
				cout << "No hay nada que imprimir" << endl;
			}
			else
			{
				// imprime el ultimo valor del vector
				cout << "---- Figura mas reciente creada ----" << endl;
				Figura* figuras = figu[(figu.size() - 1)];
				cout << *figuras << endl;
			}
			break;
		}
		case 5: {
			//valida que haya algo que se pueda imprimir
			if (figu.empty())
			{
				cout << "No hay nada que imprimir" << endl;
			}
			else
			{
				//lista todos los valores existentes
				cout << "---- Listas de figuras creadas ----" << endl;
				for (size_t i = 0; i < figu.size(); i++)
				{
					Figura* figuras = figu[i];
					cout << i + 1 << ". " << *figuras << endl;
				}
			}
			break;
		}
		default:
			cout << "Error de caracter, porfavor vuelva a intentarlo" << endl;
			break;
		}
	}
}

void agregar_elemento1() {
	//agrega el del conjunto 1
		int usuario;
		cout << "Ingrese elemento para agregar al conjunto 1: ";
		cin >> usuario;
		Conjunto* conju = new Conjunto(usuario);
		conjunto1.push_back(conju);
}

void agregar_elemento2() {
	//agrego los del conjunto 2
		int usuario;
		cout << "Ingrese elemento para agregar al conjunto 1: ";
		cin >> usuario;
		Conjunto* conju = new Conjunto(usuario);
		conjunto2.push_back(conju);
}

void imprimir() {
	// verifica que cada uno de los vectores tenga algo que imprimir y
	// si no tira la advertencia
	if (conjunto1.empty())
	{
		cout << "No hay nada que listar" << endl;
	}
	else
	{
		cout << "Conjunto 1 { ";
		for (size_t i = 0; i < conjunto1.size(); i++)
		{
			conjunto1[i]->mostrar();
			cout << " ";
		}
		cout << "}" << endl;
	}

	if (conjunto2.empty())
	{
	}
	else
	{
		cout << "Conjunto 2 { ";
		for (size_t i = 0; i < conjunto2.size(); i++)
		{
			conjunto2[i]->mostrar();
			cout << " ";
		}
		cout << "}" << endl;
	}
}

void union_conjuntos() {

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
			agregar_elemento1();
			break;
		}
		case 2: {
			agregar_elemento2();
			break;
		}
		case 3: {
			imprimir();
			break;
		}
		case 4: {
			union_conjuntos();
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
			for (int i = 0; i < figu.size(); i++) {
				delete figu[i];
			}
			figu.clear();

			for (int i = 0; i < conjunto1.size(); i++) {
				delete conjunto1[i];
			}
			conjunto1.clear();

			for (int i = 0; i < conjunto2.size(); i++) {
				delete conjunto2[i];
			}
			conjunto2.clear();
			break;
			//extra
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