#https://neps.academy/br/exercise/2128

n = int(input())

matrix = [[1 for _ in range(n)] for _ in range(n)]

quina = 0

for quina in range(n // 2):
    for i in range(quina + 1, n - 1):
        for j in range(quina + 1, n - quina - 1):
            matrix[i][j] += 1
    
for y in range(n):
    for x in range(n):
        print(matrix[y][x], end=" ")
    print("")