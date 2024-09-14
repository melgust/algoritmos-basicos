#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>

using namespace std;
int main()
{
    // Providing a seed value
    srand((unsigned)time(NULL));
    int cantidad;
    cout << "Cuantos numeros quiere generar: ";
    cin >> cantidad;
    int numeros[cantidad];
    for (int i = 0; i < cantidad; i++)
    {
        // Get a random number
        int random = rand() % 1000;
        numeros[i] = random;
        cout << " " << random;
    }
    cout << "\n";
    int tmp;
    for (int i = 1; i < cantidad; i++) {
        for (int j = cantidad - 1; j >= i; j--)
        {
            if (numeros[j] < numeros[j - 1])
            {
                tmp = numeros[j];
                numeros[j] = numeros[j - 1];
                numeros[j - 1] = tmp;
            }
        }
    }
    cout << "Numeros ordenados\n";
    for (int i = 0; i < cantidad; i++)
    {
        cout << " " << numeros[i];
    }
    cout << endl;
    return 0;
}