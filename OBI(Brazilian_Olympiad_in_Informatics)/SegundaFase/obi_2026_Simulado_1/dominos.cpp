#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    int a;

    vector<int> nums;

    for (int i = 0; i < n; i++) {
        cin >> a;
        nums.push_back(a);
    }

    int max_acl = 0;
    for (int i = 0; i < n; i++) {
        if (i > max_acl) break;

        if (i + nums[i] - 1 > max_acl)
            max_acl = min(n - 1, i + nums[i] - 1);

        // cout << i << " " << nums[i] << " " << max_acl << endl;
    }

    cout << max_acl + 1;
}