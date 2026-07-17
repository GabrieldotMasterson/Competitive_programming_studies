def verificar(n, pesos): #função pq return so retorna um valor
    pesos.sort()
    for i in range(n - 1):
        if pesos[i + 1] - pesos[i] > 8:
            return "N"
    return "S"

n = int(input())
pesos = list(map(int, input().split()))

resultado = verificar(n, pesos)
print(resultado)
