matriz = []
for i in range(5):
    entrada = list(map(int, input().split()))
    matriz.append(entrada)


qtdConjuntos = int(input())



somas = []
for i in range(1, len(matriz[0])):
    for j in range(1, len(matriz[1])):
        for k in range(1, len(matriz[2])):
            for l in range(1, len(matriz[3])):
                for m in range(1, len(matriz[4])):
                    s = matriz[0][i] + matriz[1][j] + matriz[2][k] + matriz[3][l] + matriz[4][m]
                    somas.append(s)

somas.sort(key=int, reverse=True)


resposta = 0
for x in range(qtdConjuntos):
    resposta += somas[x]

print(resposta)
