
import sys
equipes = list("ABCDEFGHIJKLMNOP")

resultados = sys.stdin.read().strip().split('\n')

index = 0

while len(equipes) > 1:
    proxima_fase = []
    for i in range(0, len(equipes), 2):
        M, N = map(int, resultados[index].split())
        if M > N:
            proxima_fase.append(equipes[i])
        else:
            proxima_fase.append(equipes[i + 1])
        index += 1
    equipes = proxima_fase

print(equipes[0])

