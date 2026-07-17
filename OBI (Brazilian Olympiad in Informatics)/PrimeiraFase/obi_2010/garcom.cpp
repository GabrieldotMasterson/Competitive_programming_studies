#include <iostream>

using namespace std;

int main () {

    int n_bandejas, latas, copos, total = 0;
    cin >> n_bandejas;

    for (int i = 0; i < n_bandejas; i++){

        cin >> latas >> copos;
        if (latas > copos) {
            total += copos;
        }

    }
     
    cout << total;
}