#include <bits/stdc++.h> 
using namespace std;
 
int main () {
 
    string name;
    cin >> name;
 
    int ans = 0;
    int aux = 0;
    char lc = name[0];
    
    for (int i = 0; i < name.size()+1; i++){
        if (name[i] == lc) {
            aux++;
        }else{
            ans = max(aux, ans);
            aux = 1;
            lc = name[i];
        }
    }
 
    cout << ans;
}