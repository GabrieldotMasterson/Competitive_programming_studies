#include <iostream>

using namespace std;

int main(){

    int n, montante, novo_valor, result;

    cin >> n;

    for (int i = 1; i < n+1; ++i){
        cin >> novo_valor;
        montante += novo_valor;
        if (montante >= 1000000) {
            if ( i == 1 ){
                result = 1;
            }else{
            result = i-1;
            }

        }
    }

    cout << result;

}