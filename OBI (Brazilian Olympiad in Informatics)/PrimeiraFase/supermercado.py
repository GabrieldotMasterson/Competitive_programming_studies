n = int(input())
precos = []
for _ in range(n):
    p, g = input().split()
    quilo = (float(p)*1000)/int(g)
    precos.append(quilo)

print(format(min(precos),".2f"))