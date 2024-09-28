from random import randint
array = []
for i in range(100):
    number = randint(0, 1000) + 1
    array.append(number)
print('Los numeros generados son: ')
menor = array[0]
mayor = array[0]
for n in array:
    if n < menor:
        menor = n
    if n > mayor:
        mayor = n
    print(n)
print('El mayor es: ', mayor)
print('El menor es: ', menor)