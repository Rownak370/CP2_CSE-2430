#include <birs/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int freq[256] = {0};  
    for (char c : s) {
        freq[c]++;  
    }
    for (char c = 'A'; c <= 'Z'; c++) {
        if (freq[c] > 0) {
            cout << c << " " << freq[c] << endl;
        }
    }
    for (char c = 'a'; c <= 'z'; c++) {
        if (freq[c] > 0) {
            cout << c << " " << freq[c] << endl;
        }
    }
    return 0;
}

