<<<<<<< HEAD
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i,N) for (int i = 0; i < N; ++i)
using namespace std;

int main() {
    int N, T = 0, mod;
    cin >> N;

    vector <int> C(N);
    vector <string> S(N);

    rep(i,N) cin >> S[i] >> C[i];
    rep(i,N) T += C[i];
    mod = T % N;
    sort(S.begin(), S.end());
    cout << S[mod];

return 0;
}
=======
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i,N) for (int i = 0; i < N; ++i)
using namespace std;

int main() {
    int N, T = 0, mod;
    cin >> N;

    vector <int> C(N);
    vector <string> S(N);

    rep(i,N) cin >> S[i] >> C[i];
    rep(i,N) T += C[i];
    mod = T % N;
    sort(S.begin(), S.end());
    cout << S[mod];

return 0;
}
>>>>>>> ab1a627 (Add recent AtCoder solutions)
