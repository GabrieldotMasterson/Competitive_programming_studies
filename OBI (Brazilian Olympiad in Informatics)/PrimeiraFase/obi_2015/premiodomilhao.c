#include <stdio.h>
#include <stdlib.h>

int main(){    	
    // Seu código vai aqui
    int qtd;
    scanf("%d",  &qtd );

    int total = 0;
    int newval;
    int i = 0;
    while ( i < qtd) {
        i += 1;
        scanf("%d" , &newval);
        total += newval;
        if (total >= 1000000){
            break;
        }
        

    }
    printf("%d", i);

}
