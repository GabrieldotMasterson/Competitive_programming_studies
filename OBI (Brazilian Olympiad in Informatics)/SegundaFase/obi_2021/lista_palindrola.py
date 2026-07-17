from collections import deque

def verf(n, lst):
    deq = deque(lst) # da pra verificar os 2 lados ao mesmo tempo
    contrac = 0

    while len(deq) > 1:
        if deq[0] == deq[-1]:
            deq.popleft()
            deq.pop()
        elif deq[0] < deq[-1]:
            deq[1] += deq.popleft()
            contrac += 1
        else:
            deq[-2] += deq.pop()
            contrac += 1
    
    return contrac

n = int(input())
lst = list(map(int, input().split()))

result = verf(n, lst)

print(result)
