#subs
def separaPorChaves(bs, keys):
    respostas = dict()
    for i in range(bs):
        respostas[i] = list()
    for chave in respostas.keys():
        listaAuxiliar = list()
        for elemento in keys:
            if elemento % bs == chave:
                listaAuxiliar.append(elemento)
                respostas[chave] = listaAuxiliar
    return respostas

def mostraResposta(vals, bs):
    for i in range(bs):
        listaAux = vals[i]
        print(i, end=" ")
        print("->", end=" ")
        if len(listaAux) == 0:
            print('\\')
        else:
            for elemento in listaAux:
                print(elemento, end=" ")
                print("-> ", end="")
            print('\\')
    return None


#pp
qtdTestes = int(input())
for i in range(qtdTestes):
    base, qtdChaves = map(int, input().split())
    chaves = list(map(int, input().split()))

    dicionarioRespostas = separaPorChaves(base, chaves)
    mostraResposta(dicionarioRespostas, base)
    if i != qtdTestes - 1:
        print()
