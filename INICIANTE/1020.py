idadeDias = int(input())
ano = idadeDias//365
mes = (idadeDias%365)//30
dia = idadeDias%365%30
print('{} ano(s)'.format(ano))
print('{} mes(es)'.format(mes))
print('{:.0f} dia(s)'.format(dia))
