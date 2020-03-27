qtdElementos = int(input())
elementos = list(map(int, input().split()))
qtdPA = 1

if len(elementos) > 1:
    razao = elementos[1] - elementos[0]
    for i in range(1, (qtdElementos-1)):
        if elementos[i + 1] - elementos[i] != razao:
            qtdPA += 1
            if i != qtdElementos - 2:
                razao = elementos[i + 2] - elementos[i + 1]


print(qtdPA)
