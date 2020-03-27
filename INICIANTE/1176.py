qtdTestes = int(input())
for i in range(qtdTestes):
    testado = int(input())
    f = [0, 1]
    if testado > 1:
        for j in range(2, testado + 1):
            f.append(f[j - 2] + f[j - 1])
        print('Fib(%d) = %d'%(testado, f[testado]))
    elif testado <= 1:
        print('Fib(%d) = %d' % (testado, f[testado]))
