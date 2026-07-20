#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;

    cin >> q;
    
    priority_queue<int, vector<int>, greater<int>> jardim;

    int type, h;
    int ans = 0;
    while (q--) {
        cin >> type >> h;

        if (type == 1){
            ans++;
            jardim.push(h);
        }
        else{
            while(!jardim.empty()){
                if (jardim.top() <= h){
                    ans--;
                    jardim.pop();
                }
                else{break;}
            }
        }
        cout << ans << "\n";
    }

}