#include<bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        long long arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];

        long long min_i = arr[0] - 1;
        long long answer = 1e18;

        for (int j = 1; j < N; j++) {
            long long sum = min_i + arr[j] + (j + 1);
            if (sum < answer) answer = sum;
            if (arr[j] - (j + 1) < min_i)
                min_i = arr[j] - (j + 1);

        cout << answer << endl;
    }
    }

    return 0;
}

