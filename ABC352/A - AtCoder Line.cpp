#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X, Y, Z;
  cin >> N >> X >> Y >> Z;
  if (N - X > N - Y) {
    for(int i= X; i <= Y; i++) {
      if(i == Z){
        cout<< "Yes" << endl;
        return 0;
      }else if(i == Y) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  if (N - X < N - Y) {
    for(int i= X; i >= Y; i--) {
      if(i == Z){
        cout<< "Yes" << endl;
        return 0;
      }else if(i == Y) {
        cout << "No" << endl;
        return 0;
      }
    }

  }
return 0;

}
