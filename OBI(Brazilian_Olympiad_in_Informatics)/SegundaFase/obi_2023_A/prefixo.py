#https://neps.academy/br/exercise/2437

n = int(input())
p1 = input()
m = int(input())
p2 = input()

count = 0

for i in range(max(len(p1), len(p2))):
    if i < len(p1) and i < len(p2):
        if p1[i] == p2[i]:
            count+=1

print(count)