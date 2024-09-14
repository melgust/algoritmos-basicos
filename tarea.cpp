#include <iostream>
using namespace std;

#define TAMANIO 5

void ordemientoBurbuja(int datos[]);
void ordenamientoQuickShort(int datos[]);

int main() {
	int datos[TAMANIO];
	int i;
	for (i = 0; i < TAMANIO; i++) { 
		cout << "Ingrese numero: ";
		cin >> datos[i];
	}
	cout << endl;
	cout << "\t\tOrdenamiento burbuja\n";
	ordemientoBurbuja(datos);
	ordenamientoQuickShort(datos);
	return 0;
}

void ordemientoBurbuja(int datos[]) {
	int i, j, aux;
	for (i = 1; i < TAMANIO; i++) {
		for (j = 0; j < TAMANIO - i; j++) {
			if (datos[j] > datos[j + 1]) {
				aux = datos[j];
				datos[j] = datos[j + 1];
				datos[j + 1] = aux;
			}
		}
	}
	for (i = 0; i < TAMANIO; i++) {
		cout << datos[i] << "\t";
	}
	cout << endl;
}

void ordenamientoQuickShort(int datos[]) {
	
}
