#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    p = (int*)malloc(sizeof(int)*2);
    p[0] = 4;
    *(p+1) = 5;
    printf("%d %d \n", p[0], p[1]);
    free(p);

    
}