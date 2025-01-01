#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int N, cnt = 0;
    cin >> N; // Input for the size of the vector
    vector<int> number(N); // Initialize vector with size N

    for (int i = 0; i < N; ++i) {
        cin >> number[i]; // Input elements into the vector
    }

    // Proper lambda syntax with explicit return
    int nonzero = count_if(number.begin(), number.end(), [](int num) {
        return num != 0;
    });

    while (nonzero > 1) {
            sort(number.begin(), number.end(), greater<int>());
            number[0]--;
            number[1]--;
            cnt++;
            nonzero = count_if(number.begin(), number.end(), [](int num) {
                return num != 0;
            });

        }

    cout << cnt << endl;

    return 0;
}
