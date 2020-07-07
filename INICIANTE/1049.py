exemplos = {"vac": "aguia", "vao": "pomba", "vmo": "homem", "vmh": "vaca", "iim": "pulga", "iir": "lagarta", "iah":
            "sanguessuga", "iao": "minhoca"}
subreino = input()
classe = input()
ordem = input()
codigo = subreino[0] + classe[0] + ordem[0]
if codigo == "iih":
    codigo = subreino[0] + classe[0] + ordem[2]
print(exemplos[codigo])
