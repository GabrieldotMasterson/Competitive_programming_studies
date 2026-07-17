n1 = input()
n2 = input()

for i in range(max(len(n1),len(n2))):
    if i < len(n1) and i < len(n2):
        d1 = n1[i]
        d2 = n2[i]

        if d1 < d2:
            n1 = list(n1)
    
            n1[i] = "0"
    
            n1 = ''.join(n1)

        elif d2 < d1:
            n2 = list(n2)
    
            n2[i] = "0"
    
            n2 = ''.join(n2)
        
n1 = n1.replace("0","")
n2 = n2.replace("0","")

print(n1, n2)
