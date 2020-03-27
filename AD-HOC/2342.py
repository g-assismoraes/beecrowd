limite = int(input())
entrada = input().split()
algarismo1 = int(entrada[0])
operador = entrada[1]
algarismo2 = int(entrada[2])
if operador == '+':
    soma = algarismo1 + algarismo2
    if soma <= limite:
        print('OK')
    else:
        print('OVERFLOW')
elif operador == '*':
    produto = algarismo1 * algarismo2
    if produto <= limite:
        print('OK')
    else:
        print('OVERFLOW')
