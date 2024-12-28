#include <bits/stdc++.h>
using namespace std;


int main() {
 int A, B;
 cin >> A >> B;
 int N = rand() % 10;
 if (N == A+B) N++;
 cout << N; 
}