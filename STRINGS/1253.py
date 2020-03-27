qtdCasos = int(input())

for i in range(qtdCasos):
    codificado = input()
    deslocamento = int(input())
    decodificado = ''
    for elemento in codificado:
        ascii = ord(elemento) - deslocamento

        if ascii < 65:
            decodificado += chr(91-(65 - ascii))
        else:
            decodificado += chr(ord(elemento) - deslocamento)

    print(decodificado)
