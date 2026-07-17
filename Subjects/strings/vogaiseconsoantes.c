#include <stdio.h>
#include <string.h>

int main() {
    char s[51];
    
    scanf("%s", s);
    
    int tamanho = strlen(s);
    
    int vogas = 0;
    int cosoant = 0;
    char listvogas[51] = {0}; // Inicializando com zeros /evita caracteres bizarros
    char listcosoant[51] = {0}; // Inicializando com zeros /evita caracteres bizarros
    
    for (int i = 0; i < tamanho; i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            listvogas[vogas] = s[i];
            vogas++;
        } else {
            listcosoant[cosoant] = s[i];
            cosoant++;
        }
    }

    // Adiciona o caractere nulo explicitamente no final se n tiver quebra tudo
    listvogas[vogas] = '\0';
    listcosoant[cosoant] = '\0';

    printf("Vogais: %s\n", listvogas);
    printf("Consoantes: %s\n", listcosoant);
    
    return 0;
}
