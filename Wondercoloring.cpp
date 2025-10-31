#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        vector<int> freq(26, 0);

        for (char c : s) {
            freq[c - 'a']++;
        }
        int pairs = 0, singles = 0;
        for (int f : freq) {
            if (f >= 2) pairs++;
            else if (f == 1) singles++;
        }

        int k = pairs + (singles / 2);
        cout << k << endl;
    }

    return 0;
}


