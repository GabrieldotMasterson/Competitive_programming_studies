#include <iostream>
#include <vector>
using namespace std;

int main(){

    int qtd;
    cin >> qtd;

    vector<int> camelos;
    int newcamelo;
    for (int i = 0; i < qtd; i++)
    {
        cin >> newcamelo;
        camelos.push_back(newcamelo);

    }

    int media= 0;
    for (int i = 0; i < qtd ; i++){
        media += camelos[i];
    }
    media = media/qtd;

    for (int i =0; i < qtd; i++){
        cout << media - camelos[i];
        if (i < qtd - 1){
            cout << "\n";
        }
    }
}