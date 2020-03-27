palavra = input().strip()
palavra = str(palavra)
palavraBase = input().strip()
palavraBase = str(palavraBase)

x = 0
qtd = 0


for i in range(len(palavra) - len(palavraBase) + 1):
    ok = False
    parametro = palavra[0 + x:len(palavraBase) + x]
    for j in range(len(palavraBase)):

        if parametro[j] == palavraBase[j]:
            ok = True
        if ok is True:
            break


    if ok is False:
        qtd += 1

    x += 1
print(qtd)
