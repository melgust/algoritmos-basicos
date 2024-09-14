/**
 * @file switchExample.cpp
 * @author Melvin Cali
 * @brief Determines if an entered integer is divisible by the user's choice
 * @version 0.1
 * @date 2022-07-31
 * 
 */
#include<iostream>
using namespace std;

int main() {
	int number;
	int opcion;
	cout << "Ingrese un numero entero: ";
	cin >> number;
	cout << "1. Comprobar divisibilidad entre 3" << endl;
	cout << "2. Comprobar divisibilidad entre 5" << endl;
	cout << "3. Comprobar divisibilidad entre 7" << endl;
	cout << "4. Comprobar divisibilidad entre 11" << endl;
	cout << "Escriba el numero de su opcion: ";
	cin >> opcion;
	switch (opcion) {
	case 1:
		if (number % 3 == 0) {
			cout << "El numero " << number << " es divisible por 3" << endl;
		} else {
			cout << "El numero " << number << " no es divisible por 3" << endl;
		}
		break;
	case 2:
		if (number % 5 == 0) {
			cout << "El numero " << number << " es divisible por 5" << endl;
		} else {
			cout << "El numero " << number << " no es divisible por 5" << endl;
		}
		break;
	case 3:
		if (number % 7 == 0) {
			cout << "El numero " << number << " es divisible por 7" << endl;
		} else {
			cout << "El numero " << number << " no es divisible por 7" << endl;
		}
		break;
	case 4:
		if (number % 11 == 0) {
			cout << "El numero " << number << " es divisible por 11" << endl;
		} else {
			cout << "El numero " << number << " no es divisible por 11" << endl;
		}
		break;
	default:
		cout << "Creo que tienes un problema con la lectura" << endl;
		break;
	}
	return 0;
}

