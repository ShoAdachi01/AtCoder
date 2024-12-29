#include <bits/stdc++.h>
using namespace std;
#define rep(i,N) for (int i = 0; i < N; ++i)

int main() {
    string s; 
    cin >> s; 
    rep(i,s.length()) {
        if(s[i] != '.') cout << s[i];
        else continue;
    }
    return 0;
}
