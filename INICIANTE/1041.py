x, y = map(float, input().split())

if x == 0 or y == 0:
    if x == 0:
        resposta = 'Eixo Y'
    else:
        resposta = 'Eixo X'

if x == 0 and y == 0:
    resposta = 'Origem'

elif x > 0 and y != 0:
    if y > 0:
        resposta = 'Q1'
    else:
        resposta = 'Q4'
elif x < 0 and y != 0:
    if y > 0:
        resposta = 'Q2'
    else:
        resposta = 'Q3'


print(resposta)
