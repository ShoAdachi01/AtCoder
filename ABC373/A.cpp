#include <bits/stdc++.h>
using namespace std;

#define rep(i,N) for (int i = 0; i < N; ++i)

int main() {
    int cnt = 0;
    vector<string> words(12);

    rep(i,12) cin >> words[i];

    rep(i,12) {
        if(words[i].length() == i+1) { 
            ++cnt;
        }
    }
    cout << cnt;


    return 0;
}
