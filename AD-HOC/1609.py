qtdCasos = int(input())
for i in range(qtdCasos):
    qtdCarneirinhos = int(input())
    carneirinhos = list(map(int, input().split()))
    carneirinhosUnicos = set(carneirinhos)
    print(len(carneirinhosUnicos))
