#include <iostream>
using namespace std;
int main() {
    int cantidad;
    cout << "Ingrese un numero entero: ";
    cin >> cantidad;
    for (int i = 0; i < cantidad; i++)
    {
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }
        for (int j = 0; j < cantidad - i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}