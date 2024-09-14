def procedimientoSumar(a, b):
    r = a + b;
    print('La suma es: ', r)

def funcionSumar(a, b):
    r = a + b
    return r

def funcionContarVocales(oracion):
    vocales = "aeiouAEIOU"
    conteo = 0
    for caracter in oracion:
        for vocal in vocales:
            if caracter == vocal:
                conteo = conteo + 1
    return conteo

def funcionContarConsonantes(oracion):
    consonantes = 'bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ'
    longitudOracion = len(oracion)
    longitudConsonantes = len(consonantes)
    i = 0
    conteo = 0
    while i < longitudOracion:
        j = 0        
        while j < longitudConsonantes:
            if oracion[i] == consonantes[j]:
                conteo = conteo + 1
                break
            j = j + 1
        i = i + 1
    return conteo

#recursividad
def ejemploRecursividad(numero): 
    if numero <= 0:
        return 0
    return numero + ejemploRecursividad(numero - 1)

#inicia programa principal
a = input('Ingrese una frase: ')
cantidadVocal = funcionContarVocales(a)
print('Hay ', cantidadVocal, ' vocales en la oracion ingresada')
cantidadConsonante = funcionContarConsonantes(a)
print('Hay ', cantidadConsonante, ' consonantes en la oracion ingresada')
print('Ejemplo de recursividad')
x = int(input('Ingrese un numero: '))
r = ejemploRecursividad(x)
print('El resultado de recursividad es: ', r)