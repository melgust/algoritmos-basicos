#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main() {
	fstream archivo;
	archivo.open("C:/ejercicios/salida.txt");
	string nombre;
	if (archivo.is_open()) {
		cout << "Dime tu nombre: ";
		getline(cin, nombre);
		archivo << nombre;
		archivo << "\nOtra linea";
		archivo.close();
	} else {		
		cout << "No se puede abrir el archivo";
	}
	return 0;
}
