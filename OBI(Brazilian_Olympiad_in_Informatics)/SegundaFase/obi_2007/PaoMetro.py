
N = int(input())
M = int(input())
m = list(map(int, input().split()))

def ok(x):
    soma = 0
    for i in range(M):
        soma += (m[i] // x)  # divide os pães pelo comprimento escolhido
    return soma >= N  # verifica se a quantidade de pedaços é suficiente

def busca():
    inicio = 1
    fim = max(m)  # comprimento máximo
    ans = 0

    while fim - inicio > 1e-6:  # precisão de ponto flutuante porq vai rodar em decimais
        mid = (inicio + fim) / 2  # ponto médio
        if ok(mid):
            ans = mid  # atualiza o comprimento máximo encontrado
            inicio = mid  # procura valores maiores
        else:
            fim = mid  # reduz o intervalo

    return ans

print(round(busca()))  # imprime o resultado com 6 casas decimais
