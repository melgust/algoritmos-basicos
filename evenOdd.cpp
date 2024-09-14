/**
 * @file evenOdd.cpp
 * @author Melvin Cali
 * @brief example for if statement, determines if a number entered by the user is even or odd 
 * @version 0.1
 * @date 2022-07-31
 * 
 */

#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Ingrese un numero entero: ";
    cin >> number;
    int residue = number % 2;
    if (residue == 0) 
    {
        cout << "El numero " << number << " es par\n";
    }
    else
    {
        cout << "El numero " << number << " no es par, es impar\n";
    }
    return 0;
}
