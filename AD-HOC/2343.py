mapa = [[False] * 501 for lin in range(501)]

r = 0

n = int(input())
for i in range(n):
    x, y = map(int, input().split())
    if mapa[x - 1][y - 1]:
        r = 1
        break
    else:
        mapa[x - 1][y - 1] = True

print(r)
