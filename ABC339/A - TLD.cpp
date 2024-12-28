#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int i = S.find_last_of('.') + 1;
    S.erase(0, i);
    cout << S;


return 0;
}
