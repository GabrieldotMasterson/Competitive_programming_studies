quantidade_cartas, quantidade_operacoes = list(map(int, input().split()))
cima = input().split()
baixo = input().split()


for i in range(quantidade_operacoes):
    comeco, fim = list(map(int,input().split()))
    comeco -= 1
    fim -= 1
    crazy = cima[comeco:fim]
    cima[comeco:fim] = baixo[comeco:fim]
    baixo[comeco:fim] = crazy

print(" ".join(cima))