lado1 = int(input())
lado2 = int(input())
raio = int(input())
fatias = int(input())

def solve():
    if 2 * raio > lado1 or 2 * raio > lado2 or (360 % fatias) != 0:
        return "N"
    return "S"

print(solve())