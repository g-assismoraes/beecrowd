while True:
    try:
        altura, largura, qtdTestes = map(int, input().split())
        for i in range(qtdTestes):
            alturaPlaca, larguraPlaca = map(int, input().split())
            if (altura >= alturaPlaca and largura >= larguraPlaca and altura * largura >= alturaPlaca * larguraPlaca) or \
                (largura >= alturaPlaca and altura >= larguraPlaca and altura * largura >= alturaPlaca * larguraPlaca):
                print("Sim")
            else:
                print("Nao")
    except EOFError:
        break
        
 #para nao dar time limit deixar sem linhas em branco
