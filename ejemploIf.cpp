/**
 * @file ejemploIf.cpp
 * @author your name (you@domain.com)
 * @brief Genera un numero aleatorio y muestra un mensaje si el 
 * numero esta entre 26 y 40
 * @version 0.1
 * @date 2022-08-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
#include<cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    srand(time(NULL));
    int number = (rand() % 50) + 1;
    cout << "Numero generado: " << number << endl;
    if (number >= 26 && number <= 40)
    {
        cout << "El numero generado es mayor a 25 y menor a 41\n";
    }
    return 0;
}