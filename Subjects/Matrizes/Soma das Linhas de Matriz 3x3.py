matrix = [[int(input()) for _ in range(3)] for _ in range(3)]

linhas = [sum(matrix[linha]) for linha in range(3)]

for i in range(3):
    print("Linha {}: {}".format(i,linhas[i]))