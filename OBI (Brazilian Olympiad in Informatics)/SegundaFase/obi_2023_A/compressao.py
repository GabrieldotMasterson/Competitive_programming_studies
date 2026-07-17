#Código de Compressão
#https://neps.academy/br/exercise/2435

n = int(input())
arqv = input().strip()

count = 1
comp_arqv = []

for i in range(1, len(arqv)):
    if arqv[i] == arqv[i - 1]:
        count += 1
    else:
        comp_arqv.append(f"{count} {arqv[i - 1]} ")
        count = 1

comp_arqv.append(f"{count}{arqv[-1]}")

print("".join(comp_arqv))
