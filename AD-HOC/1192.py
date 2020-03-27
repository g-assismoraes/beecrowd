#subs
def operacao(n):
    x = int(n[0])
    y = int(n[2])
    z = str(n[1])
    if x == y:
        return x * y
    if z.isupper():
        return y - x
    else:
        return x + y

#pp
numTeste = 0
numTeste = int(input())
for i in range(numTeste):
    seq = input()
    print(operacao(seq))
