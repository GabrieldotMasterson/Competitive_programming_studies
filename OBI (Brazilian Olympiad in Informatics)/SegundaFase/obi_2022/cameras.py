from collections import deque # biblioteca para editar extremidades das listas com maior facilidade, usada no algoritimo de busca em largura
# partindo de um ponto de origem analisa os vizinhos do vertice primeiramente

# estudar grafos

# Função para marcar a vigilância com base nas câmeras
def marcar_vigilancia(sala, cameras, col, lin):
    for cam in cameras:
        ci, li, direcao = cam
        ci -= 1
        li -= 1
        
        if direcao == 'N':
            for i in range(li, -1, -1): # de linha ate -1 agregando -1
                sala[i][ci] = 'X'
        elif direcao == 'S':
            for i in range(li, lin):
                sala[i][ci] = 'X'
        elif direcao == 'L':
            for i in range(ci, col):
                sala[li][i] = 'X'
        elif direcao == 'O':
            for i in range(ci, -1, -1):
                sala[li][i] = 'X'

# Função para verificar se é possível passar sem ser detectado
#algoritimo de verificação em largura
def pode_passar(sala, col, lin):
    direcoes = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    fila = deque([(0, 0)])
    visitados = [[False] * col for _ in range(lin)]
    visitados[0][0] = True
    
    while fila:
        x, y = fila.popleft() 
        
        if x == lin-1 and y == col-1:
            return "S"
        
        for dx, dy in direcoes:
            nx, ny = x + dx, y + dy
            
            if 0 <= nx < lin and 0 <= ny < col and sala[nx][ny] == 'O' and not visitados[nx][ny]:
                visitados[nx][ny] = True
                fila.append((nx, ny))
    
    return "N"


col, lin, cam = map(int, input().split())
sala = [["O" for _ in range(col)] for _ in range(lin)]
cameras = [input().split() for _ in range(cam)]
cameras = [(int(c), int(l), d) for c, l, d in cameras]

marcar_vigilancia(sala, cameras, col, lin)

print(pode_passar(sala, col, lin))



