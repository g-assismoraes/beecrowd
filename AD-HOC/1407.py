qtdSorteios, tamAposta, limAposta = map(int, input().split())
while qtdSorteios != 0 and tamAposta != 0 and limAposta != 0:
    min = tamAposta * qtdSorteios
    listaAux = list()
    listAux = list()
    menosSorteados = list()
    for i in range(qtdSorteios):
        listAux = list(map(int, input().split()))
        for k in listAux:
            listaAux.append(k)
    for k in range(1, limAposta+1):
        if min > listaAux.count(k):
            min = listaAux.count(k)
    for x in range(1, limAposta+1):
        if listaAux.count(x) == min:
            menosSorteados.append(x)
    if len(menosSorteados) > 1:
        for y in range(len(menosSorteados) - 1):
            print(menosSorteados[y], end=" ")
    print(menosSorteados[len(menosSorteados) - 1])
    qtdSorteios, tamAposta, limAposta = map(int, input().split())
