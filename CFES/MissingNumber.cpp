#include <bits/stdc++.h>

using namespace std;

constexpr int MAX = 200000;

int main() {

  int n;
  cin >> n;
  vector<int> a(n-1);

  for (int i = 0; i < n-1; i++) {

    cin >> a[i];

  }

  sort(a.begin(), a.end());

  //  for (int i = 0; i < n-1; i++) {

  //    cout << a[i] << " ";

  //  }
  //  cout << endl;

  int aux = a[0];
  if (aux != 1) { cout << 1; return 0; }
  for (int i = 0; i < n; i++) {
    //  cout << a[i] << " " << aux << " " << endl;
    
    if (aux != a[i]) { cout << aux; break; }


    aux++;
    

  }


}
  
