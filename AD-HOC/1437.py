#subs
def foraDoEscopo(val):
    if val == -1 or val == 4:
        if val == -1:
            val = 3
        else:
            val = 0
    return val

#pp
qtdInstrucoes = int(input())
while qtdInstrucoes != 0:
    respostasPossiveis = {0: "N", 1: "L", 2: "S", 3: "O"}
    posicaoFinal = 0
    
    instrucoes = input()
    for instrucao in instrucoes:
        posicaoFinal = foraDoEscopo(posicaoFinal)
        if instrucao == "D":
            posicaoFinal += 1
        else:
            posicaoFinal -= 1
            
    posicaoFinal = foraDoEscopo(posicaoFinal)
    print(respostasPossiveis[posicaoFinal])
    
    qtdInstrucoes = int(input())
