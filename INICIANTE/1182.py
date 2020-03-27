matriz = []
colunaConsiderada = int(input())
somaOuMedia = input()
soma = 0.0
for i in range(12):
    linha = []
    for i in range(12):
        entrada = float(input())
        linha.append(entrada)
    matriz.append(linha)
for linha in range(12):
    for coluna in range(12):
        if coluna == colunaConsiderada:
            soma += matriz[linha][coluna]
if somaOuMedia == 'S':
    print('%.1f'%(soma))
if somaOuMedia == 'M':
    print('%.1f'%(soma/12))
