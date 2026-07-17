#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){    	
    // Seu código vai aqui
    int qtd;
    scanf("%d", &qtd );

    bool A, B, aux = false;
    int i = 0;
    int newval;
    while (i < qtd){
        i += 1;
        scanf("%d", &newval);
        if (newval == 1){
            A = !A;
        }
        else{
            aux = A;
            A = B;
            B = aux;
        }
    }

    printf("%d\n%d", A,B);

    return 0;
}
