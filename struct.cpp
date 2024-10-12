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
	int cantidad = 2;
	Alumno lista[cantidad];
	int i;
	for (i = 0; i < cantidad; i++) { 
		cout << "Ingresando datos de la persona no. " << i + 1 << endl;
		cout << "Nombre: ";
		Alumno alumno;	
		getline(cin, alumno.nombre);
		cout << "Telefono: ";
		getline(cin, alumno.telefono);
		cout << "Correo: ";
		getline(cin, alumno.correo);
		cout << "Ingrese anio de su nacimiento: ";
		cin >> alumno.fechaNacimiento.anio;
		cout << "Ingrese mes de su nacimiento: ";
		cin >> alumno.fechaNacimiento.mes;
		cout << "Ingrese dia de su nacimiento: ";
		cin >> alumno.fechaNacimiento.dia;
		lista[i] = alumno;
		cin.ignore();
	}
	for (i = 0; i < cantidad; i++) {
		Alumno alumno = lista[i];
		cout << "Los datos ingresados son: \n";
		cout << "Nombre: " << alumno.nombre << endl;
		cout << "Telefono: " << alumno.telefono << endl;
		cout << "Correo: " << alumno.correo << endl;
		cout << "Fecha de nacimiento: " << alumno.fechaNacimiento.dia << "/" << alumno.fechaNacimiento.mes << "/" << alumno.fechaNacimiento.anio << endl;
	}
	return 0;
}
