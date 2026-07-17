#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> fita;
    int qtd;
    cin >> qtd;

    int nn;
    for (int i = 0; i < qtd; i++) {
        cin >> nn;
        fita.push_back(nn);
    }

    // Vetor para armazenar os resultados
    vector<int> resultado(qtd, INT_MAX);

    // Primeiro loop: calcular distâncias a partir da esquerda
    int ultima_pos_zero = -1;
    for (int i = 0; i < qtd; i++) {
        if (fita[i] == 0) {
            ultima_pos_zero = i;
        }
        if (ultima_pos_zero != -1) {
            resultado[i] = i - ultima_pos_zero;
        }
    }

    // Segundo loop: calcular distâncias a partir da direita
    ultima_pos_zero = -1;
    for (int i = qtd - 1; i >= 0; i--) {
        if (fita[i] == 0) {
            ultima_pos_zero = i;
        }
        if (ultima_pos_zero != -1) {
            resultado[i] = min(resultado[i], ultima_pos_zero - i);
        }

        // Ajustar valores maiores que 9 para 9
        if (resultado[i] > 9) {
            resultado[i] = 9;
        }
    }

    // Imprimir o resultado
    for (int i = 0; i < qtd; i++) {
        cout << resultado[i];
        if (i < qtd - 1) {
            cout << " ";
        }
    }

    return 0;
}
