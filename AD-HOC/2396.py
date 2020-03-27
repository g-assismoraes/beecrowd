qtdCarros, qtdVoltas = map(int, input().split())

somas = []
for i in range(qtdCarros):
    tempos = list(map(int, input().split()))

    soma = 0
    for i in range(qtdVoltas):
        soma += tempos[i]
    somas.append(soma)

somasOrg = sorted(somas)

for i in range(len(somas)):
    if somas[i] == somasOrg[0]:
        primeiro = i + 1
    elif somas[i] == somasOrg[1]:
        segundo = i + 1
    elif somas[i] == somasOrg[2]:
        terceiro = i + 1

print(primeiro)
print(segundo)
print(terceiro)
