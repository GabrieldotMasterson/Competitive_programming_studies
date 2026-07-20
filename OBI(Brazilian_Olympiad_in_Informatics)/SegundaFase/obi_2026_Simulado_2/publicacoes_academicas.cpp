#include <bits/stdc++.h>

using namespace std;

int main() { 

    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n+1);

    int x, y;
    while (m--){
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    for (int i = 1; i < n+1; i++) {
        int k = n-1-a[i].size();
        if (k < 3)
            cout << 0 << '\n';
        else
            cout << 1LL * k * (k - 1) * (k - 2) / 6 << '\n'; 
    }

}