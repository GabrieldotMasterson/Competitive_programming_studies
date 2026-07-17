#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    vector<int> c;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (a[i] < b[j]) c.push_back(a[i++]);
        else c.push_back(b[j++]);
    }

    while (i < n) c.push_back(a[i++]);
    while (j < m) c.push_back(b[j++]);

    for (int x : c) cout << x << endl;
    cout << endl;

    return 0;
}
