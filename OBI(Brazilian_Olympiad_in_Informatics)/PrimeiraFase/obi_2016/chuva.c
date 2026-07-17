#include <stdio.h>
#include <stdlib.h>

int main() {
    int *piscina;
    int qtd;
    scanf("%d", &qtd );
    piscina = (int*)malloc(qtd*sizeof(int));

    for (int i = 0 ; i < qtd; i++)
    {
        scanf("%d", &piscina[i]);
    }

    int result = 0;
    int menor;
    if (piscina[0] > piscina[qtd-1]){
        menor = piscina[qtd-1];
    }else{
        menor = piscina[0];
    }
    for (int i = 0 ; i < qtd; i++)
    {
        if (piscina[i] < menor){
            result+=1;
        }
    }

    printf("%d", result);
    free(piscina);
}