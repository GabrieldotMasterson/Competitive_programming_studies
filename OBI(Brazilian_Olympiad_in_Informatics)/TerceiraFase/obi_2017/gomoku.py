tabuleiro = []
for i in range(15):
    linha = [i for i in input().split()]
    tabuleiro.append(linha)  

def seach():
    direcoes = [(0, 1), (1, 0), (1, 1), (1, -1)]  # direita, baixo, diagonal direita, diagonal esquerda
    
    def dentro_limite(y, x):
        return 0 <= y < 15 and 0 <= x < 15

    for linha in range(15):
        for coluna in range(15):
            peca = tabuleiro[linha][coluna]
            if peca != "0":  # Ignora células vazias (0)
                for dy, dx in direcoes:
                    count = 0
                    y, x = linha, coluna
                    while dentro_limite(y, x) and tabuleiro[y][x] == peca:
                        count += 1
                        if count == 5:  
                            return int(peca)
                        y += dy
                        x += dx
    return 0  

print(seach())
