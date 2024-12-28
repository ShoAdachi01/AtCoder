#include <bits/stdc++.h>
using namespace std;

bool check () {

    string S;
    cin >> S;
    int N = S.size();
    if (S.front() != '<') return false;
    if (S.back() != '>') return false;
    for (int i = 1; i <= N-2; i++) {
        if (S[i] != '=') return false;
    }
    return true;
}

int main() {
 if(check()) cout << "Yes" << endl;
 else cout <<"No" <<endl;
 return 0;
}