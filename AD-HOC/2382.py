l, a, p, r = map(int, input().split())

if l == a == p:
    if l*3**0.5 <= 2*r:
        print('S')
    else:
        print('N')
else:
    if (l*l + a*a + p*p)**0.5 <= 2*r:
        print('S')
    else:
        print('N')
