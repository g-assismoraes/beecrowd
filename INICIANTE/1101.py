aux = list(map(int, input().split()))
aux.sort()
a, b = aux[0], aux[1]
while a > 0 and b > 0:
    soma = 0
    for i in range(b - a + 1):
        print(a, end=" ")
        soma += a
        a += 1
    print("Sum=%d" %soma)

    aux = list(map(int, input().split()))
    aux.sort()
    a, b = aux[0], aux[1]
