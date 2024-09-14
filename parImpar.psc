//Determina si un numero entero ingresado es par o impar
Algoritmo parImpar
	Definir numero Como Entero;
	Escribir "Ingrese un numero entero: ";
	Leer numero;
	Definir residuo Como Entero;
	residuo <- numero MOD 2;
	Si residuo = 0 Entonces
		Escribir "El numero ", numero, " es par";
	SiNo
		Escribir "El numero ", numero, " no es par, es impar";
	Fin Si
FinAlgoritmo
