x = 0
codigo = input()

parametro = dict()

abc = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
for i in abc:
    parametro[i] = codigo[x]
    x += 1

decodificar = input()

resposta = ''

y = 0
for letra in decodificar:
    for chave, valor in parametro.items():
        if letra == chave:
            resposta += valor

print(resposta)
