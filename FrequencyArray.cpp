#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    vector<int> count(M + 1, 0); 
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        if (x >= 1 && x <= M)  
            count[x]++;
    }
    for (int i = 1; i <= M; i++) {
        cout << count[i] << endl;
    }
    return 0;
}

