#include <iostream>
#include <string>
using namespace std;

int factorial(int numero) {
    if (numero <= 1) {
        return 1;
    }
    return numero * factorial(numero - 1);
}

int main() {
    int numero;
    cout << "Ingrese numero: ";
    cin >> numero;
    cout << "!" << numero << " = " << factorial(numero) << "\n";
    return 0;
}