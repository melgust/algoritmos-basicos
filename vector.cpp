#include <iostream>
using namespace std;
int main() {
    int cantidad = 5;
    int notas[cantidad];
    int nota;
    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese nota: ";
        //cint >> notas[i];
        cin >> nota;
        notas[i] = nota;
    }
    int sumatoria = 0, mayor, menor;
    for (int i = 0; i < cantidad; i++)
    {
        if (i == 0) {
            mayor = notas[i];
            menor = notas[i];
        } else {
            if (notas[i] > mayor) {
                mayor = notas[i];
            }
            if (notas[i] < menor) {
                menor = notas[i];
            }
        }
        //sumatoria = sumatoria + notas[i];
        sumatoria += notas[i];
        cout << notas[i] << " ";
    }
    int promedio = sumatoria / cantidad;
    cout << "El promedio es: " << promedio << endl;
    cout << "La nota menor es: " << menor << endl;
    cout << "La nota mayor es: " << mayor << endl;
    return 0;
}