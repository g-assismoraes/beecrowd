# Ler matriz M de entrada
l, c, m, n = map(int, input().split())
M = [None] * l
for lin in range(l):
    M[lin] = list(map(int, input().split()))



# Calcular matriz acumulada A
A = [None] * l
for lin in range(l):
    A[lin] = [None] * c
    for col in range(c):
        if lin == 0:
            if col == 0:
                A[lin][col] = M[lin][col]
            else:
                A[lin][col] = A[lin][col - 1] + M[lin][col]
        else:
            if col == 0:
                A[lin][col] = A[lin-1][col] + M[lin][col]
            else:
                A[lin][col] = A[lin-1][col] + A[lin][col-1] - A[lin-1][col-1] + M[lin][col]



# Inicializar soma máxima com um valor bem baixo
soma_maxima = -1

# Para cada subconjunto de dados faça
for i in range(l - m + 1):
    x, y = 0, 0
    for j in range(c - n + 1):
        x = i + m - 1
        y = j + n - 1


        # Utilizar matriz A para obter somatório no subconjunto
        if i == 0:
            if j == 0:
                soma = A[x][y]
            else:
                soma = A[x][y] - A[x][j - 1]
        else:
            if j == 0:
                soma = A[x][y] - A[i - 1][y]
            else:
                soma = A[x][y] - A[i - 1][y] - A[x][j - 1] + A[i - 1][j - 1]


            # Se somatório atual for maior que soma máxima conhecida então atulize soma máxima
        if soma > soma_maxima:
            soma_maxima = soma

# Mostrar maior colheita obtida
print(soma_maxima)
