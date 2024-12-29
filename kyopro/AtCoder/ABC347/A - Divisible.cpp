<<<<<<< HEAD
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        if(A[i] % K == 0){
            cout << A[i] / K << " ";
        }
    }

return 0;
}
=======
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        if(A[i] % K == 0){
            cout << A[i] / K << " ";
        }
    }

return 0;
}
>>>>>>> ab1a627 (Add recent AtCoder solutions)
