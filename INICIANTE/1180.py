tamanho = int(input())
vetorNumeros = []*tamanho
numeros = list(map(int, input().split()))
for i in range(tamanho):
    vetorNumeros.insert(i, numeros[i])
    if numeros[i] == min(numeros):
        pos = i
print('Menor valor: %d'%(min(vetorNumeros)))
print('Posicao: %d'%pos)
