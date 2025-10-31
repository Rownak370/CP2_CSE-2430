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
    int pos = 1;        

    for (int i = 1; i < n; i++) {
        if (a[i] < minValue) { 
            minValue = a[i];  
            pos = i + 1;       
        }
    }
    cout << minValue << " " << pos << endl;
    return 0;
}

