#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, s, a = 0;  
  cin >> N;
  for (int i = 0; (N - 1) > i; i++) {
    cin >> s;
     a+=s;
  }
  cout << a*(-1) << endl;
}
