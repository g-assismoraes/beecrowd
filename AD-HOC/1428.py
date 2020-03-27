casos = int(input())
for i in range(casos):
    linhasXColunas = input().split()
    linha = int(linhasXColunas[0])
    coluna = int(linhasXColunas[1])
    x = (linha)//3
    y = (coluna)//3
    total =x * y
    print(total)
