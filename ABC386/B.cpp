#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string S;
    int cnt = 0;
    cin >> S;
    for(int i = 1; i < S.length(); ++i){
        if(S[i] == '0' && S[i - 1] == '0') {
            cnt++;
            i++;
        }
    }
    cout << S.length() - cnt << endl; 
    return 0;
}