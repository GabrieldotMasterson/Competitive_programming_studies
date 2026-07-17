n, p = map(int,input().split())

passaram = 0
for i in range(n):
    competidor = list(map(int, input().split()))
    if competidor[0]+competidor[1] >= p:
        passaram +=1 
    

print(passaram)