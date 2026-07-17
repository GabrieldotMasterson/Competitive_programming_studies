#include <iostream>

using namespace std;

int main() {
    int qtd;
    string gabarito, respostas;
    cin >> qtd;
    cin >> gabarito >> respostas;

    if (gabarito == respostas){
        cout << qtd;
    }
    else{
        int total = 0;
        for (int i = 0; i < qtd; i++){
            if (gabarito[i]==respostas[i]){
                total++;
            }
        }
        cout<<total;
    }

}