#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T; 
    while (T--) {
        int N;
        cin >> N; 
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];

        for (int start = 0; start < N; start++) {
            int currentMax = arr[start]; 
    
            for (int end = start; end < N; end++) {
                currentMax = max(currentMax, arr[end]); 
                cout << currentMax << " "; 
            }
        }
        cout << endl; 

    return 0;
}

