#include <iostream>
#include <string.h>

using namespace std;

typedef struct {
	int dia;
	int mes;
	int anio;
} Fecha;

typedef struct {
	string nombre;
	string telefono;
	string correo;
	Fecha fechaNacimiento;
} Alumno;

int main() {
	Alumno lista[2];
	int i;
	for (i = 0; i < 2; i++) { 
		cout << "Ingresando datos de la persona no. " << i + 1 << endl;
		cout << "Nombre: ";
		Alumno p;	
		getline(cin, p.nombre);
		cout << "Telefono: ";
		getline(cin, p.telefono);
		cout << "Correo: ";
		getline(cin, p.correo);
		cout << "Ingrese anio de su nacimiento: ";
		cin >> p.fechaNacimiento.anio;
		cout << "Ingrese mes de su nacimiento: ";
		cin >> p.fechaNacimiento.mes;
		cout << "Ingrese dia de su nacimiento: ";
		cin >> p.fechaNacimiento.dia;
		lista[i] = p;
		cin.ignore();
	}
	for (i = 0; i < 2; i++) {
		Alumno p = lista[i];
		cout << "Los datos ingresados son: \n";
		cout << "Nombre: " << p.nombre << endl;
		cout << "Telefono: " << p.telefono << endl;
		cout << "Correo: " << p.correo << endl;
		cout << "Fecha de nacimiento: " << p.fechaNacimiento.dia << "/" << p.fechaNacimiento.mes << "/" << p.fechaNacimiento.anio << endl;
	}
	return 0;
}
