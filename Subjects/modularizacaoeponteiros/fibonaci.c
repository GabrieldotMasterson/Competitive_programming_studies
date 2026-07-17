#include <stdio.h>

int f(int x){ 
    if(x == 1){ 
        return 1;
    }
    else{ 
        return f(x-1) + f(x-2);
    }
}

int main(){
    int N;

    scanf("%d", &N);

    printf("%d\n", f(N));
}