#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int minValue = a[0];      
    int count = 1;             
    for (int i = 1; i < n; i++) {
        if (a[i] < minValue) {
            minValue = a[i];
            count = 1;          
        } else if (a[i] == minValue) {
            count++;           
        }
    }
    if (count % 2 == 1) {
        cout << "Lucky" << endl;
    } else {
        cout << "Unlucky" << endl;
    }

    return 0;
}

