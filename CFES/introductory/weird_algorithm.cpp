#include <bits/stdc++.h>

using namespace std;

constexpr int MAX = 10000000

int main() {
  int n;
  cin >> n;
  
  int aux = 0;
  array(int, max) a;
  while (n != 1) {
    a[aux] = n;
    if ((n/2)%2 = 0) {
      n = n/2;
    }
    else {
      n = n*3 + 1
    }
  }

  for (int i = 0; i < aux; i++) {
    
    cout << a[i] << " ";

  }
}
