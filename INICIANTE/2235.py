#Ler entradas
entradas = input()
creditos = entradas.split()
credito1 = int(creditos[0])
credito2 = int(creditos[1])
credito3 = int(creditos[2])
#Condicionar a soma/diferenca = 0 ou iguais entre si e printar a saida
if credito1 == credito2 or credito1 == credito3 or credito2 == credito3:
    print('S')
elif (credito1 - credito2 + credito3) == 0 or (-credito1 + credito2 - credito3) == 0 or (credito1 + credito2 - credito3) == 0:
    print('S')
elif (credito1 -credito2 -credito3) == 0 or (-credito1 + credito2 + credito3) == 0 or (credito1 - credito2 + credito3) == 0:
    print('S')
else:
    print('N')
