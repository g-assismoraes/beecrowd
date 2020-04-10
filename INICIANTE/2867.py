qtdTestes = int(input())

for i in range(qtdTestes):
    base, expoente = map(int, input().split())
    numero = base**expoente
    print(len(str(numero)))
