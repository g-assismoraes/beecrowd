qtdCriancas = int(input())

boneca = carrinho = 0
for i in range(qtdCriancas):
    nome, sexo = input().split()

    if sexo == "F":
        boneca += 1
    elif sexo == 'M':
        carrinho += 1

print("%d carrinhos" % carrinho)
print('%d bonecas' % boneca)
