import sys

n = int(sys.stdin.readline().strip()) 
valores = sys.stdin.read().split()  

intervalos = []
nums = set()
intervalo = 0

for val in valores:
    if val not in nums:
        intervalo += 1
        nums.add(val)
    else:
        intervalos.append(intervalo)
        nums = {val}
        intervalo = 1


intervalos.append(intervalo)

print(max(intervalos))
