numNotas = 0
numerador = 0
mediaFinal = 0
while numNotas < 2:
    nota = float(input())
    if 0 > nota or 10< nota:
        print('nota invalida')
    else:
        numerador += nota
        numNotas += 1
        mediaFinal = numerador/2
print('media = %.2f'%(mediaFinal))
