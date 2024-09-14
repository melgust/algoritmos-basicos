'''
* @brief Determines if an entered integer is divisible by the user's choice
'''
number = int(input("Ingrese un numero entero: "))
print("1. Comprobar divisibilidad entre 3")
print("2. Comprobar divisibilidad entre 5")
print("3. Comprobar divisibilidad entre 7")
print("4. Comprobar divisibilidad entre 11")
option = int(input("Escriba el numero de su opcion: "))
if option == 1:
	if number % 3 == 0:
		print("El numero ", number, " es divisible por 3")
	else:
		print("El numero ", number, " no es divisible por 3")
elif option == 2:
	if number % 5 == 0:
		print("El numero ", number, " es divisible por 5")
	else:
		print("El numero ", number, " no es divisible por 5")
elif option == 3:
	if number % 7 == 0:
		print("El numero ", number, " es divisible por 7")
	else:
		print("El numero ", number, " no es divisible por 7")
elif option == 4:
	if number % 11 == 0:
		print("El numero ", number, " es divisible por 11")
	else:
		print("El numero ", number, " no es divisible por 11")
else:
	print("Creo que tienes un problema con la lectura")
