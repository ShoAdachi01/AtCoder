<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

bool one_diff(const string &s, const string &t) {
    int i = 0, j = 0;
    bool diff = false;
    while (i < s.size() && j < t.size()) {
        if (s[i] == t[j]) {
            i++;
            j++;
        } else {
            if (diff) return false;
            diff = true;
            j++;
        }
    }
    return true;
}

int main(){
    int K;
    string S, T;
    cin >> K >> S >> T;
    if (S == T) {
        cout << "Yes";
        return 0;
    }
    int lenS = S.size();
    int lenT = T.size();
    if (lenS == lenT) {
        int cnt = 0;
        for(int i=0; i<lenS; ++i){
            if(S[i] != T[i]) cnt++;
            if(cnt >1) break;
        }
        if(cnt <=1) cout << "Yes";
        else cout << "No";
    }
    else if (lenS +1 == lenT) {
        if(one_diff(S, T)) cout << "Yes";
        else cout << "No";
    }
    else if (lenS -1 == lenT) {
        if(one_diff(T, S)) cout << "Yes";
        else cout << "No";
    }
    else {
        cout << "No";
    }
}
=======
#include <bits/stdc++.h>
using namespace std;

bool one_diff(const string &s, const string &t) {
    int i = 0, j = 0;
    bool diff = false;
    while (i < s.size() && j < t.size()) {
        if (s[i] == t[j]) {
            i++;
            j++;
        } else {
            if (diff) return false;
            diff = true;
            j++;
        }
    }
    return true;
}

int main(){
    int K;
    string S, T;
    cin >> K >> S >> T;
    if (S == T) {
        cout << "Yes";
        return 0;
    }
    int lenS = S.size();
    int lenT = T.size();
    if (lenS == lenT) {
        int cnt = 0;
        for(int i=0; i<lenS; ++i){
            if(S[i] != T[i]) cnt++;
            if(cnt >1) break;
        }
        if(cnt <=1) cout << "Yes";
        else cout << "No";
    }
    else if (lenS +1 == lenT) {
        if(one_diff(S, T)) cout << "Yes";
        else cout << "No";
    }
    else if (lenS -1 == lenT) {
        if(one_diff(T, S)) cout << "Yes";
        else cout << "No";
    }
    else {
        cout << "No";
    }
}
>>>>>>> e4af8d2 (using namespace std;)
