n_p = int(input())
pos_p = list(map(int, input().split()))
h_p = list(map(int, input().split()))

counts = []

for i in range(n_p): # i = peça
    count = 1
    for y in range(i+1, n_p): # y = proximas peças
        if pos_p[i]+h_p[i] > pos_p[y]-pos_p[i]:
            count += 1
    counts.append(count)

print("*"*15)
print(" ".join([str(x) for x in counts]))
