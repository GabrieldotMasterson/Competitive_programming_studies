#fonte: https://neps.academy/br/exercise/1658
# Todo quebrado 
# todo dodoi

L, C = map(int,input().split())

matriz = []

for i in range(L+1):
    matriz.append(input().split())

dict_preenchido = {'nome': 'Carlos', 'idade': 30}

results = {
    'linhas': [int(x) for x in matriz[L]],
    'colunas': [int(matriz[C-1][x]) for x in range(L)]
    }

valores = {}

while len(valores) < L * C:
    for i in range(L):
        desconhecidos = [matriz[i][j] for j in range(C) if matriz[i][j] not in valores]
        conhecidos = sum(valores[matriz[i][j]] for j in range(C) if matriz[i][j] in valores)
        
        if len(set(desconhecidos)) == 1:
            valores[desconhecidos[0]] = results['linhas'][i] - conhecidos

    for j in range(C):
        desconhecidos = [matriz[i][j] for i in range(L) if matriz[i][j] not in valores]
        conhecidos = sum(valores[matriz[i][j]] for i in range(L) if matriz[i][j] in valores)
        if len(set(desconhecidos)) == 1:
            valores[desconhecidos[0]] = results['colunas'][j] - conhecidos

    if len(valores) == C:
        break

for var in sorted(valores.keys()):
    print(var, valores[var])