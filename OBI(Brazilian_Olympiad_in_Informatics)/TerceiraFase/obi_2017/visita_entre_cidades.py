#GRAFOS :(
#https://neps.academy/br/exercise/38

from collections import defaultdict


def dfs(cidade_atual, destino, cidade, visitados, distancia_atual):
    if cidade_atual == destino:
        return distancia_atual
    
    visitados.add(cidade_atual)
    
    for vizinho, dist in cidade[cidade_atual]:
        if vizinho not in visitados:
            distancia = dfs(vizinho, destino, cidade, visitados, distancia_atual + dist)
            if distancia is not None:
                return distancia
    
    return None


n_cidades, origem, destino = map(int, input().split())

cidade = defaultdict(list)

for _ in range(n_cidades - 1):
    P, Q, Dist = map(int, input().split())
    cidade[P].append((Q, Dist))
    cidade[Q].append((P, Dist))

visitados = set()

distancia = dfs(origem, destino, cidade, visitados, 0)

print(distancia)



