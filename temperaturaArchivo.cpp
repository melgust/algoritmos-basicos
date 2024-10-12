#include <iostream>
#include <fstream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
    int total = 24;
    srand((unsigned)time(NULL));
    remove("data.txt");
    fstream archivoEscritura("data.txt", ios::out);
    if (archivoEscritura.is_open())
    {
        for (int i = 0; i < total; i++)
        {
            int random = rand() % 100;
            random -= 20;
            archivoEscritura << random;
            if (i != total - 1) {
                 archivoEscritura << endl;
            }
        }
        archivoEscritura.close();
    }
    string linea;
    int datos[total];
    fstream archivo("data.txt");
    if (archivo.is_open())
    {
        int i = 0;
        while (getline(archivo, linea))
        {
            int temperatura = atoi(linea.c_str());
            datos[i] = temperatura;
            i++;
        }
        archivo.close();
    }
    else
    {
        cout << "No se puede abrir el archivo";
    }
    cout << "-30       0         30         60         90         120" << endl;
    for (int i = 0; i < total; i++)
    {
        int asteriscos = 0;
        int temperatura = datos[i];
        if (temperatura < 0)
        {
            int tmp = abs(temperatura);
            asteriscos = (tmp / 3);
            for (int j = 0; j < 10 - asteriscos; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < asteriscos; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 0; j < 10; j++)
            {
                cout << " ";
            }
        }
        cout << "|";
        if (temperatura > 0)
        {
            asteriscos = (temperatura / 3);
            for (int j = 0; j < asteriscos; j++)
            {
                cout << "*";
            }
        }
        cout << "\n";
    }
    cout << "\n";
    return 0;
}