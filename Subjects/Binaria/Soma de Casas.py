import bisect

n = int(input())
lista = [int(input()) for _ in range(n)]
# Valor a ser procurado
alvo = int(input())

# Chamando a função
lis = lista[len(lista)//2::len(lista)]

def mult():
    for i in lista:
        for j in lista:
            if i+j == alvo:
                return i,j
r = mult()
r = [str(x) for x in r]
print(" ".join(r))