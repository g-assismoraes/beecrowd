qtdTestes = int(input())
vitorias = 0
for _ in range(qtdTestes):
    portaCarro = int(input())
    if portaCarro != 1:
        vitorias +=1
print(vitorias)
