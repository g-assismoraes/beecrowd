from functools import cmp_to_key
def cmp_medalhas(pais1, pais2):
    if int(pais1[1]) > int(pais2[1]) or (int(pais1[1]) == int(pais2[1]) and int(pais1[2]) > int(pais2[2]) or (int(pais1[1]) == int(pais2[1]) and int(pais1[2]) == int(pais2[2]) and int(pais1[3]) > int(pais2[3])) or (int(pais1[1]) == int(pais2[1]) and int(pais1[2]) == int(pais2[2]) and int(pais1[3]) == int(pais2[3])) and pais1[0] < pais2[0]):
        return -1
    elif int(pais1[1]) < int(pais2[1]) or (int(pais1[1]) == int(pais2[1]) and int(pais1[2]) > int(pais2[2]) or (int(pais1[1]) == int(pais2[1]) and int(pais1[2]) == int(pais2[2]) and int(pais1[3]) > int(pais2[3])) or (int(pais1[1]) == int(pais2[1]) and int(pais1[2]) == int(pais2[2]) and int(pais1[3]) == int(pais2[3])) and pais1[0] > pais2[0]):
        return +1
    else:
        return 0




qtdPaises = int(input())

paises = []
for i in range(qtdPaises):
    pais = tuple(input().split())
    paises.append(pais)

paises.sort(key=cmp_to_key(cmp_medalhas))

for i in range(qtdPaises):
    print(paises[i][0], paises[i][1], paises[i][2], paises[i][3])
