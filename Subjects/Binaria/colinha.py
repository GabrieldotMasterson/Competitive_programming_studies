def busca_binaria(lista, alvo):
    inicio = 0
    fim = len(lista) - 1

    while inicio <= fim:
        meio = (inicio + fim) // 2
        if lista[meio] == alvo:
            return meio
        elif lista[meio] < alvo:
            inicio = meio + 1
        else:
            fim = meio - 1

    return -1  # Se o alvo não for encontrado

# Lista ordenada
lista = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19]
# Valor a ser procurado
alvo = 7

# Chamando a função
indice = busca_binaria(lista, alvo)
if indice != -1:
    print(f"Elemento encontrado no índice {indice}")
else:
    print("Elemento não encontrado")

import bisect

# Lista ordenada
lista = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# Usando bisect para busca binária
index = bisect.bisect_left(lista, 5)  # O(log n)
print(index)  # Saída: 4 (índice de '5' na lista)

# Encontrar a faixa de elementos com um valor específico
start_index = bisect.bisect_left(lista, 5)
end_index = bisect.bisect_right(lista, 5)
print(lista[start_index:end_index])  # Saída: [5]