#subs
def processa(frase):
    frase = frase.lower()
    parametro = frase[0]

    for i in range(len(frase)):
        if frase[i] == ' ':
           if frase[i + 1] != parametro:
               return False

    return True

#pp
frase = input()
while frase != '*':
    if processa(frase):
        print('Y')
    else:
        print('N')
    frase = input()
