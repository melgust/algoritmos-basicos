//Suma o resta dos numeros enteros
#include <iostream>
using namespace std;
int main() {
    int operando1, operando2, opcion;
    cout << "Ingrese primer operando: ";
    cin >> operando1;
    cout << "Ingrese segundo operando: ";
    cin >> operando2;
    cout << "Ingrese su opcion: \n\t1. Suma\n\t!= 1. Resta\n\t";
    cin >> opcion;
    if (opcion == 1) {
        cout << operando1 << "+" << operando2 << "=" << operando1 + operando2;
    } else {
        cout << operando1 << "-" << operando2 << "=" << operando1 - operando2;
    }
    cout << "\n";
    return 0;
}