#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  for(int i=1; N >= i; i++){
    if(i%3 == 0){
      cout << "x";
    }else {
      cout<< "o";
    }
  }
  return 0;
}
