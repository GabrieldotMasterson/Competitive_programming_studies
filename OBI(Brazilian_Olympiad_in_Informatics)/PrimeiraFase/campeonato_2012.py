cv,ce,cg,fv,fe,fg = map(int,input().split())
      
if (cv*3 + ce) > (fv*3 + fe): 
    print("C")

elif (cv*3 + ce) < (fv*3 + fe): 
    print("F")

else:
    if cg > fg:
        print("C")
    elif cg < fg:
        print("F")
    else:
        print("=")