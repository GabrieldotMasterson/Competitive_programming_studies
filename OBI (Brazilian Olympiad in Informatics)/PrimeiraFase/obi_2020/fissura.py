import sys 

lincol, stk = map(int, sys.stdin.readline().split())
M = [list(map(int, x)) for x in sys.stdin.read().split("\n")]
bool = [[False for i in range(lincol)] for i in range(lincol)]

def flood_fill(x, y, forca):
    if bool[y][x] == True: return

    bool[y][x] = True

    if M[y][x] <= forca:
        M[y][x] = "*"
    else:
        return
    
    if x-1 > 0: flood_fill(x-1,y,forca) 
    if x+1 < lincol: flood_fill(x+1,y,forca)
    if y-1 > 0: flood_fill(x,y-1,forca)
    if y+1 < lincol: flood_fill(x,y+1,forca)

flood_fill(0, 0, stk)

for lin in range(lincol):
    print("".join([str(x) for x in M[lin]]))