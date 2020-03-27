#Ler teste
t = 1
aplicacoes = int(input())
#Enquanto a leitura for diferente de -1...
while aplicacoes != -1:
    #Escrever id dos casos de teste
    print('Teste %d'%(t))
    t += 1
    #computar a quantidade de recortes
    produzidos = (1 + 2**aplicacoes)*(1 + 2**aplicacoes) #(1 + 2**aplicacoes)**2
    print(produzidos)
    print()
    aplicacoes = int(input())
