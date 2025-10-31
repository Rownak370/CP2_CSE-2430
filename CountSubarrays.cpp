#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];

        int count = 0;

        for (int start = 0; start < N; start++) {
            int last = arr[start];
            count++; 
            for (int end = start + 1; end < N; end++) {
                if (arr[end] >= last) {
                    count++;
                    last = arr[end];
                } else {
                    break;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}

