x, y = map(int, input().split())

resposta, auxiliar = 1, 0
while auxiliar != y:
    for i in range(x - 1):
        print(resposta, end=' ')
        resposta += 1
    print(resposta)
    resposta += 1
    auxiliar += x
