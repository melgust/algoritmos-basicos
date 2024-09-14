#include <iostream>
#include <string.h>
using namespace std;
int main () {
	char sentense[30];
	cout << "Ingrese una palabara: ";
	cin.getline(sentense, 30, '\n');
	cout << "Usted ingreso: " << sentense << endl;
	int lenght = strlen(sentense);
	cout << "La longitud de la palabra es: " << lenght;
	return 0;
}
