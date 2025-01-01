#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    int N, K, cnt = 0;
    cin >> N >> K;
    int avS = K;
    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    for (int i = 0; N > i; i++ ){
        if(A[i] <= avS) {
            avS -= A[i];
            }else {
                cnt++;
                avS = K -A[i];
            } 
        }
    
    if(avS < K) cnt++;
    cout << cnt;
return 0;
}
