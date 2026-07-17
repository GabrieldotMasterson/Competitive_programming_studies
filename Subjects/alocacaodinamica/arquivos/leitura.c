
#include <stdio.h>

int main(){
    FILE *ponteiro; 
    ponteiro = fopen("pasta/arquivo.txt","r"); 

    if( ponteiro == NULL){
        printf("Erro ao abrir o arquivo");
    }else {
        printf("Abriu o arquivo\n");

        // while (feof(ponteiro) == 0 )
        // {   
        //     //char c = fgetc(ponteiro);
        //     char s[20];
        //     fgets(s, 20, ponteiro);
        //     printf("linha = %s \n",s);
        // }

        char c = fgetc(ponteiro);
        char s[20];
        int a,b,c;
        fscanf(ponteiro, "%d%d%d", &a, &b, &c);
        printf("lidos %d %d %d", a, b, c);
        fclose(ponteiro);
    }
}
