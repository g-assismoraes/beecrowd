qtdTestes = int(input())
for i in range(qtdTestes):
    numero = int(input())
    resposta = "NULL"
    if numero > 0:
        if numero % 2 == 0:
            resposta = "EVEN POSITIVE"
        else:
            resposta = "ODD POSITIVE"
    elif numero < 0:
        if numero % 2 == 0:
            resposta = "EVEN NEGATIVE"
        else:
            resposta = "ODD NEGATIVE"
    print(resposta)
