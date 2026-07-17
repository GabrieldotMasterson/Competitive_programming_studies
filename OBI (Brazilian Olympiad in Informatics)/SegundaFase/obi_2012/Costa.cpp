#include <iostream>
#include <vector>

using namespace std;
vector<vector<char>> mapa;
int l, c;

int verCosta(int i, int j) {
    if (mapa[i][j] == '#') {
        if (j+1 <= c-1) {if (mapa[i][j + 1] == '.') return 1;} else return 1;
        if (j-1 >= 0) {if (mapa[i][j - 1] == '.') return 1;} else return 1;
        if (i+1 <= l-1) {if (mapa[i + 1][j] == '.') return 1;} else return 1;
        if (i-1 >= 0) {if (mapa[i - 1][j] == '.') return 1;} else return 1;

    }
    return 0;
}

int result = 0;
int main() {

    cin >> l >> c;

    mapa.resize(l, vector<char>(c));
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            cin >> mapa[i][j];
            
    }
    }

    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            result += verCosta(i, j);
        }
    }

    cout << result << endl;

    return 0;
}
