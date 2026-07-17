#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> mapa;
int lado, m;

int main() {
    cin >> lado >> m;
    mapa.resize(lado+1, vector<int>(lado+1,0));

    int t, a, b;
    for (int i = 0; i < m; i++) {
        
        cin >> t >> a >> b;

        if (t == 1) {
            mapa[a][b] = 1;
            mapa[b][a] = 1;

        } 
        else {
            if (mapa[a][b] == 1) cout << 1 << endl ;
            else cout << 0 << endl;
            
        }
        
    }
    

    return 0;
}