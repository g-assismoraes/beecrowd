#Par ou ímpar

t = 1
#Enquanto houver um caso de teste...
n = int(input())
while n != 0:
    #Escrever id do caso de teste
    print('Teste %d'%t)
    t += 1
    #Ler o nome dos participantes
    nome1 = input()
    nome2 = input()
    #Para cada partida...
    for _ in range(n):                                  # _ significa que vc nao vai usar
        #Ler quantidade de dedos
        linha = input()
        palavras = linha.split()
        dedos1 = int(palavras[0])               #dedos1, dedos2 = map(int, imput().split()
        dedos2 = int(palavras[1])
        #Decidir vencedor e escrever o nome do vencedor
        if (dedos1 + dedos2)%2 == 0:    #or & 1 == 0
            print(nome1)
        else:
            print(nome2)
    #Deixar linha em branco
    print()
    n = int(input())
