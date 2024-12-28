#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i,N) for (int i = 0; i < N; ++i)

using namespace std;

int main() {
    int N, M, T = 0, mod;
    cin >> N >> M;

    vector <int> A(N), B(M), C(A);

    rep(i,N) cin >> A[i];
    rep(i,M) cin >> B[i];
    C.insert(C.end(), A.begin(), A.end());
    C.insert(C.end(), B.begin(), B.end());
    sort(C.begin(), C.end());    
    unordered_set<int> setA(A.begin(), A.end());
    bool check = false;
    for (int i = 1; i < C.size(); ++i) {
        if (setA.count(C[i - 1]) && setA.count(C[i])) {
            check = true;
            break;
        }
    }

    if (check) {
        cout << "Yes";
    } else {
        cout << "No";
    }    

return 0;
}
