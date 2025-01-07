#include <bits/stdc++.h>
using namespace std; 
int main(){
    int cnt = 0;
    vector<int> a(4);
    for(int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for(int i = 1; i <= 3; i++) {
        if(a[i - 1] == a[i]) {
            cnt++;
            i++;
        }

    }
    cout << cnt;
    return 0;
}