import random
veces = int(input('Cuantos numeros desea ingresar: '))
mayor = 0
menor = 0
for i in range(0, veces):
    numero = random.randint(1, 100)
    if i == 0:
        mayor = numero
        menor = numero
    else:
        if numero > mayor:
            mayor = numero
        if numero < menor:
            menor = numero
    print(numero, ' ', end='')
print('El mayor es ', mayor)
print('El menor es ', menor)