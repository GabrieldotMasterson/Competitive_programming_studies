#include <iostream>
#include <climits> // Para usar INT_MIN
using namespace std;

int main()
{
    int matriz[3][3];

    // Entrada da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matriz[i][j];
        }
    }

    // Encontrar o maior valor em toda a matriz
    int maiorall = INT_MIN;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > maiorall) {
                maiorall = matriz[i][j];
            }
        }
    }

    // Substituir todas as ocorrências do maior valor por -1
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == maiorall) {
                matriz[i][j] = -1;
            }
        }
    }

    // Imprimir a matriz resultante
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j > 0) {
                cout << " ";
            }
            cout << matriz[i][j];
        }
        cout << "\n";
    }

    return 0;
}
// começar a comentar mais os codes 
// ajuda a pensar melhor 