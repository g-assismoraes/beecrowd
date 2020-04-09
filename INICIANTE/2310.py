qtdTestes = int(input())

totalSaques = totalSaquesOk = totalBloqueios = totalBloqueiosOk = totalAtaques = totalAtaquesOk = 0
for i in range(qtdTestes):
    nome = input()

    #tentativas e sucessos por jogador
    tSaques, tBloqueios, tAtaques = map(int, input().split())
    sSaques, sBloqueios, sAtaques = map(int, input().split())

    #total
    totalSaques += tSaques
    totalSaquesOk += sSaques
    totalBloqueios += tBloqueios
    totalBloqueiosOk += sBloqueios
    totalAtaques += tAtaques
    totalAtaquesOk += sAtaques

percentualSaques = totalSaquesOk / totalSaques * 100
percentualBloqueios = totalBloqueiosOk / totalBloqueios * 100
percentualAtaques = totalAtaquesOk / totalAtaques * 100

print("Pontos de Saque: %.2f " % percentualSaques + "%.")
print("Pontos de Bloqueio: %.2f " % percentualBloqueios + "%.")
print("Pontos de Ataque: %.2f " %percentualAtaques + "%.")
