tempo = []

andar1 = int(input())
andar2 = int(input())
andar3 = int(input())

tempo1 = 2*andar2 + 4*andar1

tempo2 = 2*andar1 + 2*andar3

tempo3 = 4*andar3 + 2*andar2

tempo.append(tempo1)
tempo.append(tempo2)
tempo.append(tempo3)

print(min(tempo))
