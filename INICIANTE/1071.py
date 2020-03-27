X = int(input())
Y = int(input())
soma = 0
for c in range((Y+1), X):
    if c % 2 != 0:
       soma += c
print(soma)
