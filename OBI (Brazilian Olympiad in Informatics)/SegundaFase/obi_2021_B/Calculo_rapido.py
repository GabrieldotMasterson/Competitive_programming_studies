import sys
soma = int(sys.stdin.readline())
inicio = int(sys.stdin.readline())
final = int(sys.stdin.readline())

quantidade = 0

for i in range(inicio, final+1):
    crs = list(str(i))
    crs = [int(x) for x in crs]
    if sum(crs) == soma:
        quantidade = quantidade+1

print(quantidade)
    