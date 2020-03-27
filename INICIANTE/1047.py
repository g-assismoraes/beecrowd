entrada = input().split()
hi = int(entrada[0])
mi = int(entrada[1])
hf = int(entrada[2])
mf = int(entrada[3])
hora = hf - hi
minuto = mf - mi
if minuto < 0:
    minuto = minuto + 60
    hora = hora - 1
if hora < 0:
    hora = hora + 24
if hora == 0 and minuto == 0:
    print('O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)')
else:
    print('O JOGO DUROU %d HORA(S) E %d MINUTO(S)'%(hora, minuto))
