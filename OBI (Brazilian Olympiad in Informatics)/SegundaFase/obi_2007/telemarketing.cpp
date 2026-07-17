#include <iostream>

using namespace std;

int main(){
    // Seu código vai aqui
    int vendedores;
    int qtd;
    cin >> vendedores;
    cin >> qtd;
    
    int* prioridade = new int[qtd];
    for (int i = 0; i < qtd; i++) 
    {
        cin >> prioridade[i];
    }

    

    delete[] prioridade;
    return 0;
}
