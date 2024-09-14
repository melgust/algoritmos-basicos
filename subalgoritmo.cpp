/**
 * Author: Melvin Cali
 * Date: 31/08/2024
 * Se solicita al usuario una cantidad de notas a ingresar
 * luego las ingrese y se calcula el promedio a los impares
 * si el promedio es impar se muestra un mensaje
 */
#include <iostream>
#include <string>
using namespace std;

bool even(int number) {
    return number % 2 == 0;
}

int main() {
    int total;
    cout << "Cuantas notas quiere ingresar: ";
    cin >> total;
    int scores[total];
    for (int i = 0; i < total; i++)
    {
        cout << "Ingrese la nota: ";
        cin >> scores[i];
    }
    cout << "Las notas ingresadas son: " << endl;
    int avg = 0;
    int sum = 0;
    int totalOdd = 0;
    for (int i = 0; i < total; i++)
    {
        if (i == 0) {
            cout << scores[i];
        } else {
            cout << ", " << scores[i];
        }
        if (!even(scores[i])) {
            sum += scores[i];
            totalOdd++;
        }
    }
    cout << endl;
    avg = sum / totalOdd;
    cout << "El promedio es: " << avg << endl;
    if (!even(avg)) {
        cout << "Hola mundo";
    }
    cout << endl;
    return 0;
}