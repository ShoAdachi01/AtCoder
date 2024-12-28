#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    int ind = -1;

    for (int i = 1; i < N; i++) {
        if(A[i] > A[0]) {
            ind = i + 1;
            break;
        }
    }
cout << ind <<endl;
return 0;
}
