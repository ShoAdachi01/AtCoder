<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define rep(i,N) for (int i = 0; i < N; ++i)

int main() {
    int N,D;
    string S;
    cin >> N >> D >> S;
    int dotnum = count(S.begin(),S.end(), '.');
    dotnum = dotnum + D;
    cout << dotnum << endl;
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;
#define rep(i,N) for (int i = 0; i < N; ++i)

int main() {
    int N,D;
    string S;
    cin >> N >> D >> S;
    int dotnum = count(S.begin(),S.end(), '.');
    dotnum = dotnum + D;
    cout << dotnum << endl;
    return 0;
}
>>>>>>> e4af8d2 (using namespace std;)
