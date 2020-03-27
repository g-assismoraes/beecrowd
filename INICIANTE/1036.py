valores = (input()).split(' ')
A = float(valores[0])
B = float(valores[1])
C = float(valores[2])
DELTA = (B**2 - (4*A*C))
if A != 0:
    R1 = (-B + (DELTA)**0.5)/(2*A)
    R2 = (-B - (DELTA)**0.5)/(2*A)
if A == 0:
    print('Impossivel calcular')
elif DELTA < 0:
    print('Impossivel calcular')
else:
    print('R1 = %.5f'%(R1))
    print('R2 = %.5f'%(R2))
