t = 1
qtdTestes = int(input())
for i in range(qtdTestes):
    acao = input()
    r, g, b = map(int, input().split())
    vetorAuxiliar = [r, g, b]
    if acao == "min":
        resposta = min(vetorAuxiliar)
    elif acao == "mean":
        resposta = (r + g + b) / 3
    elif acao == "eye":
        resposta = 0.3*r + 0.59*g + 0.11*b
    elif acao == "max":
        resposta = max(vetorAuxiliar)
    print("Caso #%d: "%t + "%d"%resposta)
    t += 1
