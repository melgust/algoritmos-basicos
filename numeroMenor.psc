//Programa que solicita 10 numero y determina cual es el menor
//Autor: Melvin Cali
//Fecha: 24/07/2021
Algoritmo numeroMenor
	//variable para capturar el dato ingresado por el usuario
	Definir n Como Entero;
	//variable para almacenar el numero menor
	Definir menor, mayor Como Entero;
	Definir cantidad Como Entero;
	Escribir "Cuantos numeros quiere ingresar?";
	Leer cantidad;
	Definir i Como Entero;
	Para i <- 0 hasta cantidad - 1 Con Paso 1 Hacer
		Escribir "Ingrese el numero entero: ";
		Leer n;
		//el primer numero ingresado es el menor por defecto
		Si i = 0 Entonces
			menor <- n;
			mayor <- n;
		SiNo
			Si n < menor Entonces
				menor <- n;
			FinSi
			Si n > mayor Entonces
				mayor <- n;
			FinSi
		Fin Si
	FinPara
	Escribir "El numero menor es: ", menor;
	Escribir "El numero mayor es: ", mayor;
FinAlgoritmo