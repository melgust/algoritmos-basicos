from typing import Text


lista = []
while True:    
    x = int(input('Ingrese numero: '))
    lista.append(x)
    s = input('Desea agregar otro numero presione s de lo contrario cualquier tecla: ')
    if s != 's' and s != 'S':
        break
for item in lista:
    if item % 2 != 0:
        print(item)