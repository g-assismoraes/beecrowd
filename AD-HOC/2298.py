qtdTestes = int(input())
t = 1

for i in range(qtdTestes):
    pontuacao = 0
    cartas = list()
    cartas = list(map(int, input().split()))
    cartasOrg = sorted(cartas)

    if cartasOrg[1] == cartasOrg[0] + 1 and cartasOrg[2] == cartasOrg[0] + 2 and cartasOrg[3] == cartasOrg[0] + 3 and cartasOrg[4] == cartasOrg[0] + 4:
        pontuacao = 200 + cartasOrg[0]

    elif cartasOrg[0] == cartasOrg[1] == cartasOrg[2] == cartasOrg[3] != cartasOrg[4]:
        pontuacao = 180 + cartasOrg[0]
    elif cartasOrg[4] == cartasOrg[1] == cartasOrg[2] == cartasOrg[3] != cartasOrg[0]:
        pontuacao = 180 + cartasOrg[1]

    elif cartasOrg[0] == cartasOrg[1] == cartasOrg[2] != cartasOrg[3] and cartasOrg[3] == cartasOrg[4]:
        pontuacao = 160 + cartasOrg[0]
    elif cartasOrg[2] == cartasOrg[3] == cartasOrg[4] and cartasOrg[0] == cartasOrg[1]:
        pontuacao = 160 + cartasOrg[2]

    elif cartasOrg[0] == cartasOrg[1] == cartasOrg[2] != cartasOrg[3] and cartasOrg[3] != cartasOrg[4]:
        pontuacao = 140 + cartasOrg[0]
    elif cartasOrg[1] == cartasOrg[2] == cartasOrg[3] != cartasOrg[0] != cartasOrg[4]:
        pontuacao = 140 + cartasOrg[1]
    elif cartasOrg[2] == cartasOrg[3] == cartasOrg[4] != cartasOrg[0] and cartasOrg[0] != cartasOrg[1]:
        pontuacao = 140 + cartasOrg[2]

    elif cartasOrg[0] == cartasOrg[1] != cartasOrg[2] and cartasOrg[3] == cartasOrg[4] != cartasOrg[2]:
        pontuacao = 3 * cartasOrg[3] + 2 * cartasOrg[0] + 20
    elif cartasOrg[0] == cartasOrg[1] != cartasOrg[4] and cartasOrg[2] == cartasOrg[3] != cartasOrg[4]:
        pontuacao = 3 * cartasOrg[2] + 2 * cartasOrg[0] + 20
    elif  cartasOrg[1] == cartasOrg[2] != cartasOrg[0] and cartasOrg[3] == cartasOrg[4] != cartasOrg[0]:
        pontuacao = 3 * cartasOrg[3] + 2 * cartasOrg[1] + 20


    elif cartasOrg[0] == cartasOrg[1] != cartasOrg[2] != cartasOrg[3] != cartasOrg[4]:
        pontuacao = cartasOrg[0]
    elif cartasOrg[1] == cartasOrg[2] != cartasOrg[0] != cartasOrg[3] != cartasOrg[4]:
        pontuacao = cartasOrg[1]
    elif cartasOrg[2] == cartasOrg[3] != cartasOrg[0] != cartasOrg[1] != cartasOrg[4]:
        pontuacao = cartasOrg[2]
    elif cartasOrg[3] == cartasOrg[4] != cartasOrg[0] != cartasOrg[1] != cartasOrg[2]:
        pontuacao = cartasOrg[3]



    print('Teste %d' % t)
    print(pontuacao)
    print()
    t += 1
