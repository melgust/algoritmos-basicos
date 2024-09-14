path = 'numero.txt'
file = open(path, 'r')
content = file.read()
file.close()
n = int(content)
if (n % 2 == 0) :
    print(n, 'es par')
else:
    print(n, 'no es par')

path_new_file = 'out.txt'
fileout = open(path_new_file, 'w')
name = input('Escribe tu nombre: ')
fileout.write(name)
fileout.close()
#'r' : use for reading
#'w' : use for writing
#'x' : use for creating and writing to a new file
#'a' : use for appending to a file
#'r+' : use for reading and writing to the same file