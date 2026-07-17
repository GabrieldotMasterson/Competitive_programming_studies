def find(x, p):
    if p[x] != x: 
        p[x] = find(p[x], p)  
    return p[x]  



estradas_ol, estradas_ns = list(map(int, input().split()))  
n_cidades, autonomia = list(map(int, input().split()))  

x = []  
y = []  
p = list(range(n_cidades))  

for i in range(n_cidades):
    coords = list(map(int, input().split()))  
    x.append(coords[0])  
    y.append(coords[1])  

for i in range(n_cidades): 
    for j in range(i + 1, n_cidades):  
        if 100 * (abs(x[i] - x[j]) + abs(y[i] - y[j])) <= autonomia:
            p[find(i, p)] = find(j, p) 

ans = -1  
for i in range(n_cidades):  
    if p[i] == i: 
        ans += 1  

print(ans)  
