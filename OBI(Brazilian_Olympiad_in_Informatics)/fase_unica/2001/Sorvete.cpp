#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() { 
    int metros, n_sorveteiros;
    cin >> metros >> n_sorveteiros;

    vector<vector<int>> intervalos(n_sorveteiros, vector<int>(2));

    for (int i = 0; i < n_sorveteiros; i++) {
        cin >> intervalos[i][0] >> intervalos[i][1];
    }

    sort(intervalos.begin(), intervalos.end());

    vector<vector<int>> result;
    result.push_back(intervalos[0]);

    for (int i = 1; i < n_sorveteiros; i++) {
        vector<int>& ultimo = result.back();

        if (intervalos[i][0] <= ultimo[1]) {
            ultimo[1] = max(ultimo[1], intervalos[i][1]);
        } else {
            result.push_back(intervalos[i]);
        }
    }

    for (auto& intervalo : result) {
        cout << intervalo[0] << " " << intervalo[1] << endl;
    }

    return 0;
}
