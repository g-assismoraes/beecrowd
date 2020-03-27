t = 0
p, r = map(int, input().split())
while p != 0 and r != 0:
    t += 1
    print('Teste %d'% t)

    x = list(map(int, input().split()))

    for i in range(r):
        linha = list(map(int, input().split()))
        n = linha[0]
        j = linha[1]
        a = linha[2:]

        y = []
        for k in range(n):
            if a[k] == j:
                y.append(x[k])

        x = y

    print(x[0])
    print()

    p, r = map(int, input().split())
