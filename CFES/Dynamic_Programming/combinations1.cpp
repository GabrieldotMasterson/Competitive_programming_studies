#include <bits/stdc++.h> 
using namespace std;
 
constexpr int MAX = 1000000;
constexpr int INF = 1e9; 
 
int main () {
 
    int n, x; 
    cin >> n >> x;
 
    vector<int> coins;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        coins.push_back(c);
    }
 
    int dp[MAX+1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
 
    for (int j = 1; j < x+1; j++){
        for (auto c : coins) {
            if (j - c >= 0) {
                dp[j] = ((dp[j] + dp[j-c] ))% 1000000007;
                //cout << dp[j] << endl;
            }
        }
 
    }
    cout << dp[x];
 
}