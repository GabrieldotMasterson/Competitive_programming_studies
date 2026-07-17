'''
até 17 anos 15
18 a 59 anos 30
60 anos ou mais 20
'''
#https://neps.academy/br/exercise/2066

i1 = int(input())
i2 = int(input())
valor = 0

if i1 < 18:
  valor += 15
elif i1 < 60:
  valor += 30
else:
  valor += 20

if i2 < 18:
  valor += 15
elif i2 < 60:
  valor += 30
else:
  valor += 20

print(valor)

