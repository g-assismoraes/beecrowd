qtdLinhas = int(input())
qtdColunas = int(input())

if (qtdLinhas % 2 == 0 and qtdColunas % 2 == 0) or (qtdColunas % 2 != 0 and qtdLinhas % 2 != 0):
    print('1')
else:
    print('0')
