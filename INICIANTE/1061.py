descarte, diaInicial = input().split()
diaInicial = int(diaInicial)
horaInicial, minutoInicial, segundoInicial = map(int, input().split(":"))
descarte2, diaFinal = input().split()
diaFinal = int(diaFinal)
horaFinal, minutoFinal, segundoFinal = map(int, input().split(":"))

#grandezas auxiliares
minutoEmSegundos = 60
horaEmSegundos = minutoEmSegundos * 60
diaEmSegundos = horaEmSegundos * 24

inicioEmSegundos = diaInicial * diaEmSegundos + horaInicial * horaEmSegundos + minutoInicial * minutoEmSegundos \
                   + segundoInicial
finalEmSegundos = diaFinal * diaEmSegundos + horaFinal * horaEmSegundos + minutoFinal * minutoEmSegundos \
                   + segundoFinal

duracaoTotalSegundos = finalEmSegundos - inicioEmSegundos
duracaoDia = duracaoTotalSegundos//diaEmSegundos
duracaoHora = duracaoTotalSegundos%diaEmSegundos//horaEmSegundos
duracaoMinuto = duracaoTotalSegundos%diaEmSegundos%horaEmSegundos//minutoEmSegundos
duracaoSegundo = duracaoTotalSegundos%diaEmSegundos%horaEmSegundos%minutoEmSegundos

print("%d dia(s)" % duracaoDia)
print("%d hora(s)" % duracaoHora)
print("%d minuto(s)" % duracaoMinuto)
print("%d segundo(s)" % duracaoSegundo)
