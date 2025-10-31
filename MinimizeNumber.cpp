#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    long long arr[N];
    for (int i = 0; i < N; i++) cin >> arr[i];

    int operations = 0;

    while (true) {
        bool allEven = true;
        for (int i = 0; i < N; i++) {
            if (arr[i] % 2 != 0) {
                allEven = false;
                break;
            }
        }
        if (!allEven) break;

        for (int i = 0; i < N; i++) arr[i] /= 2;
        operations++;
    }

    cout << operations << endl;
    return 0;
}

