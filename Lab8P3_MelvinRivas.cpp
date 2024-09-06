#include <iostream>
using namespace std;
#include <string>
#include <vector>

void ejercicio1() {
	int opciones = 1;
	while (opciones != 0)
	{
		cout << "---- Menu de Figuras ----" << endl << "1. Crear un circulo" <<
			endl << "2. Crear un rectangulo" << endl << "3. Crear un triangulo" <<
			endl << "4. Mostrar la figuras mas reciente" << endl <<
			"5. Listar todas las figuras creadas" << endl << "0. Salir";
		cin >> opciones;
		cout << endl;
		switch (opciones)
		{
		case 0: {
			cout << "Saliendo del ejericio 1" << endl;
			break;
		}
		case 1: {

			break;
		}
		case 2: {

			break;
		}
		case 3: {

			break;
		}
		case 4: {

			break;
		}
		case 5: {

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