#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> tabuleiro(N); 
    vector<int> resultado(N, 0); 

    for (int i = 0; i < N; i++) {
        cin >> tabuleiro[i];
    }

    for (int i = 0; i < N; i++) {
        if (i > 0) { 
            resultado[i] += tabuleiro[i - 1];
        }
        resultado[i] += tabuleiro[i]; 
        if (i < N - 1) { 
            resultado[i] += tabuleiro[i + 1];
        }
    }

    for (int i = 0; i < N; i++) {
        cout << resultado[i] << endl;
    }

    return 0;
}
