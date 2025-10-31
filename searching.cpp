#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long x;
    cin >> x;
    int position = -1;  
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {     
            position = i;    
            break;           
        }
    }
    cout << position << endl;
    return 0;
}

