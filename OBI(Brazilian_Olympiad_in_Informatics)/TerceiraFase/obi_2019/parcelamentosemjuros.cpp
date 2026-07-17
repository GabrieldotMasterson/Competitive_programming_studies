#include <iostream>
using namespace std;

int main()
{
    int v;
    cin >> v;
    int p;
    cin >> p;

    int resto = v%p;

    for (int i = 0; i < p; i = i+1){
        if (i < resto){
            cout << (v/p) + 1;
        }
        else {cout << (v/p); }

        if (i < p-1){
            cout << "\n";
        }
    }

}