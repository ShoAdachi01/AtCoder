#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, ans;
    cin >> S;
    int cnt = 0;
    for (char c : S) {
        if (c == '|') {
            cnt++;
        }else {
            if(cnt != 1) ans += c; 
        }         
    }
    cout << ans;
return 0;
}
