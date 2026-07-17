#include <iostream>
using namespace std;

int main() {

    int ana;
    cin >> ana;
    int bea;
    cin >> bea;

    int cadeiras[3] = {0,0,0};
    cadeiras[ana % 3] = 1;
    if (cadeiras[bea % 3] != 1) {
        cadeiras[bea % 3] = 1;
    } else {
        cadeiras[((bea % 3)+1) % 3] = 1;
    }

    for (int i = 0; i < 3; i++) {

        if (cadeiras[i] == 0) {
            cout << i;
        }
    }



}