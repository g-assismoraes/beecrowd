while True:
    try:
        graus = int(input())

        if 0 <= graus < 90 or graus == 360:
            print("Bom Dia!!")
        elif 90 <= graus < 180:
            print("Boa Tarde!!")
        elif 180 <= graus < 270:
            print("Boa Noite!!")
        else:
            print("De Madrugada!!")
    except EOFError:
        break
