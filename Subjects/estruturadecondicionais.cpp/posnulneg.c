#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int x;
	scanf("%d",&x);

    // Seu código vai aqui
    if (x == 0) { 
    printf("nulo");
    }
    else if(x > 0){
        printf("positivo");
    }
    else{
        printf("negativo");
    }
    return 0;
}