#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m;
    int result = 0;

    char opr = '+';
    int val;

    int n_test = 1;
    
    while (true)
    {
        cin >> m;
        if (m == 0) {
            break;
        }

        for (int i = 0; i < m; ++i){
            if (i > 0){
                cin >> opr;
            }

            cin>>val;

            if (opr == '+'){
                result += val;
            }else{
                result -= val;
            }
        }

        cout << "Teste " << n_test << endl;
        cout << result << endl;
        cout << endl;
        result = 0;
        opr = '+';
        n_test++;
    }
    

}