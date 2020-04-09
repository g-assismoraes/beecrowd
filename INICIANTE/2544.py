while True:
    try:
        entrada = int(input())

        resposta = 0
        while entrada != 1.0:
            resposta += 1
            entrada -= entrada / 2

        print(resposta)
    except EOFError:
        break
