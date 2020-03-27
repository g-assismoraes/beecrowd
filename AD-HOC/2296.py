import sys


min_esforco = sys.maxsize
min_t = None

n = int(input())
for t in range(1, n+1):

    linha = list(map(int, input().split()))
    n = linha[0]
    h = linha[1:]

    esforco_ida = 0
    esforco_volta = 0

    a = h[0]
    for i in range(1, n):
        b = h[i]
        if a <= b:
            esforco_ida += b - a
        else:
            esforco_volta += a - b
        a = b

    esforco = min(esforco_ida, esforco_volta)
    if min_esforco > esforco:
        min_esforco = esforco
        min_t = t

print(min_t)
