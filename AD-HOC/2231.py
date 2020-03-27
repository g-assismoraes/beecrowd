#Ler M, N
t = 0
n, m = map(int, input().split())

#Para cada caso de teste faça
while n != 0 and m != 0:
    t += 1
    print('Teste %d' % t)
    #Ler valores da lista L
    L = []
    for i in range(n):
        L.append(int(input()))

    #Calcular lista acumulada A
    A = [None] * n
    A[0] = L[0]
    for i in range(1, n):
        A[i] = A[i - 1] + L[i]

    #Inicializar menor média conhecida
    menor_media = 10000 * 200 + 1
    #Inicializar maior média conhecida
    maior_media = 10000 * -200 - 1
    #Para todos os subconjuntos de tamanho M faça
    for inicio in range(n - m + 1):
        # Utilizar lista acumulada para ohter somas
        fim = inicio + m - 1
        if inicio == 0:
            soma = A[fim]
        else:
            soma = A[fim] - A[inicio - 1]

        #Calcular média
        media_atual = soma/m
        #Manter média se maior que a obtida até o momento
        if media_atual > maior_media:
            maior_media = media_atual

        #Manter média se menor que  a obtida até o momento
        if media_atual < menor_media:
            menor_media = media_atual

    #Mostrar melhores médias
    print('%d %d' % (menor_media, maior_media))
    print()
    n, m = map(int, input().split())
