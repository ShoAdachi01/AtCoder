#include <bits/stdc++.h>
#include <iostream>
#define rep(i,N) for (int i = 0; i < N; ++i)
using namespace std;

int main() {
    string S;
    cin >> S;
    size_t posR = S.find('R');
    size_t posM = S.find('M');
    if (posR < posM) {
        cout << "Yes";
    } else {
    cout << "No";
    };
return 0;
}
