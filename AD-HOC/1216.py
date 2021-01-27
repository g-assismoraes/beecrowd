soma, qtd = 0.0, 0
while True:
    try:
        nome_lixo = input()
        soma += int(input())
        qtd+= 1
    except EOFError:
        print("%.1f" % (soma / qtd))
        break
