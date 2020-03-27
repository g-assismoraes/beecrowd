vetor = [0]*10
valor = int(input())
for i in range(0, 10):
    vetor[i] = valor
    valor = valor*2
    print('N[%d] = %d'%(i, vetor[i]))
