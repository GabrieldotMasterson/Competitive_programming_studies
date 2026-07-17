#include <stdio.h>
#include <stdlib.h>

int main() {    	
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);

    float media = ((n1 * 2) + (n2 * 3)) / 5.0;

    if (media >= 7.0) { 
        printf("Aprovado");
    } 
    else if (media < 3.0) { 
        printf("Reprovado");
    } 
    else {
        printf("Final");
    }
}
