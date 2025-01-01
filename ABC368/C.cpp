#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) cin >> a[i];

    int T = 0; // Total number of operations
    int i = 0; // Current index
    while (i < N) {
        if (a[i] > 0) {
            if (T % 3 == 0) {
                a[i] -= 3; // Decrement by 3 if T % 3 == 0
            } else {
                a[i]--; // Decrement by 1 otherwise
            }
            ++T; // Increment operation counter
        } else {
            ++i; // Move to the next element when a[i] <= 0
        }
    }

    cout << T << endl;
    return 0;
}
