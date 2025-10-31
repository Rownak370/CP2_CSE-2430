#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool visited[101] = {false};  
    vector<int> indices;
    for (int i = 0; i < n; i++) {
        if (!visited[a[i]]) {   
            visited[a[i]] = true;
            indices.push_back(i + 1);  
        }
    }
    if (indices.size() < k) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        for (int i = 0; i < k; i++) {
            cout << indices[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

