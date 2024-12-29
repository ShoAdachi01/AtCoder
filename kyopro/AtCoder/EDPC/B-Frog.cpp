#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> h(N);
    for (int i = 0; i < N; ++i) {
        cin >> h[i];
    }

    vector<int> dp(N, numeric_limits<int>::max()); // Initialize dp with a large value
    dp[0] = 0; // Starting point

    for (int i = 1; i < N; ++i) {
        for (int k = 1; k <= K && i - k >= 0; ++k) {
            dp[i] = std::min(dp[i], dp[i-k] + abs(h[i] - h[i-k]));
        }
    }

    cout << dp[N-1] << endl;
    return 0;
}
