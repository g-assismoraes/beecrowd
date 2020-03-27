qtdDepositos = int(input())
t = 1
while qtdDepositos != 0:
    print('Teste %d' % t)
    t += 1

    soma1 = 0
    soma2 = 0
    for i in range(qtdDepositos):
        cofre1, cofre2 = map(int, input().split())
        soma1 += cofre1
        soma2 += cofre2

        diferenca = soma1 - soma2
        print(diferenca)

    print()

    qtdDepositos = int(input())
