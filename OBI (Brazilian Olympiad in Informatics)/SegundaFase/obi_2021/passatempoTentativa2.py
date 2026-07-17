
import sys
lin, col = map(int,sys.stdin.readline().split())
M = [sys.stdin.readline().split() for i in range(lin+1)]
M_colunas = [[M[linha][coluna] for linha in range(lin)] for coluna in range(col)
]
somas_linhas = list(map(int,[M[linha].pop() for linha in range(lin)]))
somas_colunas = list(map(int,M.pop()))
quantas_vars = len({var for linha in M for var in linha})
conhecidos = {}

def achar_repetido():
    for i in range(lin-1):
        if len(set(M[i])) == 1:
            conhecidos[M[i][0]] = somas_linhas[i]//lin
            break
        
    for y in range(lin):
        coluna = [M[linha][y] for linha in range(lin) ]
        if len(set(coluna)) == 1:
            #print(somas_colunas[y], col-1, abs(somas_colunas[y]//(lin-1)))
            conhecidos[M[0][y]] = abs(somas_colunas[y]//(lin))
            break

def pense():
    for index_lin, linha in enumerate(M):
        incognitas = quantas_vars
        for i in conhecidos:
            if i in linha:
                incognitas -= 1
        if incognitas < quantas_vars:
            linha_sem_incognita = somas_linhas[index_lin]
            for i in list(conhecidos):
                if i in linha:
                    linha_sem_incognita -=conhecidos[i]
                    linha.remove(i)
                else:continue
            if len(set(linha)) == 1:
                total_elementos_linha = lin-(quantas_vars-incognitas)
                conhecidos[M[index_lin][0]] = linha_sem_incognita//total_elementos_linha
    for index_col, coluna in enumerate(M_colunas):
        incognitas = 0
        for i in conhecidos:
            if i in coluna:
                incognitas -= 1
        if incognitas < quantas_vars:
            coluna_sem_incognita = somas_colunas[index_col]
            for i in list(conhecidos):
                if i in coluna:
                    coluna.remove(i)
                    coluna_sem_incognita -=conhecidos[i]
                else:continue
            if len(set(coluna)) == 1:
                total_elementos_coluna = col+incognitas
                conhecidos[M[index_col][0]] = coluna_sem_incognita//total_elementos_coluna
                    
        if len(conhecidos) >= quantas_vars:
            break
        pense()
     
achar_repetido()
pense()

print(conhecidos)
    

