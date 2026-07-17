#fonte: https://neps.academy/br/exercise/1653
a = int(input())
b = int(input())
c = int(input())
d = int(input())

jogadores = [a,b,c,d]

jogadores.sort()

print((jogadores[0]+jogadores[3]) - (jogadores[1]+jogadores[2]))