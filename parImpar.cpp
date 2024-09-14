/*
Determina si un numero entero ingresado por 
el usuario es par o impar.
LEEASE: entero
*/
#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese numero: ";
    cin >> numero;
    if (numero % 2 == 0) {
        cout << "El numero " << numero << " es par" << endl;
    } else {
        cout << "El numero " << numero << " es impar" << endl;
    }
    return 0;
}
