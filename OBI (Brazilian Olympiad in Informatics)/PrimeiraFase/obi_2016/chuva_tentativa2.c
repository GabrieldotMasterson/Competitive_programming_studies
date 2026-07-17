#include <stdio.h>
#include <stdlib.h>

int main() {
    int qtd;
    scanf("%d", &qtd);
    
    int *piscina = (int*)malloc(qtd * sizeof(int));
    for (int i = 0; i < qtd; i++) 
    {
        scanf("%d", &piscina[i]);
    }

    int *esquerda = (int*)malloc(qtd * sizeof(int));
    int *direita = (int*)malloc(qtd * sizeof(int));
    esquerda[0] = piscina[0];
    for (int i = 1; i < qtd; i++)
     {
        esquerda[i] = (piscina[i] > esquerda[i - 1]) ? piscina[i] : esquerda[i - 1];
    }

    direita[qtd - 1] = piscina[qtd - 1];
    for (int i = qtd - 2; i >= 0; i--) 
    {
        direita[i] = (piscina[i] > direita[i + 1]) ? piscina[i] : direita[i + 1];
    }

    int cont = 0;
    for (int i = 0; i < qtd; i++) 
    {
        int nivel_agua = (esquerda[i] < direita[i]) ? esquerda[i] : direita[i];  
        if (nivel_agua > piscina[i]) {
            cont++;
        }
    }

    printf("%d", cont);

    free(piscina);
    free(esquerda);
    free(direita);
}
