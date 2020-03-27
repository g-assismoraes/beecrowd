totalL = 0
totalC = 0
quebrados = 0
n = int(input())
for _ in range(n):
    entrada = input()
    latasECopos = entrada.split()
    numLatas = int(latasECopos[0])
    numCopos = int(latasECopos[1])
    totalL += numLatas
    if numCopos < numLatas:
        totalC += numCopos
if totalC < totalL:
    quebrados += totalC
print(quebrados)
