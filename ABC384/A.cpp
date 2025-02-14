<<<<<<< HEAD
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i,N) for (int i = 0; i < N; ++i)


int main() {
    int N;
    char c1, c2;
    string S;
    cin >> N >> c1 >> c2 >> S;
    rep(i,N){
        if(S[i] != c1) {
            S[i] = c2;
            cout << S[i];
            }else {
                cout << S[i];
            }
    }
return 0;
}
=======
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i,N) for (int i = 0; i < N; ++i)


int main() {
    int N;
    char c1, c2;
    string S;
    cin >> N >> c1 >> c2 >> S;
    rep(i,N){
        if(S[i] != c1) {
            S[i] = c2;
            cout << S[i];
            }else {
                cout << S[i];
            }
    }
return 0;
}
>>>>>>> e4af8d2 (using namespace std;)
