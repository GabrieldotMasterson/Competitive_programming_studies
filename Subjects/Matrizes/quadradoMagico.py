n = int(input())

matrix= []

for i in range(n):
    lista = list(map(int, input().split()))
    matrix.append(lista)

def andar(x, y):
    cursor = [0,0]
    soma = 0
    
    for _ in range(n):
        soma += matrix[cursor[0]-1][cursor[1]-1]
        cursor[0]+=x
        cursor[1]+=y
    return soma


if andar(1,0) == andar(0,1) == andar(1,1):
    print(andar(1,0))
else:
    print(-1)