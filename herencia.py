class Animal(): #clase padre

    nombre = ''
    peso = 0.0

    def __init__(self, nombre, peso):
        self.nombre = nombre
        self.peso = peso
        
    def producirSonido(self):
        print('Hola')

    def __add__(self, otro):
        return self.peso + otro.peso

    def __str__(self):
        return "Nombre: {0} y mi peso es: {1} lb.".format(self.nombre, self.peso)

class Perro(Animal): #clase hija que hereda Animal

    def __init__(self, nombre, peso):
        super().__init__(nombre, peso)

    def producirSonido(self):
        print('Guau guau, I\'m', self.nombre)

class Gallina(Animal):

    def __init__(self, nombre, peso):
        super().__init__(nombre, peso)

    def producirSonido(self):
        print('qui qui ri qui, I\'m', self.nombre)

boby = Perro('Boby', 45.5)
boby.producirSonido()
pioLindo = Gallina('Cricri', 3.5)
pioLindo.producirSonido()

print('El peso a transportar es', boby + pioLindo)
print(boby)
print(pioLindo)