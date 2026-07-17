#include <iostream>

using namespace std;

int think( int n) {
    int full_bottles;
    int empty_bottles;
    full_bottles = n / 3;
    empty_bottles = n % 3;
    if (n == 2) return 1;
    if (full_bottles == 0) {
        return 0;
    }
    else {
        return full_bottles + think(full_bottles + empty_bottles);
    }
    
}

int main() {
    int n;
    
    while (cin >> n) {
        if (n == 0) break;
        cout << think(n) << endl;
    }
    
    return 0;
}