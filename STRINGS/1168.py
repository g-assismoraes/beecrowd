parametros = {"0": 6, "1": 2, "2": 5, "3": 5, "4": 4, "5": 5, "6": 6, "7": 3, "8": 7, "9": 6}
numCasos = int(input())
for i in range(numCasos):
    resposta = 0
    led = input()
    for num in led:
        resposta += parametros[num]
    print(resposta, "leds")
