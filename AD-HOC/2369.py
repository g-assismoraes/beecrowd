try:
    consumo = int(input())
    preco = 7
    if consumo >= 101:
        preco = (consumo - 100)*5 + 167
    elif consumo >= 31:
        preco = (consumo - 30)*2 + 27
    elif consumo >= 11:
        preco = (consumo - 10) + 7
    
    print(preco)
except:
    pass
