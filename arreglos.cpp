#include <iostream>
using namespace std;
int main () {
	int array[7];
	//3	6	8	1	0	4	2
	int i;
	for (i = 0; i < 7; i++) {
		cout << "Ingrese numero en la posicion " << i + 1 << ": ";
		cin >> array[i];
	}
	for (i = 0; i < 7; i++) {
		cout << array[i] << endl;
	}
	return 0;
}
