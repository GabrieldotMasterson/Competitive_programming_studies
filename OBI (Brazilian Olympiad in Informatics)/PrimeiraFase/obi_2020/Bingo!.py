import sys

n_cartelas, n_numeros, n_max = map(int, sys.stdin.readline().split())

cartelas = [x.split() for x in sys.stdin.read().split("\n") if x]

gabarito = cartelas.pop()

cartelas_pontos = [0 for _ in range(n_cartelas)]
vencedores = []

for i in gabarito:
    for cartela in range(len(cartelas)):
        if i in cartelas[cartela]:
            cartelas_pontos[cartela] += 1
            if cartelas_pontos[cartela] == n_numeros:
                vencedores.append(cartela+1)
    if len(vencedores) > 0: 
        break
        
print(" ".join([str(x) for x in vencedores]))

