valor_final , n_moedas = list(map(int,input().split()))

moedas = list(map(int,input().split()))

def moeda(valor_final, n_moedas):

    while valor_final >=n_moedas:
        moedas.sort()
        for moeda in moedas:
           
            if moeda > valor_final:
                if all(x > valor_final for x in moedas):
                    return "N"
                    
            else:
                valor_final = valor_final - moeda
                moedas.remove(moeda)
        
    return "S"

print(moeda(valor_final, n_moedas))

