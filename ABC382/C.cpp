#include <bits/stdc++.h>
using namespace std;
#define rep(i,N) for (int i = 0; i < N; ++i)
#define rep2(j,N) for (int j = 0; j < N; ++j)

int main() {
    int N , M;
    cin >> N >> M;
    vector<int> A(N);
    vector<int> B(M);
    rep(i,N) cin >> A[i];
    rep(i,M) cin >> B[i];
    if (N > M) {
        rep2(j,M) {
            rep(i,N){
                if (B[j] >= A[i]){ 
                    cout << i+1 << endl;
                    continue;
                }else continue;

            }
        }
    }

    return 0;
}
