<<<<<<< HEAD
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
    for (int i = 1; i < N; i++) {
        cout << A[i] * A[i-1] << " ";
    }

return 0;
}
=======
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
    for (int i = 1; i < N; i++) {
        cout << A[i] * A[i-1] << " ";
    }

return 0;
}
>>>>>>> ab1a627 (Add recent AtCoder solutions)
