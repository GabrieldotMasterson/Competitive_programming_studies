

def ler_pares(n):
    return [tuple(map(int, input().split())) for _ in range(n)]

total_estudantes, n_amigos, n_inimigos = map(int, input().split())

amigos = ler_pares(n_amigos)
inimigos = ler_pares(n_inimigos)

total_restricoes = 0

for _ in range(total_estudantes // 3):
    grupo = set(map(int, input().split()))
    
    # Verificar restrições de amigos
    amigos_sozinhos = []
    for x, y in amigos:
        if (x in grupo) ^ (y in grupo):  # XOR para verificar se apenas um está no grupo
            total_restricoes += 1
            amigos_sozinhos.append(x if x not in grupo else y)
            for amizade in amigos:
                for amigo_sozinhos in amigos_sozinhos:
                    if amigo_sozinhos in amizade:
                        x, y = amizade

                        if y in grupo:
                            
                            total_restricoes -= 1
            

    # Verificar restrições de inimigos
    for u, v in inimigos:
        if u in grupo and v in grupo:
            total_restricoes += 1

print(total_restricoes)
