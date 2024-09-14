//valida si un numero es par o impar
#include <iostream>
using namespace std;

int main () {
    int a, r;
    cout << "Ingrese numero";
    cin >> a;
    r = a % 2;
    if (a == 0) {
        cout << "El numero ingresado es par";
    } else {
        cout << "El numero ingresado es impar";
    }
    return 0;
}
