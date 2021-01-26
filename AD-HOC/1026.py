while True:
    try:
        a, b = map(int, input().split())
        stringa = format(a, "032b")
        stringb = format(b, "032b")

        resposta = ''
        for i in range(32):
            if stringa[i] == '0' and stringb[i] == '0' or stringa[i] == '1' and stringb[i] == '1':
                resposta += '0'
            else:
                resposta += '1'

        resposta = int(resposta, 2)
        print(resposta)

    except EOFError:
        break
