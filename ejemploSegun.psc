//muestra al usuario varias opciones de divisibilidad de un numero ingresado, el usuario debe elegir
Algoritmo ejemploSegun
	Definir numero Como Entero;
	Escribir "Ingrese un numero entero: ";
	Leer numero;
	Definir opcion Como Entero;
	Escribir "1. Comprobar divisibilidad entre 3";
	Escribir "2. Comprobar divisibilidad entre 5";
	Escribir "3. Comprobar divisibilidad entre 7";
	Escribir "4. Comprobar divisibilidad entre 11";
	Escribir "Escriba el numero de su opcion: ";
	Leer opcion;
	Segun opcion Hacer
		1:
			Si numero MOD 3 = 0 Entonces
				Escribir "El numero ", numero, " es divisible por 3";
			SiNo
				Escribir "El numero ", numero, " no es divisible por 3";
			Fin Si
		2:
			Si numero MOD 5 = 0 Entonces
				Escribir "El numero ", numero, " es divisible por 5";
			SiNo
				Escribir "El numero ", numero, " no es divisible por 5";
			Fin Si
		3:
			Si numero MOD 7 = 0 Entonces
				Escribir "El numero ", numero, " es divisible por 7";
			SiNo
				Escribir "El numero ", numero, " no es divisible por 7";
			Fin Si
		4:
			Si numero MOD 11 = 0 Entonces
				Escribir "El numero ", numero, " es divisible por 11";
			SiNo
				Escribir "El numero ", numero, " no es divisible por 11";
			Fin Si
		De Otro Modo:
			Escribir "Creo que tienes un problema con la lectura";
	Fin Segun
FinAlgoritmo
