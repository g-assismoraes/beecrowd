qtd_dias = int(input())
valor_gasto, qtdFrutas_total = 0.0, 0
for i in range(qtd_dias):
    valor_gasto += float(input())
    qtdFrutas_dia = len(list(map(str, input().split())))
    qtdFrutas_total += qtdFrutas_dia

    print("day %d: %d kg" % (i+1, qtdFrutas_dia))

print("%.2f kg by day" % (qtdFrutas_total/qtd_dias))
print("R$ %.2f by day" % (valor_gasto/qtd_dias))
