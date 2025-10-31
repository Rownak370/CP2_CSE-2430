#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;  
        int a[10]; 
        for (int i = 0; i < n; i++) cin >> a[i];
        long long maxProduct = 0;
        for (int i = 0; i < n; i++) {
            long long product = 1;
            for (int j = 0; j < n; j++) {
                if (i == j)
                 product *= (a[j] + 1);
                else
                 product *= a[j];
            }
            if (product > maxProduct)
                maxProduct = product;     }
        cout << maxProduct << endl;
    }
    return 0;
}

