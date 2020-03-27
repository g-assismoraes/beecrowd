#Ler e processar entrada
entrada = input()
cartas = entrada.split()
carta1 = int(cartas[0])
carta2 = int(cartas[1])
#Se o jogador possuir uma dupla de iguais, escrever carta de igual valor
if carta1 == carta2:
    print(carta1)
#Se o jogador possuir uma dupla de valores diferentes, escrever carta igual a de maior valor
else:
    if carta1 < carta2:
        carta1 = carta2
    print(carta1)
