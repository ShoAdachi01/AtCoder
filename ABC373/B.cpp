#include <bits/stdc++.h>
using namespace std;

#define rep(i,N) for (int i = 0; i < N; ++i)

int main() {
    string s;
    int cnt = 0;
    cin >> s;
    
    map<char, int> pos;

    rep(i,26) pos[s[i]] = i;

    rep(i, 25) {
        char from = 'A' + i;
        char to = from + 1;
        cnt += abs(pos[from] - pos[to]);    
    }

    cout << cnt;

    return 0;
}
