maximo = 1
posicao = 1
for i in range(100):
    entrada = int(input())
    if maximo < entrada:
        maximo = entrada
        posicaoMax = posicao
    posicao += 1
print(maximo)
print(posicaoMax)
