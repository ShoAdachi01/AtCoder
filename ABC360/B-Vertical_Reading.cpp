#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {

    string S, T;
    cin >> S >> T;

    int len_S = S.length();
    int len_T = T.length();

    // Iterate over all possible starting positions
    for (int c = 0; c <= len_S - len_T; ++c) {
        // Extract substring of length len_T
        if (S.substr(c, len_T) == T) {
            cout << "Yes" << endl;
            break;
        }
    }

    // If no match found
    cout << "No" << endl;

return 0;
}
