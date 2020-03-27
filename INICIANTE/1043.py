lados = input().split()
a = float(lados[0])
b = float(lados[1])
c = float(lados[2])
if b-c < a < b+c and a-c < b < a+c and a-b < c < a+b:
    print('Perimetro = %.1f'%(a + b + c))
else:
    s = ((a + b)*c)/2
    print('Area = %.1f'%(s))
