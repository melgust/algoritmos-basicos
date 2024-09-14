from random import randint

from black import out
number = randint(1,5)
print('El numero generado es: ', number)
if number == 1:
    print("Se genero el uno\n")
elif number == 2:
    print("Se genero el dos\n")
elif number == 3:
    print("Se genero el tres\n")
elif number == 4:
    print("Se genero el cuatro\n")
else:
    print("Se genero el cinco\n")