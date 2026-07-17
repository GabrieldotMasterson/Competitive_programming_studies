'''
A primeira linha contém um inteiro, 
𝐶
C, o consumo do carro em quilômetros rodados por litro de combustível. A segunda linha contém um inteiro 
𝐷
D, a distância do aeroporto, em quilômetros. A terceira linha contém um inteiro 
𝑇
T, o número de litros de combustível presente no tanque antes do abastecimento. Você pode assumir que o tanque tem capacidade suficiente para armazenar todo o combustível que Cássio comprar.

'''

c = int(input())
d = int(input())
t = int(input())

print("%.1f" % (d/c-t) if d/c >= t else 0)