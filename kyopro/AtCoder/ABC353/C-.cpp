<<<<<<< HEAD
#include <bits/stdc++.h>
#include <vector>

using namespace std;
/*
There is some issue with this code May 11th 2024
ABC Contest353 Completed up to B, failed C
*/

int main() {
    int N; 
    long long ans = 0;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    for(int i= 0; i < N; i++){
        for (int j = i + 1; j < N; j++) {
            ans += A[i] + A[j];
        }
    }

    ans -= (long long)N * 100000000;
    ans = abs(ans);
    cout << ans;

return 0;
}

=======
#include <bits/stdc++.h>
#include <vector>

using namespace std;
/*
There is some issue with this code May 11th 2024
ABC Contest353 Completed up to B, failed C
*/

int main() {
    int N; 
    long long ans = 0;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    for(int i= 0; i < N; i++){
        for (int j = i + 1; j < N; j++) {
            ans += A[i] + A[j];
        }
    }

    ans -= (long long)N * 100000000;
    ans = abs(ans);
    cout << ans;

return 0;
}

>>>>>>> ab1a627 (Add recent AtCoder solutions)
