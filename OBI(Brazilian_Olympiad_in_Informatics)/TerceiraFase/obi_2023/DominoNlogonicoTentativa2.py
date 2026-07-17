#GABARITO OBI
# POR : André Amaral de Sousa

def read_int():
  return int(input())

def read_int_list():
  return [int(x) for x in input().split()]

n = read_int()
x = read_int_list()
h = read_int_list()
pilha = []
resp = [-1 for i in range(n)]
tamanho = 0

for i in range(n - 1, -1, -1): # começa de tras pra frente pq o ultimo domino so vai poder derrubar ele mesmo
  resp[i] = 1
  while tamanho > 0:
    print(i , "chamda \n")
    topo = pilha[tamanho - 1]
    if x[i] + h[i] < x[topo]:
      break
    resp[i] += resp[topo]
    pilha.pop()
    #quando o tamanho esta sendo incrementado????
    # o tamanho += 1 fora do while faz o codigo rebuminar pra ca whatahe
    tamanho -= 1
  pilha.append(i)
  tamanho += 1

print(resp)

