w,h = map(int,input().split())
matrix = []

for i in range(w):
    matrix.append(list(map(int,input().split())))

for i in range(w):
    print(matrix[i])
print("aa", matrix[1][3])
def verificar():
    for i in range(w):
        for j in range(h):
            if matrix[i][j] == 0:
                for x in range(i,w):
                    if matrix[i][x] != 0:
                        print(matrix[i][h-x-1])
                        return "N"
                for y in range(j,w):
                    if matrix[y][j] != 0:
                        print(matrix[y][j])
                        return "N"
    return "S"

print(verificar())

##GABARITO
def is_escalonada(matriz, n, m):
    # Índice da primeira coluna não nula da última linha não nula encontrada
    ultima_coluna_nao_nula = -1
    
    for i in range(n):
        # Encontrar o índice da primeira coluna não nula na linha atual
        primeira_coluna_nao_nula = -1
        for j in range(m):
            if matriz[i][j] != 0:
                primeira_coluna_nao_nula = j
                break
        
        # Se a linha atual é não nula
        if primeira_coluna_nao_nula != -1:
            # Verificar se a linha atual obedece à regra da forma escada
            if primeira_coluna_nao_nula <= ultima_coluna_nao_nula:
                return 'N'
            ultima_coluna_nao_nula = primeira_coluna_nao_nula
        else:
            # Linha atual só tem zeros, todas as linhas subsequentes devem ser zero também
            for k in range(i + 1, n):
                if any(matriz[k][l] != 0 for l in range(m)):
                    return 'N'
    
    return 'S'

# Leitura da entrada
n, m = map(int, input().split())
matriz = []
for _ in range(n):
    linha = list(map(int, input().split()))
    matriz.append(linha)

# Verificar se a matriz está na forma escada
resultado = is_escalonada(matriz, n, m)
print(resultado)
