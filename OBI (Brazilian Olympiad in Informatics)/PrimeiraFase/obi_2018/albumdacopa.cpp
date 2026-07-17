#include <iostream>
#include <set>
using namespace std;

int main() {
    int total;
    int tamanho;
    cin>>total;
    cin >> tamanho;

    int* figurinhas = new int[tamanho];

    for (int i = 0; i < tamanho; i++) {
        cin >> figurinhas[i];
    }

    set<int> s1(figurinhas, figurinhas + tamanho);
    cout << total - size(s1);

    return 0;
}
