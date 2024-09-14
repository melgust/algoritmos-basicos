#include <iostream>
#include <string.h>
#include <fstream>
#include <cstdlib>
using namespace std;
int main () {
ofstream salida("salida2.txt", ios::out);
if (!salida) {
cout << "No se pudo abrir el archivo " << endl;
exit(EXIT_FAILURE);
}
cout << "Escriba nombre y edad \n"
<< "Para dejar de ingresar datos, presione la tecla ? seguido de enter"
<< endl;
string nombre;
int edad;
while (cin >> nombre >> edad)
{
salida << nombre << " " << edad << endl;
cout << "?";
}
return 0;
}