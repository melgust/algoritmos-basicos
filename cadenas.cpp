#include <iostream>
#include <string>
using namespace std;
int main() {
    string texto;
    string consonantes = "bcdfghjklmnpqrstvwxyz";
    cout << "Ingrese texto: ";
    getline(cin, texto);
    for (int i = 0; i < texto.length(); i++)
    {
        for (int j = 0; j < consonantes.length(); j++)
        {
            if (tolower(texto[i]) == consonantes[j]) {
                texto[i] = '_';
                break;
            }
        }
    }
    cout << texto << endl;
    return 0;
}