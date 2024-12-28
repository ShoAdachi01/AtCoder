#include <bits/stdc++.h>
#define rep(i,N) for (int i = 0; i < N; ++i)
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> A(N), B(N);
    rep(i,N) cin >> A[i];
    rep(i,N) cin >> B[i];
    rep(i,N)rep(j,N) {
        if (A[i][j] != B[i][j]) {
            cout << i + 1 << " " << j + 1 << endl;
        }
    }

return 0;
}
