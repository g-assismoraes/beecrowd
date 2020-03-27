entrada = int(input())
t = 0
while entrada != 0:
    cinquenta = entrada//50
    dez = entrada % 50//10
    cinco = entrada % 50 % 10//5
    um = entrada % 50 % 10 % 5

    t += 1
    print('Teste %d'%t)
    print('%d %d %d %d'%(cinquenta, dez, cinco, um))
    print()

    entrada = int(input())
