qtdParticipantes = int(input())
qtdMin = int(input())

vetorPontos = []
for i in range(qtdParticipantes):
    vetorPontos.append(int(input()))
vetorPontos.sort(reverse=True)

resposta = qtdMin

for j in range(qtdMin, len(vetorPontos)):
    if vetorPontos[j] == vetorPontos[qtdMin-1]:
        resposta += 1

print(resposta)
