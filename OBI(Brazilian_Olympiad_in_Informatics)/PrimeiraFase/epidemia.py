#https://neps.academy/br/exercise/2316

n = int(input())
r = int(input())
p = int(input())

dias = 0

while n < p:
    n = n * r
    dias +=1 

print(dias-1)
