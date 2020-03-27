l = int(input())

#criar matriz
matriz = []
for i in range(l):
    linha = list(map(int, input().split()))
    matriz.append(linha)

#criar um parametro(uma soma a ser comparada) por meio da ultima linha lida
parametro = 0
for i in range(l):
    parametro += linha[i]

#comparar parametro com a soma das linhas e soma das colunas
okLinha, okColuna = True, True
for i in range(l):
    somaL = 0
    somaC = 0
    for j in range(l):
        somaL += matriz[i][j]
        somaC += matriz[j][i]
    if somaL != parametro:
        okLinha = False
    elif somaC != parametro:
        okColuna = False

#comparar parametro com a diagonal esquerda --> direita
somaD1 = 0
okDiagonal1 = True
for i in range(l):
    somaD1 += matriz[i][i]
if somaD1 != parametro:
    okDiagonal1 = False

#comparar parametro com a diagonal direita --> esquerda
x = 0
somaD2 = 0
okDiagonal2 = True
for i in range(l-1, -1, -1):
    somaD2 += matriz[i][x]
    x += 1
if somaD2 != parametro:
    okDiagonal2 = False

#imprimir saida
if okLinha is True and okColuna is True and okDiagonal1 is True and okDiagonal2 is True:
    print(parametro)
else:
    print('-1')
