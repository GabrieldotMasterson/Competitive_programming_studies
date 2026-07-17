import bisect

# Lista ordenada
lista = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19]
# Valor a ser procurado
alvo = 7

# Chamando a função

try:
    print(f"Elemento encontrado no índice {bisect.bisect_left(lista, alvo)}")
except:
    print("Elemento não encontrado")