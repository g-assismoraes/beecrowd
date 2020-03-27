'''
Empiricamente percebe-se que em todos os casos possiveis a soma das notas dividido por sua quantidade acarrenta em
divisao inteira se o caso for possivel.
Nota-se tambem que o numero  de tentativas se da pela nota maior que essa divisao subtraida da propria e acrescida de 1
'''
try:
    qtdNotas = int(input())
    while qtdNotas > 1 and qtdNotas < 10001:
        notas = list(map(int, input().split()))

        soma = 0
        for i in range(qtdNotas):
            soma += notas[i]
        parametro = soma//qtdNotas

        resposta = 0
        if soma % qtdNotas != 0:
            resposta = -1
            print(resposta)
        else:
            for i in range(qtdNotas):
                if notas[i] > parametro:
                    resposta += notas[i] - parametro

            print(resposta + 1)

        qtdNotas = int(input())
except:
    pass
