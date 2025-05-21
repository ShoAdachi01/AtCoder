#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){ 
    int N, tot = 0;
    cin >> N;
    vector<int> list(N);
    for(int i = 0; i < N; ++i){
        cin >> list[i];
        if(i % 2 == 0){
            tot += list[i];
        }
    }
    
    cout << tot;
    return 0;
}