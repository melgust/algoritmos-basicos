#include <iostream>
using namespace std;
int main () {
	int rows, columns;
	cout << "Cuantas filas desea: ";
	cin >> rows;
	cout << "Cuantas columnas desea: ";
	cin >> columns;
	int matrix[rows][columns];
	int i, j;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < columns; j++) {
			cout << "Ingrese el numero en fila " << i + 1 << " columna " << j + 1 << ": ";
			cin >> matrix[i][j];
		}
	}
	for (i = 0; i < rows; i++) {
		for (j = 0; j < columns; j++) {
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}
