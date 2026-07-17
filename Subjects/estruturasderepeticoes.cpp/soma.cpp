#include <iostream>

using namespace std;

int main() {
    int n, val, val_total = 0; // Inicialize val_total com 0
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> val;
        val_total += val;
    }

    cout << val_total;

    return 0;
}
