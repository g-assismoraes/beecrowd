entradas = input()
parametros = entradas.split()
precoA = float(parametros[0])
precoG = float(parametros[1])
rendimentoA = float(parametros[2])
rendimentoG = float(parametros[3])
if precoA/rendimentoA == precoG/rendimentoG or precoA/rendimentoA > precoG/rendimentoG:
    print('G')
else:
    print('A')
