#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n_predas, n_sapos;
    cin >> n_predas >> n_sapos;

    vector<int> ponte(n_predas, 0); // Inicializa o vetor com tamanho n_predas e valores 0

    for (int i = 0; i < n_sapos; i++)
    {
        int pos, pulo;
        cin >> pos >> pulo;
        pos -= 1; // Ajusta para índice baseado em 0
        ponte[pos] = 1;

        // Marca as pedras alcançáveis para a frente
        for (int j = pos + pulo; j < n_predas; j += pulo)
        {
            ponte[j] = 1;
        }

        // Marca as pedras alcançáveis para trás
        for (int j = pos - pulo; j >= 0; j -= pulo)
        {
            ponte[j] = 1;
        }
    }

    for (int i = 0; i < n_predas; i++)
    {
        cout << ponte[i];
        if (i < n_predas-1)
        {
            cout << "\n";
        }
    }

    return 0;
}
