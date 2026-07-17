#include <stdio.h>

int main()
{
    int x11, y11, x21, y21;
    int x12, y12, x22, y22;

    scanf("%d %d %d %d", &x11,&y11, &x21, &y21);
    scanf("%d %d %d %d", &x12,&y12, &x22, &y22);

    //mais facil verificar se estta fora doq dentro

    // total a esquerda 
    if (((x11 < x12) & (x21 < x12)) || ((x12 < x11) & (x22 < x11))) {
        printf("0");
        return 0;
    }

    //total a direita
    if (((x11 > x22) & (x21 > x12)) || ((x12 > x21) & (x22 > x11))) {
        printf("0");
        return 0;
    }

    //total acim
    if (((y11 > y22) & (y21 > y22)) || ((y12 > y21) & (y22 > y21))) {
        printf("0");
        return 0;
    }

    //total abax
    if (((y11 < y12) & (y21 < y12)) || ((y12 < y11) & (y22 < y11))) {
        printf("0");
        return 0;
    }

    printf("1");
    return 0;



    

    
}