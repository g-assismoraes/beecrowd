parametros = input().split()
qtdCarimbadas = int(parametros[1])
qtdCompradas = int(parametros[2])
carimbadas = list(map(int, input().split()))
compradas = list(map(int, input().split()))

faltantes = 0
for i in range(qtdCarimbadas):
    parametro = carimbadas[i]
    if parametro not in compradas:
        faltantes += 1

print(faltantes)
