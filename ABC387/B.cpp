#include <bits/stdc++.h>
using namespace std;
int main() {
    int A, cnt = 0;
    cin >> A;
    int table[10][10];
    
    for(int i = 1; i < 10; i++) {
        for(int j = 1; j < 10; j++) {
            table[i][j] = i * j;
            }
        }
    for(int i = 1; i < 10; i++) {
        for(int j = 1; j < 10; j++) {
            if(table[i][j] == A) {
                cnt++;
            }
        }
    }
    cout << 2025 - A*cnt << endl;
    return 0;
}