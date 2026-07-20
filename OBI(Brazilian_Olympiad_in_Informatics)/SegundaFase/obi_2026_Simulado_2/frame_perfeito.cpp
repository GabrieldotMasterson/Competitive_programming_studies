#include <bits/stdc++.h>

using namespace std;

int main() {

    int h, w;

    cin >> h >> w;

    for (int i = 0; i < h; i++){

        if ((i == 0) || (i == h-1)){
            for (int j = 0; j < w; j++){
                cout << "#";
            }

        }
        else{
            for (int j = 0; j < w; j++){
                if ((j == 0) || (j==w-1)) {
                    cout << "#";
                } else {
                    cout << ".";
                }
            }
        }
        cout << "\n";

    }

}