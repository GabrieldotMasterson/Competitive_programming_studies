#include <iostream>
#include <vector>

using namespace std;
int main() {
    int x1, y1, x2, y2;
    
    int n;
    
    int qtd_met = 0;

    int new_met_x;
    int new_met_y;

    int n_test = 1;
    
    while (true){
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) {
            break;
        }
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> new_met_x >> new_met_y;
            if ((new_met_x >= x1) && (new_met_x <= x2)) {

                if ((new_met_y >= y2) && (new_met_y <= y1)){
                    qtd_met++;
                }

            }
        }

        cout << "Teste "<< n_test << endl;
        cout << qtd_met << endl;
        cout << endl;
        n_test++;

    }



}