#include <iostream>
#include <string.h>
using namespace std;

void procedimientoSumar(int a, int b);
int funcionSumar(int a, int b);
int funcionContarVocales(string s);
int funcionContarConsonantes(string s);
int ejemploRecursividad(int numero);

int main() {
	int a, b;
	cout << "Ingrese primer numero: ";
	cin >> a;
	cout << "Ingrese segundo numero: ";
	cin >> b;
	cout << endl;
	procedimientoSumar(a, b);
	cout << endl;
	int x = funcionSumar(a, b);
	cout << "El resultado de la suma es: " << x;
	cout << endl;
	string frase;
	cout << "Ingrese una frase: ";
	getline(cin, frase);
	int cantidadVocal = funcionContarVocales(frase);
	int cantidadConsonantes = funcionContarConsonantes(frase);
	cout << endl;
	cout << "Hay " << cantidadVocal << " vocales \n";
	cout << "Hay " << cantidadConsonantes << " consonantes \n";
	int n;
	cout << "Ingrese numero: ";
	cin >> n;
	int r = ejemploRecursividad(n);
	cout << "El resultado de recursividad es: " << r;
	return 0;
}

void procedimientoSumar(int a, int b) {
	int r = a + b;
	cout << "La suma es: " << r;
}

int funcionSumar(int a, int b) {
	int r = a + b;
	return r;
}

int funcionContarVocales(string s) {
	int conteo;
	string vocales = "aeiouAEIOU";
	int longitudFrase = s.length();
	int longitudVocales = vocales.length();
	int i, j;
	for (i = 0; i < longitudFrase; i++) {
		for (j = 0; j < longitudVocales; j++) {
			if (s[i] == vocales[j]) {
				conteo++;
				break;
			}
		}
	}
	return conteo;
}

int funcionContarConsonantes(string s) {
	int conteo;
	string consonantes = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
	int longitudFrase = s.length();
	int longitudConsonantes = consonantes.length();
	int i, j;
	for (i = 0; i < longitudFrase; i++) {
		for (j = 0; j < longitudConsonantes; j++) {
			if (s[i] == consonantes[j]) {
				conteo++;
				break;
			}
		}
	}
	return conteo;
}

int ejemploRecursividad(int numero) {
	if (numero <= 0) {
		return 0;
	}
	return numero + ejemploRecursividad(numero - 1);
}
