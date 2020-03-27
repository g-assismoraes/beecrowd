from sys import maxsize
entrada = input().split()
l = int(entrada[0])
c = int(entrada[1])
m = int(entrada[2])
n = int(entrada[3])

matriz = []

for i in range(l):
    linha = list(map(int, input().split()))
    matriz.append(linha)

maior = 0
for i in range(0, l, m):
    for j in range(0, c, n):
        soma = 0
        for k in range(i, i+m):
            for l in range(j, j+n):
                soma += matriz[k][l]



        if soma > maior:
            maior = soma


print(maior)
