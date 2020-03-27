vetorInteiros = []
for i in range(10):
    valor = int(input())
    vetorInteiros.append(valor)
    if vetorInteiros[i] < 1:
        vetorInteiros[i] = 1
    print("X[%d] = %d" %(i, vetorInteiros[i]))
