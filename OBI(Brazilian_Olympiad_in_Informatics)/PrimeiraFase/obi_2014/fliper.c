#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int A, B;
	scanf("%d %d",&A, &B);

    // Seu código vai aqui
    if (A == 0){
        printf("C");
    }
    else {
        if (B == 0){
            printf("B");
        }
        else{
            printf("A");
        }
    }

    return 0;
}