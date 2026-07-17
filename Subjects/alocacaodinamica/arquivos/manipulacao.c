
#include <stdio.h>

int main(){
    FILE *ponteiro; 
    ponteiro = fopen("pasta/arquivo.txt","r"); 

    if( ponteiro == NULL){
        printf("Erro ao abrir o arquivo");
    }else {
        printf("Abriu o arquivo");
        fclose(ponteiro);
    }
}
