/* Utilizar ponteiros sem alocar
Não verificar a alocação
Não desalocar a memória alocada
Utilizar ponteiros após desalocação
Esquecer o '\0' ao alocar strings
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;
    p = (int*)malloc(sizeof(int)*3);
    if (p == NULL) {
        return -1;
    }else{
        for (int i = 0; i < 3; i++){
            scanf("%d", &p[i]);
        }
        for (int i = 0; i < 3; i++){
            printf("%d ", p[i]);
        }
    }
    printf("\n"); 
    free(p);
    // n usar mais o p
}

// int main() {
//     char *p;
//     // nepsAcademy /0
//     p = (int*)malloc(sizeof(char)*strlen("NepsAcademy ")); //11 caracteres e o /o
//     strcpy(p, "NepsAcademy");
//     if (p == NULL) {
//         return -1;
//     }else{
//         printf("%s\n", p);
//     }
//     printf("\n"); 
//     free(p);
//     // n usar mais o p
// }