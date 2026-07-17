#include <stdio.h>
#include <stdlib.h>

int main(){    	
    // Seu código vai aqui
    int n1;
    int n2;

    scanf("%d", &n1);
    scanf("%d", &n2);

    if( n1 < n2 ){
        while(n1 < n2+1) {
            printf("%d ", n1);
            n1 = n1 + 1;
        }
    }
    else if (n1 > n2){
        while(n2 < n1+1) {
            printf("%d ", n2);
            n2 = n2 + 1;
        }
    }else{printf("%d", n1);}
    
    return 0;
}
