monica = int(input())
filho1 = int(input())
filho2 = int(input())

filhos = [filho1, filho2]
filhos.append(monica - filho1 - filho2)
filhos.sort(reverse=True)
print(filhos[0])
