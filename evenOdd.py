'''
* @brief example for if statement, determines if a number entered by the user is even or odd 
'''
number = int(input('Ingrese un numero entero: '))
residue = number % 2
if residue == 0:
    print('El numero', number, 'es par')
else:
    print('El numero', number, 'no es par, es impar')
    