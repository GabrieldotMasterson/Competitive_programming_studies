#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;
    int a;
    cin >> a;
    int b;
    cin >> b;

    int idadeF = (m - (a+b));

    if ( (idadeF > a) && (idadeF > b)) {
        cout << idadeF;
    } else{
        if ((a > b) && (a > idadeF) ){
            cout << a;
        }
        else{
            cout << b;
        }
    }

}