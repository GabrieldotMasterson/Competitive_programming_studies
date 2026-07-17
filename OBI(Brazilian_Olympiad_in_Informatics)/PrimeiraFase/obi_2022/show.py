a, n, m = list(map(int, input().split()))

matrix = []
filas = []

for i in range(n):
    matrix.append(input().split())

for i in range(n-1, 0, -1):
    print("i",i)
    assento = 0
    for j in range(m-1, 0, -1):
        print("j",j)
        if matrix[i][j] == "0":
            assento += 1
            if assento >= a:
                filas.append(j)
        else:
            assento = 0

if filas != []:
    print("filas",filas)
    print(min(filas))
else:
    print(-1)


