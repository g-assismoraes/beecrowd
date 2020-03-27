qtdTestes = int(input())
for _ in range(qtdTestes):
    resp = 0
    alunos = []
    alunosOrg = []

    qtdAlunos = int(input())

    alunos = list(map(int, input().split()))
    alunosOrg = sorted(alunos, key=int, reverse=True)

    for i in range(len(alunos)):
        if alunos[i] == alunosOrg[i]:
            resp += 1
    print(resp)
