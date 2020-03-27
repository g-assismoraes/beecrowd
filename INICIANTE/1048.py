salario = float(input())
if 0 <= salario <= 400:
    print('''Novo salario: %.2f
Reajuste ganho: %.2f
Em percentual: %s'''%(salario + 0.15*salario, 0.15*salario, '15 %'))
elif 400.01 <= salario <= 800:
    print('''Novo salario: %.2f
Reajuste ganho: %.2f
Em percentual: %s'''%(salario + 0.12*salario, 0.12*salario, '12 %'))
elif 800.01 <= salario <= 1200:
    print('''Novo salario: %.2f
Reajuste ganho: %.2f
Em percentual: %s'''%(salario + 0.10*salario, 0.10*salario, '10 %'))
elif 1200.01 <= salario <= 2000:
    print('''Novo salario: %.2f
Reajuste ganho: %.2f
Em percentual: %s'''%(salario + 0.07*salario, 0.07*salario, '7 %'))
elif salario > 2000:
    print('''Novo salario: %.2f
Reajuste ganho: %.2f
Em percentual: %s'''%(salario + 0.04*salario, 0.04*salario, '4 %'))
