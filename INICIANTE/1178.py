valor = float(input())
vetorValores = []
valor = valor*2
for i in range(100):
    vetorValores.append(valor)
    print('N[%d] = %.4f'%(i, valor/2))
    valor = valor/2
