<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define rep(i,N) for (int i = 0; i < N; ++i)

int main() {
    int n = 5;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<pair<int,string>> ranking;
    for (int s = 1; s <= 31; ++s){
        string name; int score = 0; 
        rep(i,n) {
            if(s>>i&1) {
                score += a[i];
                name += 'A' + i;
            }
        }
        ranking.emplace_back(-score,name);
    } 
    sort(ranking.begin(),ranking.end());
    rep(i,31){
        cout << ranking[i].second << endl;
    }
return 0;
}
=======
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i,N) for (int i = 0; i < N; ++i)


int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    



return 0;
}
>>>>>>> e4af8d2 (using namespace std;)
