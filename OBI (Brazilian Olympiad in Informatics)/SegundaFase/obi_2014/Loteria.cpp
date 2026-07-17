#include <iostream>
using namespace std;

int main()
{
    int pedrin[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> pedrin[i];
    }
    int maquina[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> maquina[i];
    }

    int total = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (maquina[i] == pedrin[j])
            {
                total += 1;
            }

        }
    }

    if (total == 3) {
        cout << "terno";
    }else{
        if (total == 4) {
            cout << "quadra";
        }else{
            if (total == 5) {
                cout << "quina";
            }else{
                if (total == 6) {
                    cout << "sena";
                }else{cout << "azar";}
            } 
        }
    }

}