#include <bits/stdc++.h>

using namespace std;

int main() {

    long long n;
    cin >> n;
    long long total;

    vector<long long> dp(n+1);
    dp[0] = 1;

    for (long long i = 1; i <= n; i++){
        if  (i <= 6) {
            total = pow(2, i-1);
            dp[i] = total;
            
        } else{
            dp[i] = (dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4] + dp[i-5] + dp[i-6]) % 1000000007;
        }
    }

    cout << dp[n] % 1000000007;



}