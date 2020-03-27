#Ler Entradas
parametros = input().split()
qtdJogadores = int(parametros[0])
qtdRodadas = int(parametros[1])
pontosDeVitoria = list(map(int, input().split()))

#Alocar matriz referencia
somas = [0]*qtdJogadores

#Preencher matriz referencia
x = 0
maxPontos = -qtdRodadas*500
for i in range(qtdJogadores):
    for j in range(qtdRodadas):
        somas[i] += pontosDeVitoria[x]
        x += qtdJogadores

#Achar o jogador vencedor
    if somas[i] >= maxPontos:
        vencedor = i + 1
        maxPontos = somas[i]
    x = 0 + i + 1

#Imprimir saida
print(vencedor)
