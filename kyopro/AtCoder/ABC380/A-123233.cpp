#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i,N) for (int i = 0; i < N; ++i)
using namespace std;

int main() {
    string N;
    cin >> N;
    sort(N.begin(),N.end());
    if (N == "122333") cout << "Yes" << endl;
    else cout << "No" << endl;
return 0;
}
