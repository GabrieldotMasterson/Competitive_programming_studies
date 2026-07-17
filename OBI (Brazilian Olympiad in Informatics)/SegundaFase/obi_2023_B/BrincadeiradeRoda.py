# https://neps.academy/br/exercise/2621

'''
A primeira linha de entrada contém um inteiro 
𝑁
N indicando o número de alunos na classe, incluindo Bruno. As posições na roda são numeradas de 
1
1 a 
𝑁
N no sentido horário. A segunda linha contém um inteiro 
𝐼
I, indicando a posição inicial de Bruno (ou seja, a posição dele logo antes de sair para beber água). A terceira e última linha contém um inteiro 
𝑃
P, indicando o número de vezes que o professor bateu palmas enquanto Bruno estava fora da roda.
'''
import sys 
print(5%6)
n_alunos = int(sys.stdin.readline())
pos = int(sys.stdin.readline())
palmas = int(sys.stdin.readline())

print(pos+palmas if pos+palmas <= n_alunos else (pos+palmas)%n_alunos)
