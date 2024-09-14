def contar_vocales(texto):
    texto = texto.lower()
    vocales = 'aeiou'
    total = 0
    for caracter in texto:
        for vocal in vocales:
            if caracter == vocal:
                total += 1
                break
    return total

def contar_consonantes(texto):
    texto = texto.lower()
    consonantes = 'bcdfghjklmnpqrstvwxyz'
    total = 0
    for caracter in texto:
        for consonante in consonantes:
            if caracter == consonante:
                total += 1
                break
    return total

texto = input('Ingrese el texto: ')
print('Hay', contar_vocales(texto), 'vocales en el texto ingresado')
print('Hay', contar_consonantes(texto), 'consonantes en el texto ingresado')