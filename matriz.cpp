#include <iostream>
using namespace std;
int main() {
    int filas;
    int columnas;
    cout << "Indique cuantas filas quiere: ";
    cin >> filas;
    cout << "Indique cuantas columnas quiere: ";
    cin >> columnas;
    int matriz[filas][columnas];
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << "Ingrese numero: ";
            cin >> matriz[i][j];
        }
    }
    cout << "\nImprimiendo la matriz: " << endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}