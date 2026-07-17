from itertools import combinations

forcas = list(map(int, input().split()))
indexes = list(range(6))

def verificar():
    for time1 in combinations(indexes, 3): # mucho interresante
        time2 = [f for f in indexes if f not in time1]

        time1 = [forcas[x] for x in time1 ]
        time2 = [forcas[x] for x in time2 ]
        
        if sum(time1) == sum(time2):
            return "S"
    return "N"
print(verificar())
