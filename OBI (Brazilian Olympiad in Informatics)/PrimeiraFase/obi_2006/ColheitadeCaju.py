l_fazenda, c_fazenda, l_area, c_area = map(int, input().split())
fazenda = [list(map(int, input().split())) for _ in range(l_fazenda)]

def soma(y,x):
    return sum(fazenda[y + ya][x + xa] for ya in range(l_area) for xa in range(c_area))

somas = ([soma(y,x) for y in range(l_fazenda- l_area+1) for x in range(c_fazenda- c_area+1)])

print(max(somas))
