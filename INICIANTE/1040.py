notas = input().split(' ')
N1 = float(notas[0])
N2 = float(notas[1])
N3 = float(notas[2])
N4 = float(notas[3])
MEDIA = (N1*2 + N2*3 + N3*4 + N4*1)/10
if MEDIA >= 7.0:
    print('Media: %.1f'%(MEDIA))
    print('Aluno aprovado.')
elif MEDIA < 5:
    print('Media: %.1f'%(MEDIA))
    print('Aluno reprovado.')
else:
    print('Media: %.1f'%(MEDIA))
    print('Aluno em exame.')
    exame = float(input())
    print('Nota do exame: %.1f'%(exame))
    nMEDIA = (exame + MEDIA)/2
    if nMEDIA >= 5:
        print('Aluno aprovado.')
        print('Media final: %.1f'%(nMEDIA))
    else:
        print('Aluno reprovado.')
        print('Media final: %.1f'%(nMEDIA))
