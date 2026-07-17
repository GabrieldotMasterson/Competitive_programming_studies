n = int(input())
matrix = [list(map(int, input().split())) for _ in range(n)]

linhas = [sum(matrix[i]) for i in range(n)]
colunas = [sum(matrix[i][j] for i in range(n)) for j in range(n)]

valores = []
for linha in range(n):
    for coluna in range(n):
        valor = linhas[linha] + colunas[coluna] - 2 * matrix[linha][coluna]
        valores.append(valor)

print(max(valores))