somaLinha, somaColuna = 0, 0
l, c = map(int, input().split())

matriz = []
for i in range(l):
    somaAtual = 0
    linha = list(map(int, input().split()))
    matriz.append(linha)

for i in range(l):
    somaL = 0
    for j in range(c):
        somaL += matriz[i][j]
        if somaL > somaLinha:
            somaLinha = somaL

for i in range(c):
    somaC = 0
    for j in range(l):
        somaC += matriz[j][i]
        if somaC > somaColuna:
            somaColuna = somaC

if somaColuna > somaLinha:
    print(somaColuna)
else:
    print(somaLinha)
