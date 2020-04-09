while True:
    try:
        qtdPessoas, qtdDatas = map(int, input(). split())
        vetorAux = [1] * qtdPessoas

        flag = False
        for i in range(qtdDatas):
            entrada = input().split()

            vetorCompara = []
            for j in range(1, qtdPessoas + 1):
                vetorCompara.append(int(entrada[j]))

            if flag == False:
                if vetorAux == vetorCompara:
                    data = entrada[0]
                    flag = True

        if flag is True:
            print(data)
        else:
            print("Pizza antes de FdI")
    except EOFError:
        break
