qtdAeroportos, qtdVoos = map(int, input().split())
t = 1

while qtdAeroportos != 0 and qtdAeroportos != 0:
    aeroportos = []
    for i in range(qtdVoos):
        orig, dest = map(int, input().split())
        aeroportos.append(orig)
        aeroportos.append(dest)

    aeroportos.sort()
    resposta = []
    moda = 0
    for i in range(1, qtdAeroportos + 1):
        modaAtual = aeroportos.count(i)
        if modaAtual >= moda:
            moda = modaAtual
            resposta.append(i)


    resposta.sort(key=int, reverse=True)

    respostaFinal = []
    for i in range(len(resposta)):
        if aeroportos.count(resposta[i]) == moda:
            respostaFinal.append(resposta[i])

    respostaFinal.sort()

    print('Teste %d' % t)

    if len(respostaFinal) == 1:
        print(respostaFinal[0], end=' ')
        print()
    else:
        for i in range(len(respostaFinal)):
            print(respostaFinal[i], end=' ')
        print()

    print()

    t += 1

    qtdAeroportos, qtdVoos = map(int, input().split())
