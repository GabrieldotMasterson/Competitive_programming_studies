#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long ans = 0;
    long long a, b, c;
    while (n--){
        cin >> a >> b >> c;

        priority_queue<long long> tres;
        tres.push(a);
        tres.push(b);
        tres.push(c);

        ans += tres.top();
        tres.pop();
        ans += tres.top();

        // soma de todos - soma do menor tbm daria certo e seria melhor na real

    }

    cout << ans;
}