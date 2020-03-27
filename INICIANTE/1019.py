N = int(input())
segundo = N%60
minuto = N//60%60
hora = N//60//60
print('{}:{}:{}'.format(hora, minuto, segundo))
