<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;


int main() {
    string S;
    cin >> S;
    int cnt = 0;
    bool first = true;
    for (int i = 1; i < S.length(); i++ ){
        if(S[i] == S[0]) {
            first = false;
            break;
        }
    }
    for (char c : S) {
        if (c == S.front()) {
            cnt++;
        }else {
            cnt++;
            break;
        } 

    }
    if(first) {
        cout << 1;
    } else {
    cout << cnt; 
    }    

return 0;
=======
#include <bits/stdc++.h>
using namespace std;


int main() {
    string S;
    cin >> S;
    int cnt = 0;
    bool first = true;
    for (int i = 1; i < S.length(); i++ ){
        if(S[i] == S[0]) {
            first = false;
            break;
        }
    }
    for (char c : S) {
        if (c == S.front()) {
            cnt++;
        }else {
            cnt++;
            break;
        } 

    }
    if(first) {
        cout << 1;
    } else {
    cout << cnt; 
    }    

return 0;
>>>>>>> ab1a627 (Add recent AtCoder solutions)
}