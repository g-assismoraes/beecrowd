alimentosComVitamina = {"suco": 120, "morango": 85, "mamao": 85, "goiaba": 70, "manga": 56,
                        "laranja": 50, "brocolis": 34}

qtdTestes = int(input())
while qtdTestes != 0:

    qtdVitC = 0
    for i in range(qtdTestes):
        entrada = input().split()
        qtdConsumida = int(entrada[0])
        prodConsumido = entrada[1]

        qtdVitC += qtdConsumida * alimentosComVitamina[prodConsumido]

    if 110 < qtdVitC <= 130:
        print(qtdVitC, 'mg')
    else:
        if qtdVitC < 110:
            print("Mais %d mg" % int(110 - qtdVitC))
        else:
            print('Menos %d mg' % int(qtdVitC - 130))

    qtdTestes = int(input())
