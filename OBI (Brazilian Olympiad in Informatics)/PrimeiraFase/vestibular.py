n = int(input())
gabarito = input()
candidato = input()
nota = 0
for i in range(n):
    if candidato[i] == gabarito[i]:
        nota+=1

print(nota)