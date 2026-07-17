#include <bits:stdc++.h>

using namespace std;

int main () {

    // cada t tema 
    // - > 1 pessoa domina (1)
    // - > 1 nao (0)

    int n, k;

    vector<vector<int>> domina(n, vector<int>(k, 0));

    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;

        for (int j = 0; j < h; j++) {
            int tema;
            cin >> tema;
            domina[i][tema - 1] = 1;
        }
    }


}



// anotações caso 1

/*

3 3
2 1 2
2 2 3
2 1 3

3 competidores
3 temas

comps:
1 1 0
0 1 1
1 0 1

ans: 3

no maximo dez temas
0 0 0 0 0 0 0 0 0 0 0

*/