#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i,N) for (int i = 0; i < N; ++i)
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main() {
    int N;
    cin >> N;
    vector<int> dp(N, numeric_limits<int>::max());
    vector<int> h(N, numeric_limits<int>::max());
    dp[0] = 0;
    rep(i,N) cin >> h[i];
    for(int i = 1; i < N; i++) {
        chmin(dp[i], dp[i-1] + abs(h[i] - h[i-1]));
        if (i > 1) chmin(dp[i], dp[i-2] + abs(h[i] - h[i-2]));
    }

    cout << dp[N-1] << endl;
return 0;
}
