#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];

    int current_sum = 0;
    for (int i = 0; i < k; i++) current_sum += h[i];

    int min_sum = current_sum, min_index = 0;

    for (int i = k; i < n; i++) {
        current_sum = current_sum - h[i - k] + h[i];
        
        if (current_sum < min_sum) {
                
            min_sum = current_sum;
            min_index = i - k + 1;
        }
    }
    cout << min_index + 1 << endl; 
    return 0;
}

