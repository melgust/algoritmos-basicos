#include <iostream>
#include <string>
using namespace std;

bool isPrime(int number) {
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;
    cout << "Ingrese un numero entero mayor a uno: ";
    cin >> number;
    if (number <= 1) {
        cout << "Algo anda mal con su lectura";
        return 0;
    }
    if (isPrime(number)) {
        cout << "es primo";
    } else {
        cout << "no es primo";
    }
    return 0;
}