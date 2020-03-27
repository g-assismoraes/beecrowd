referencia = int(input())
x = 0
for i in range(1000):
    print('N[%d] = %d'%(i, x))
    x += 1
    if x == referencia:
        x = 0
