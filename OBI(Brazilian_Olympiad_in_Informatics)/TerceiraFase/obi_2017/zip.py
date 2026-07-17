"""
RULES:
se as duas cartas têm o mesmo valor, o jogador recebe como pontuação na partida duas vezes a soma dos valores das cartas.
se os valores das duas cartas são números consecutivos (por exemplo, 2 e 3, ou 13 e 12), o jogador recebe como pontuação na partida três vezes a soma dos valores das cartas.
caso contrário, o jogador recebe como pontuação na partida a soma dos valores das cartas.
Ganha a partida o jogador que tiver recebido a maior pontuação. Se houver empate, a aposta acumula para a próxima partida.
"""

import sys 

data = list(map(int,sys.stdin.read().split()))
lia, carolina = data[:2], data[2:]
scores = [0,0]

if lia[0] == lia[1]:
    scores[0] += (lia[0]+lia[0])*2
elif lia[1] == lia[0]+1 or lia[1] == (lia[0]-1) :
    scores[0] += (lia[0]+lia[1])*3
else:
    scores[0] += lia[0]+lia[1]

if carolina[0] == carolina[1]:
    scores[1] += (carolina[0]+carolina[0])*2
elif carolina[1] == carolina[0]+1 or carolina[1] == (carolina[0]-1) :
    scores[1] += (carolina[0]+carolina[1])*3
else:
    scores[1] += carolina[0]+carolina[1]

if scores[0] > scores[1]:
    print("Lia")
elif scores[1] > scores[0]:
    print("Carolina")
else:
    print("empate")