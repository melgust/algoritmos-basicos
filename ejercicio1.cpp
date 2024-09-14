//Programa que solicita un numero y establece si es par o impar
//Autor: Melvin Cali
//Fecha: 24/07/2021
#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Ingrese el numero: ";
	cin >> n;
	cout << endl;
	if (n % 2 == 0) {
		cout << "El numero es par";
	} else {
		cout << "El numero es impar";
	}
	return 0;
}
