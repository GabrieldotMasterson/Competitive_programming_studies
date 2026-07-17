#GABARITO
def main():
    n = int(input())

    matrix = []
    for i in range(n):
        lista = list(map(int, input().split()))
        matrix.append(lista)

    # Soma da primeira linha como referência
    magic_sum = sum(matrix[0])

    # Verificação das linhas
    for i in range(n):
        if sum(matrix[i]) != magic_sum:
            print(-1)
            return

    # Verificação das colunas
    for j in range(n):
        col_sum = sum(matrix[i][j] for i in range(n))
        if col_sum != magic_sum:
            print(-1)
            return

    # Verificação da diagonal principal
    if sum(matrix[i][i] for i in range(n)) != magic_sum:
        print(-1)
        return

    # Verificação da diagonal secundária
    if sum(matrix[i][n - 1 - i] for i in range(n)) != magic_sum:
        print(-1)
        return

    # Se todas as somas são iguais, imprimir a soma mágica
    print(magic_sum)

if __name__ == "__main__":
    main()
