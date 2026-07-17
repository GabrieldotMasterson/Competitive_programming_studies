#colei pelo gabarito ;-;

# R. Anido
# Amigos - OBI2019
# (diametro de arvore)

n = int(input())
p = [int(i) for i in input().split()]
	
	    
# predio que tem o andar mais distante do ultimo andar do predio 0

dist0 = 0
k = -1
for i in range(n):
    d0i = p[0] + i + p[i]
    if d0i > dist0: # muito pratico nao ia conseguir pensar nisso sozinho
        dist0 = d0i
        k = i
	
# amigo mais distante do ultimo andar do predio k
	
maxdist = 0
for i in range(n):
    if i != k:
        maxdist = max(maxdist, p[k] + abs(k-i) + p[i])

print(maxdist)
