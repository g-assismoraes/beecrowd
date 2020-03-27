n = int(input())
dentro = 0
fora = 0
for x in range(n):
    valor = int(input())
    if 10 <= valor <= 20:
        dentro += 1
    else:
        fora += 1
print('''%d in
%d out'''%(dentro, fora))
