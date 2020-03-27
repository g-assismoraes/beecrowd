#Fazer entradas e preparacoes necessarias
qtdPesos = int(input())
pesos = list(map(int, input().split()))
pesos.append(0)
pesos.sort(key=int)
ok = True

#conferir se as caixas podem subir em sequencia, inclusive se a primeira e mais leve pode subir vazia
i = 1
while i <= qtdPesos and ok is True:
    if pesos[i] - pesos[i-1] > 8:
        ok = False
    i += 1

#Imprimir saída
if ok is True:
    print('S')
else:
    print('N')
