def encontre(N, matriz):
    pos_x, pos_y = -1, -1
    for i in range(N):
        for j in range(N):
            if matriz[i][j] == 0:
                pos_x, pos_y = i, j
                break

    for i in range(N):
        if i != pos_x:
            soma_magica = sum(matriz[i])
            break
    
    soma_linha = sum(matriz[pos_x])
    valor_ilegivel = soma_magica - soma_linha

    print(valor_ilegivel)
    print(pos_x + 1)
    print(pos_y + 1)

N = int(input())
matriz = [list(map(int, input().split())) for _ in range(N)]
encontre(N, matriz)
