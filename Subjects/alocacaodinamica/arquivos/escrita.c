#include <stdio.h>

int main() {
    // EOF == -1
    FILE *ponteiro; 
    ponteiro = fopen("pasta/arquivo.txt","a"); // anexar == acrescenta o valor 

    if( ponteiro == NULL){
        printf("Erro ao abrir o arquivo");
    }else {
        printf("Abriu o arquivo");
        fputc('J', ponteiro);
        fputc('J', ponteiro);
        fputc('J', ponteiro);
        fputc('J\n', ponteiro);

        fputs("nepsAcademy forever\n", ponteiro);
        fputs("nepsAcademy forever\n", ponteiro);
        fputs("nepsAcademy forever\n", ponteiro);

        for (int i = 0; i < 100; i++) {
            fprintf(ponteiro, "NepsAcademy Forever %d", i);
        }


        fclose(ponteiro);
    }
}