
v1 = input()
v2 = input()
v3 = input()
v4 = input()
v5 = input()
v6 = input()

score = (v1, v2, v3, v4, v5, v6).count("V")

if score == 6 or score == 5:
  print(1)
elif score == 4 or score == 3:
  print(2)
elif score == 1 or score == 2:
  print(3)
else:
  print(-1)