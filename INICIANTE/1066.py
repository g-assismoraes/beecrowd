a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())
num = (a, b, c, d, e)
par = impar = positivo = negativo = 0
for z in num:
    if z%2 == 0:
        par += 1
    if z%2 != 0:
        impar += 1
    if z>0:
        positivo += 1
    if z<0:
        negativo += 1
print('''%d valor(es) par(es)
%d valor(es) impar(es)
%d valor(es) positivo(s)
%d valor(es) negativo(s)'''%(par, impar, positivo, negativo))
