qtdTestes = int(input())
for i in range(qtdTestes):

    totalJ = 0
    for j in range(3):
        xJ, dJ = map(int, input().split())
        totalJ += xJ * dJ

    totalM = 0
    for k in range(3):
        xM, dM = map(int, input().split())
        totalM += xM * dM

    if totalJ > totalM:
        print('JOAO')
    else:
        print('MARIA')
