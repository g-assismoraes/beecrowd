qtdElementos = int(input())
elementos = list(map(int, input().split()))
elementosZ = [0]
for i in range(qtdElementos):
    elementosZ.append(elementos[i])
    
if qtdElementos == 1:
    print('1')

else:
    qtdEscadinhas = 0
    x = 0
    razao = elementosZ[qtdElementos - x] - elementosZ[qtdElementos - 1 - x]
    

    while qtdElementos - 1 - x != 1:
        x += 1
        razaoAtual = elementosZ[qtdElementos - x] - elementosZ[qtdElementos - 1 - x]
        if razaoAtual != razao:
            qtdEscadinhas += 1
            razao = razaoAtual
           

    print(qtdEscadinhas + 1)
