//programa que imprime X cantidad de asteriscos, x es un numero aleatorio
Algoritmo ejemploFor
	Definir numero Como Entero;
	numero <- azar(10);
	Escribir "Voy a imprimir ", numero, " asteriscos ";
	Definir i Como Entero;
	Para i<-0 Hasta numero - 1 Con Paso 1 Hacer
		Imprimir Sin Saltar "*";
	Fin Para
	Escribir ""; //cambio de linea
FinAlgoritmo
