t = 1
tAldo = 0
tBeto = 0
qtdRodadas = int(input())
#Enquanto a quantidade de rodadas for diferente de 0...
while qtdRodadas != 0:
#Identificar teste
    print('Teste %d'% t)
    t += 1
#Para a quantidade de rodadas, ler as cartas viradas...
    for _ in range(qtdRodadas):
        entrada = input()
        cartasViradas = entrada.split()
        aldo = int(cartasViradas[0])
        beto = int(cartasViradas[1])
        tAldo += aldo
        tBeto += beto
#Printar saida
    if tAldo > tBeto:
        print('Aldo')
        print()
    elif tBeto > tAldo:
        print('Beto')
        print()
#Esvaziar acumulo
    tAldo = 0
    tBeto = 0
    qtdRodadas = int(input())
