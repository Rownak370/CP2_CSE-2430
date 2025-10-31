#include<bits/stdc++.h>
using namespace std;
struct Friend {
    string name;
    int A, M, S, E;
    int total;
};
bool compare(Friend x, Friend y) {
    if (x.total != y.total)
        return x.total > y.total;  
    return x.name < y.name;        
}
int main() {
    int N;
    cin >> N; 

    vector<Friend> friends(N);
    for (int i = 0; i < N; i++) {
        cin >> friends[i].name >> friends[i].A >> friends[i].M >> friends[i].S >> friends[i].E;
        friends[i].total = friends[i].A + friends[i].M + friends[i].S + friends[i].E;
    }
    sort(friends.begin(), friends.end(), compare);

    for (int i = 0; i < N; i++) {
        cout << friends[i].name << " " << friends[i].total << " "
             << friends[i].A << " " << friends[i].M << " " << friends[i].S << " " << friends[i].E << "\n";
    }
    return 0;
}

