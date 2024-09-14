#include <iostream>
using namespace std;
int main() {
    int veces = 4, numero, sumatoria = 0, mayor, menor;
    for (int i = 0; i < veces; i++)
    {
        cout << "Ingrese numero " << endl;
        cin >> numero;
        if (i == 0) {
            mayor = numero;
            menor = numero;
        } else {
            if (numero > mayor) {
                mayor = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }
        sumatoria = sumatoria + numero;
    }
    cout << " El promedio es: " << sumatoria / veces;
    cout << "Menor: " << menor;
    cout << "Mayor: " << mayor;
    return 0;
}