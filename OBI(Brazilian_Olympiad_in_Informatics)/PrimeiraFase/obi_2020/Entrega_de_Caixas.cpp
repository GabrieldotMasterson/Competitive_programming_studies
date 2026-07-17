#include <iostream>
using namespace std;

int main() {

    int caixa1;
    cin >> caixa1;
    int caixa2;
    cin >> caixa2;
    int caixa3;
    cin >> caixa3;

    int result;
    result = 3;

    if ((caixa1+caixa2) < caixa3){
        cout << 1;
    }
    else{
        if ((caixa2 < caixa3) && (caixa1 >= caixa2)){
            cout << 2;
        }
        else{
            if (caixa1 < caixa2){
                
                if (caixa2 < caixa3){
                    cout << 1;
                }else{
                    cout << 2;
                }
            }
            else{
                cout << 3;
            }
        }
    }

}
