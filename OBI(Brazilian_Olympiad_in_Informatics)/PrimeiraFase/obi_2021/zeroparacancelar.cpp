#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int qtdNums;
    stack<int> nums; // Pilha para armazenar os números
    cin >> qtdNums;

    int novoNum;
    for (int i = 0; i < qtdNums; i++)
    {
        cin >> novoNum;

        if (novoNum != 0)
        {
            nums.push(novoNum);
        }
        else
        {
            if (!nums.empty())
            {
                nums.pop();
            }
        }
    }

    int soma = 0;

    while (!nums.empty())
    {
        soma += nums.top();
        nums.pop();
    }

    cout << soma;

    return 0;
}
