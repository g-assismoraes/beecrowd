entrada1 = list(map(float, input().split()))
entrada2 = list(map(float, input().split()))

total = (entrada1[2] * entrada1[1]) + (entrada2[1] * entrada2[2])

print('VALOR A PAGAR: R$ %.2f' % total)
