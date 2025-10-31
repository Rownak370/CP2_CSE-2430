#include <iostream>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    int a[100000], t[100000];
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    for (int i = 0; i < n; i++) 
        cin >> t[i];
    int always_awake = 0;
    for (int i = 0; i < n; i++)
        if (t[i] == 1)
            always_awake += a[i];

    int extra = 0, best = 0;
    for (int i = 0; i < k; i++)
        if (t[i] == 0)
            extra += a[i];
             best = extra;
    for (int i = k; i < n; i++) {
        if (t[i - k] == 0)
           extra -= a[i - k];
        if (t[i] == 0) 
            extra += a[i];
        if (extra > best)
         best = extra;
    }
    cout << always_awake + best;
    return 0;
}
