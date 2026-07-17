
n_paises, n_esportes = map(int, input().split())

medalhas = {i: [0, 0, 0] for i in range(1, n_paises+1)}
#print(medalhas)

for _ in range(n_esportes):
    o, p, b = map(int, input().split())
    medalhas[o][0] += 1  
    medalhas[p][1] += 1  
    medalhas[b][2] += 1  

def desempate(x):
    #print((medalhas[x][0],medalhas[x][1], medalhas[x][2], x))
    return (-medalhas[x][0], -medalhas[x][1], -medalhas[x][2], x)

resultado = sorted(set(medalhas), key=desempate)

print(" ".join(map(str, resultado)))
