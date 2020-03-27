temperaturas = input().split()
a = int(temperaturas[0])
b = int(temperaturas[1])
c = int(temperaturas[2])
if a > b <= c or (a < b < c and (b - a) <= (c - b)) or (a > b > c and (a - b) > (b - c)) or a == b < c:
    print(':)')
else:
    print(':(')
