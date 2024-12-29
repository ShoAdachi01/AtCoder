#include <bits/stdc++.h>
using namespace std;

int main() {
  int a=0,b=0,x;
  for(int i=0;i<9;i++){
    cin>>x;
    a+=x;
  }
  for(int j=0;j<8;j++){
    cin>>x;
    b+=x;
  }
  cout<<(a-b+1)<<endl;
  return 0;
}
