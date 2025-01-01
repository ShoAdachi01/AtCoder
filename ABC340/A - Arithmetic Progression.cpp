#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, D;
    cin >> A >> B >> D;
    for (int i = 0; i < B; i++){
        if(A + (D * i) <= B){
            int ans = A + D * i;
            cout << ans << " ";
        }
    }
return 0;
}