#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> v(n + 1), u(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        u[i] = v[i]; 
    }
    sort(u.begin() + 1, u.end());
    for (int i = 1; i <= n; i++) {
        v[i] += v[i - 1];
        u[i] += u[i - 1];
    }
    int m;
    cin >> m;
    while (m--) {
        int type, l, r;
        cin >> type >> l >> r;

        if (type == 1)
            cout << v[r] - v[l - 1] << endl; 
        else
            cout << u[r] - u[l - 1] << endl; 
    }
    return 0;
}

