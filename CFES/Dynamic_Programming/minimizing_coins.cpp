#include <bits/stdc++.h>

using namespace std;
using ll = long long;

constexpr int MAX = INT_MAX;

int main(){

    int n, x;
    cin >> n >> x;

    vector<int> c;
    int a;
    for (int i = 0; i < n; i++){
        cin >> a;
        c.push_back(a);
    }

    sort(c.begin(), c.end());

    vector<ll> dp(x + 1);

    dp[0] = 0;

    for (int i = 1; i <= x; i++){
        dp[i] = MAX;

        for (int m = 0; m < n; m++){
            if (i - c[m] >= 0){
                dp[i] = min(dp[i], dp[i-c[m]] + 1);
            }
        }

    }

    cout << dp[x];




    

}