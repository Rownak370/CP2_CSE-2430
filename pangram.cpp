#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<bool> str(26, false);
    for (char c : s) {
        if (c >= 'A' && c <= 'Z') {
            c = c - 'A' + 'a'; 
        }
        str[c - 'a'] = true;
    }
    bool isPangram = true;
    for (bool b : str) {
        if (!b) {
            isPangram = false;
            break; }
    }

    if (isPangram)
        cout << "YES\n";
    else 
    cout << "NO\n";
   return 0;
}

