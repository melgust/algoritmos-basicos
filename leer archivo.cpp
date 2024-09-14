#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main() {
	//string ruta = "C:\ejercicios\arreglos.cpp";
	fstream archivo("C:/ejercicios/oracion.txt");
	string linea, alreves;
	if (archivo.is_open()) {
		getline(archivo, linea);
		archivo.close();
		for (int i = linea.length() - 1; i >= 0; i--) {
			alreves = alreves + linea[i];
		}
		if (linea == alreves) {
			//es
		} else {
			//no es
		}
	} else {		
		cout << "No se puede abrir el archivo";
	}
	return 0;
}
