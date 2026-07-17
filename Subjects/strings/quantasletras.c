#include <stdio.h>
#include <string.h>

int main() {
    char s[51];
    char alvo;
    scanf("%s", s);
    scanf(" %c", &alvo);

    int tamanho = strlen(s);
    int total = 0;
    
    for (int i = 0; i < tamanho; i = i+ 1){
        if (s[i] == alvo){
            total = total + 1;
        }
    }

    printf("%d", total);
    
    return 0;
}
