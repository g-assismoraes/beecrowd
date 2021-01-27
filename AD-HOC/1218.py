#subs
def cria_mat(conteudos):
    x = 0
    qtd = len(conteudos) // 2

    mat = []
    for i in range(qtd):
        linha = ['', '']
        mat.append(linha)

    for i in range(qtd):
        mat[i][0] = conteudos[x]
        mat[i][1] = conteudos[x + 1]
        x += 2
    return mat, qtd

def consulta(consultar, dados, qtd):
    t, f, m = 0, 0, 0
    for i in range(qtd):
        if dados[i][0] == consultar:
            t += 1
            if dados[i][1] == 'F':
                f += 1
            else:
                m += 1
    return t, f, m
#pp

contador = 1
while True:
    try:
        consultar = input()
        conteudos = list(map(str, input().split()))
        
        if contador > 1:
            print()

        dados = []
        dados, qtd_sapatos = cria_mat(conteudos)

        total, f, m = consulta(consultar, dados, qtd_sapatos)

        print('Caso %d:' % contador)
        print('Pares Iguais: %d' % total)
        print('F: %d' % f)
        print('M: %d' % m)

        contador += 1
    except EOFError:
        break
