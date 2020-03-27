#subs
def checar(valor, qPaes, paes, qPessoas):
    total = 0
    for i in range(qPaes):
        total += paes[i]//valor
    return total >= qPessoas


#PP
qtdPessoas = int(input())
qtdPaes = int(input())
tamPaes = list(map(int, input().split()))
tamPaes.sort(key=int, reverse=True)
maior = tamPaes[0]
menor = 0
while menor <= maior:
    valorCentral = (menor + maior)//2
    if checar(valorCentral, qtdPaes, tamPaes, qtdPessoas):
        menor = valorCentral + 1
        resposta = valorCentral
    else:
        maior = valorCentral - 1

print('%d'%resposta)
