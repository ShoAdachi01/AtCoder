<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

#define rep(i,N) for (int i = 0; i < N; ++i)

int main() {
    int N, T;
    cin >> N >> T;

    unordered_map<int, pair<int, int>> num_pos; 
    vector<int> row_count(N, 0), col_count(N, 0); 
    int diag1_count = 0, diag2_count = 0;  

    int value = 1;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            num_pos[value++] = {i, j};
        }
    }
    vector<int> sequence(T);
    rep(i, T) cin >> sequence[i];
    for (int turn = 0; turn < T; ++turn) {
        int number = sequence[turn];
        if (num_pos.find(number) != num_pos.end()) {
            auto [i, j] = num_pos[number];
            row_count[i]++;
            col_count[j]++;
            if (i == j) diag1_count++;
            if (i == N - 1 - j) diag2_count++;

            if (row_count[i] == N || col_count[j] == N || diag1_count == N || diag2_count == N) {
                cout << turn + 1 << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

#define rep(i,N) for (int i = 0; i < N; ++i)

int main() {
    int N, T;
    cin >> N >> T;

    unordered_map<int, pair<int, int>> num_pos; 
    vector<int> row_count(N, 0), col_count(N, 0); 
    int diag1_count = 0, diag2_count = 0;  

    int value = 1;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            num_pos[value++] = {i, j};
        }
    }
    vector<int> sequence(T);
    rep(i, T) cin >> sequence[i];
    for (int turn = 0; turn < T; ++turn) {
        int number = sequence[turn];
        if (num_pos.find(number) != num_pos.end()) {
            auto [i, j] = num_pos[number];
            row_count[i]++;
            col_count[j]++;
            if (i == j) diag1_count++;
            if (i == N - 1 - j) diag2_count++;

            if (row_count[i] == N || col_count[j] == N || diag1_count == N || diag2_count == N) {
                cout << turn + 1 << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}
>>>>>>> ab1a627 (Add recent AtCoder solutions)
