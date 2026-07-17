import sys
n_arvores = int(sys.stdin.readline())

distancias = list(map(int, sys.stdin.readline().split()))
circunferencia_total = sum(distancias)

'''
retangulo pares de lados com valores iguais
8
3 3 4 2 6 2 2 2
'''

def trabalhe():
    for index, item in enumerate(distancias):
        #print("index ", index, "item ", item)
        if item + sum( distancias[(index+x)%len(distancias)] for x in range(len(distancias)//2)) == circunferencia_total//2:
            if item == distancias[(index + len(distancias)//2)%len(distancias)]:
                return "S"
            elif item + distancias[index + 1] == distancias[(index + len(distancias)//2)%len(distancias)]:
                return "S"
    return "N"

print(trabalhe())