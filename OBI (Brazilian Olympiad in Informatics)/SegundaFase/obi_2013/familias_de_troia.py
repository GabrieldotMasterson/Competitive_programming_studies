from collections import defaultdict

n, m = map(int, input().split())
grafo = defaultdict(list)

for i in range(m):
    p1, p2 = map(int, input().split())
    grafo[p1].append(p2)
    grafo[p2].append(p1)

visitados = [False] * (n + 1)
n_familias = 0

# Função DFS
def DFS(x):
    visitados[x] = True  # Marcamos o nó atual como visitado
    for vizinho in grafo[x]:
        if not visitados[vizinho]:  # Se o vizinho ainda não foi visitado
            DFS(vizinho)

for i in range(1, n + 1):
    if not visitados[i]:
        DFS(i)
        n_familias += 1 

print(n_familias)
