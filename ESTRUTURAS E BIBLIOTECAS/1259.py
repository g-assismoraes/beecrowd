qtdEntradas = int(input())
pares = []
impares = []
for i in range(qtdEntradas):
    num =int(input())
    if num % 2 == 0:
        pares.append(num)
    else:
        impares.append(num)
pares.sort()
impares.sort(key=int, reverse=True)
for i in range(len(pares)):
    print(pares[i])
    i += 1
for i in range(len(impares)):
    print(impares[i])
    i += 1
