from random import randint

number = randint(1,10)
print("Voy a imprimir ", number, " asteriscos ")
for i in range(number):
	print("*", end = "") #end="" evita el salto de linea 
# cambio de linea
print("")