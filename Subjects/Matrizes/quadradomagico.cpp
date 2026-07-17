#include <iostream> 
using namespace std;
string verificarquadrado()
{
    int quadrado[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 ; j++) {
            cin >> quadrado[i][j];
        }
    }

    // linhas horizontais
    int somahorizontal= 0;
    int somavertical = 0; 
    int somadiagonal = 0; 
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 3; j++){ 
            somahorizontal += quadrado[i][j];
        }
    }
    int somacomum = somahorizontal;

    for (int i = 0; i < 3; i++) {
        int somahorizontal= 0;
        int somavertical = 0; 

        for (int j = 0; j < 3; j++){ 
            somahorizontal += quadrado[i][j];
        }
        for (int j = 0; j < 3; j++){ 
            somavertical += quadrado[j][i];
        }
        if (somavertical != somacomum) { 
            return "NAO";
        }
        if (somahorizontal != somacomum) { 
            return "NAO";
        }
    }
    for (int i = 0; i < 3; i++) {
        somadiagonal += quadrado[i][i];

    }

    if (somadiagonal != somacomum) { 
        return "NAO";
    }
    

    return "SIM";


}
int main() { 
    cout << verificarquadrado();
}