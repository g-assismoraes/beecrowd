qtdArvores = int(input())

for i in range(qtdArvores):
    ok = True
    altura, diametro, qtdGalhos = map(int, input().split())


    if not 200 <= altura <= 300:
        ok = False
    if not 50 <= diametro:
        ok = False
    if not 150 <= qtdGalhos:
        ok = False

    if ok:
        print('Sim')
    else:
        print('Nao')
