#include <iostream>
using namespace std;

int main(){
    int K, cnt = 0;
    string S, T;
    cin >> K >> S >> T;
    if (S == T) {
        cout << "Yes" << endl;
        return 0;
    }
    size_t length = min(S.length(), T.length());

    for(size_t i = 0; i < length; ++i){
        if(S[i] != T[i]){
            cnt++;
        }
    }
    cnt += abs((int)S.length() - (int)T.length());

    if(cnt == 1) {
        cout << "Yes" << endl;
    } else {
        cout <<"No" << endl;
    }
    return 0;
}