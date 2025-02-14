<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define rep(i,N) for (int i = 0; i < N; ++i)

int main() {
    int N,D, pos = N - 1;
    string S;
    cin >> N >> D >> S;
    rep(i,D){  
        pos = S.rfind('@', pos - 1); 
            if(S[pos] == '@'){
                S[pos] = '.' ;       
        };
    };


    cout << S << endl;

    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;
#define rep(i,N) for (int i = 0; i < N; ++i)

int main() {
    int N,D, pos = N - 1;
    string S;
    cin >> N >> D >> S;
    rep(i,D){  
        pos = S.rfind('@', pos - 1); 
            if(S[pos] == '@'){
                S[pos] = '.' ;       
        };
    };


    cout << S << endl;

    return 0;
}
>>>>>>> e4af8d2 (using namespace std;)
