#include <stdio.h>
#include <stdlib.h>

int main(){
    // Lendo a entrada do exercício
	int B, C;
	scanf("%d",&B);
	scanf("%d",&C);

    int paro(int a, int b){
        int result = a + b;
        if (result % 2 == 0){
            printf("Bino");
        }else{printf("Cino");}
    }

    // Seu código vai aqui
    paro(B, C);
    return 0;
}