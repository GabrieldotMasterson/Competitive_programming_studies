#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> tabuleiro(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> tabuleiro[i][j];
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            vector<int> v = {
                tabuleiro[i][j],
                tabuleiro[i + 1][j],
                tabuleiro[i][j + 1]
            };

            if (count(v.begin(), v.end(), 1) > 1) {
                tabuleiro[i + 1][j + 1] = 0;
            } else {
                tabuleiro[i + 1][j + 1] = 1;
            }
        }
    }

    cout << tabuleiro[n - 1][n - 1] << endl;


    return 0;
}
