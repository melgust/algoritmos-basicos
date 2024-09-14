#include<iostream>
#include<cstdlib>
#include <ctime>

using namespace std;

int main() {
	int i;
	int number;
	srand(time(NULL));
	//con % 10 el rango que genera es de 0 a 9, 
	//se suma uno para discriminar el cero y el rango sera de 1 a 10
	number = (rand() % 10) + 1; 
	cout << "Voy a imprimir " << number << " asteriscos " << endl;
	for (i = 0; i < number; i++) {
		cout << "*";
	}
	cout << endl;
	return 0;
}

