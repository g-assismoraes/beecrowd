vetorAuxiliar = []


SNM = list(map(int, input().split()))
while SNM != [0, 0, 0]:
    vetorAuxiliar.append(SNM)
    c1c2c3 = list(map(int, input().split()))
    vetorAuxiliar.append(c1c2c3)


    SNM = list(map(int, input().split()))



x = 0
y = 1
for i in range(len(vetorAuxiliar)//2):
    s = vetorAuxiliar[x][0]
    m = vetorAuxiliar[x][1]
    n = vetorAuxiliar[x][2]

    c1 = vetorAuxiliar[y][0]
    c2 = vetorAuxiliar[y][1]
    c3 = vetorAuxiliar[y][2]

    resposta = (s * c1) / (n + 1)
    resposta = resposta * abs(c2 - c3) / (m + 1)

    print('%d' % resposta)

    x += 2
    y += 2
