qtdPecas = int(input())
pecas = list(map(int, input().split()))
for i in range(1, qtdPecas+1):
    if pecas.count(i) == 0:
        falta = i
print(falta)
