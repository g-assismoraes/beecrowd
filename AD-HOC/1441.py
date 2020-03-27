#subs
def pot2(x):
    return x != 0 and ((x & (x - 1)) == 0)

#pp
h = int(input())
while h != 0:
    i = 0
    while pot2(h) != True:
        if h > i:
            i = h
        if h%2 == 0:
            h = int(h/2)
        else:
            h = h*3 +1
    if h > i:
        i = h
    print(i)
    h = int(input())
