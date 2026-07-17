#include <stdio.h>
#include <stdlib.h>

int main(){    	
    // Seu código vai aqui
    int x;
    int y;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x == 0 || y == 0){
        printf("eixos");
    }
    else if (x > 0){
        if (y > 0 ) {
            printf("Q1");
        }
        if (y < 0 ) {
            printf("Q4");
        }
    }
    else if (x < 0){
        if (y > 0 ) {
            printf("Q2");
        }
        if (y < 0 ) {
            printf("Q3");
        }
    }
    return 0;
}
