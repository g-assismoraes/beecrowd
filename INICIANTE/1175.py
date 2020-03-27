vetorElementos = []

for i in range(20):
    elementos = int(input())
    vetorElementos.append(elementos)
for i in range(20):
    print("N[%d] = %d" %(i, vetorElementos[19 - i]))
    i -= 1
