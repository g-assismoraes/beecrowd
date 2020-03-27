vetorValores = []
for i in range(100):
    valor = float(input())
    vetorValores.append(valor)
    if valor <= 10.0:
        print('A[%.d] = %.1f'%(i, valor))
