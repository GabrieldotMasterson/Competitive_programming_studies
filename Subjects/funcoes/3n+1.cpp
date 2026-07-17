#include <iostream>

int tentativas = 0;

int collatz(int n) {
    if (n == 1) {
        return 0;
    } else if (n % 2 == 0) {
        return 1 + collatz(n / 2);
    } else {
        return 1 + collatz(3 * n + 1);
    }
}

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << collatz(n) << endl;
    return 0;
}