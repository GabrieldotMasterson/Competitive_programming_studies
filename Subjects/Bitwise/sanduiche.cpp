// https://neps.academy/br/exercise/1659

#include <bits/stdc++.h>

using namespace std;

int main () {

    int n, m;

    cin >> n >> m;

    vector<pair<int,int>> ms;
    int x, y;
    for (int i = 0; i < m ; i++){
        cin >> x >> y;
        ms.push_back(make_pair(x-1, y-1));

    }

    // int total = pow(2, n)
    int ans = 0;
    // ideia -> percorrer todas as possiveis somando 1 se valida

    for (int mask = 1; mask < (1 << n); mask++ ){ // iterar pelo mesmo que total
        int som = 1;

        for (auto [a, b] : ms){
            if (
                (mask & (1<<a))
                and
                (mask & (1 << b))
            ) {
                som = 0;
            }
        }

        ans += som;
    }

    cout << ans;


}

// // chatgpt explicando:
// | mask (decimal) | mask (binário) | Ingredientes               |
// | -------------: | :------------: | -------------------------- |
// |              0 |       000      | nenhum                     |
// |              1 |       001      | Queijo                     |
// |              2 |       010      | Presunto                   |
// |              3 |       011      | Queijo + Presunto          |
// |              4 |       100      | Tomate                     |
// |              5 |       101      | Queijo + Tomate            |
// |              6 |       110      | Presunto + Tomate          |
// |              7 |       111      | Queijo + Presunto + Tomate |
