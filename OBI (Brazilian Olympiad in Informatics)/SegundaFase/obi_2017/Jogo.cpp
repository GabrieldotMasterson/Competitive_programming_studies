#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;
int main() {
    int n;
    vector<vector<int>> tabuleiro;
    cin >> n;
    for (int i = 0; i < n; i++) {
        vector<int> linha = {};
        for (int j = 0; j < n; j++) {
            int valor;
            cin >> valor;
            linha.push_back(valor);
        }
        tabuleiro.push_back(linha);
    }
    
    int px, py = 0;
    while (1) {


        while (px < n-2 && py < n-2) {
            vector<int> v = {tabuleiro[px][py], tabuleiro[px + 1][py], tabuleiro[px][py + 1]};
            if (count(v.begin(), v.end(), 1) > 1) {
                tabuleiro[px][py] = 1;
            }else {
                tabuleiro[px][py] = 0;
            }
            px++;
            
        }
        if (!(py == n-2)) {
            py++;
            px = 0;
        }else{
            vector<int> v = {tabuleiro[px][py], tabuleiro[px + 1][py], tabuleiro[px][py + 1]};
            if (count(v.begin(), v.end(), 0) > 1) {
                cout << 1 << endl;
            }
            else {
                cout << 0 << endl;
            }
            break;
        }
       
        
    }
    for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << tabuleiro[i][j] << " ";
            }
            cout << endl;
        }
    

}

