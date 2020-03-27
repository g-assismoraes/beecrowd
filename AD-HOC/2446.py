cartas = []
entrada = input().split()
cartas.append(int(entrada[0]))
cartas.append(int(entrada[1]))
cartas.append(int(entrada[2]))
cartas.append(int(entrada[3]))
cartas.append(int(entrada[4]))

cartasC = sorted(cartas)
cartasD = sorted(cartas, key=int, reverse=True)

if cartas == cartasC:
    print('C')
elif cartas == cartasD:
    print('D')
else:
    print('N')
