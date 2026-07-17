#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    int qtd_nums;
    cin >> qtd_nums;

    for (int i = 0; i < qtd_nums; i++) {
        int valor;
        cin >> valor;
        nums.push_back(valor);
    }

    int maior_seq;
    maior_seq = 0;
    int atual_seq;
    atual_seq = 0;
    int ult_digito;
    ult_digito = nums[0];
    
    for (int i = 1; i < qtd_nums; ++i) {
        if (nums[i] == ult_digito){
            atual_seq += 1;
        }
        else{
            if (atual_seq > maior_seq){
                maior_seq = atual_seq;
                
            }
            atual_seq = 0;

        }
        
        ult_digito = nums[i];

    }

    if (atual_seq > maior_seq){
        maior_seq = atual_seq;
        
    }
    cout << maior_seq +1;
    
}