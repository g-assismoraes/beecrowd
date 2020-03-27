dinheiroInicial, numOperacoes = map(int, input().split())

D = dinheiroInicial
E = dinheiroInicial
F = dinheiroInicial

for i in range(numOperacoes):
    entrada = list(input().split())

    if len(entrada) == 3:
        operacao = entrada[0]
        jogador = entrada[1]
        quantia = int(entrada[2])


        if operacao == 'C':
            if jogador == 'F':
                F -= quantia
            elif jogador == 'D':
                D -= quantia
            elif jogador == 'E':
                E -= quantia
        elif operacao == 'V':
            if jogador == 'D':
                D += quantia
            elif jogador == 'F':
                F += quantia
            elif jogador == 'E':
                E += quantia

    else:
        operacao = entrada[0]
        jogadorRecebe = entrada[1]
        jogadorPaga = entrada[2]
        quantia = int(entrada[3])

        if jogadorRecebe == 'D':
            if jogadorPaga == 'E':
                D += quantia
                E -= quantia
            elif jogadorPaga == 'F':
                D += quantia
                F -= quantia
        elif jogadorRecebe == 'E':
            if jogadorPaga == 'D':
                E += quantia
                D -= quantia
            elif jogadorPaga == 'F':
                E += quantia
                F -= quantia
        elif jogadorRecebe == 'F':
            if jogadorPaga == 'D':
                F += quantia
                D -= quantia
            elif jogadorPaga == 'E':
                F += quantia
                E -= quantia
print(D, E, F)
