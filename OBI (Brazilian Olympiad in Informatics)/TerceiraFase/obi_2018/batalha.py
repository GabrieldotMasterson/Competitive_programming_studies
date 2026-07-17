atk1 = input()
df1 = input()
atk2 = input()
df2 = input()
life1 = "vivo"
life2 = "vivo"

if atk1 != df2:
    life2 = "desmaia"
if atk2 != df1:
    life1 = "desmaia"

if life1 == life2:
    print(-1)
else:
    if life2 == "desmaia":
        print(1)
    if life1 == "desmaia":
        print(2)
