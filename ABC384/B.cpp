<<<<<<< HEAD
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i,N) for (int i = 0; i < N; ++i)


int main() {
    int N, R;
    cin >> N >> R;

    vector <int> D(N), A(N);
    rep(i,N) cin >> D[i] >> A[i];

    rep(i,N) {
        if(D[i] == 1 && 1600 <= R && R <= 2799) {
            R += A[i];
        }else if(D[i] == 2 && R >= 1200 && R <= 2399){
            R+= A[i];
        }
    }
    //Div 1 1600 above to uner 2799
    //Div 2 1200 above and 2399 below 
    cout << R << endl;

return 0;
}
=======
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define rep(i,N) for (int i = 0; i < N; ++i)


int main() {
    int N, R;
    cin >> N >> R;

    vector <int> D(N), A(N);
    rep(i,N) cin >> D[i] >> A[i];

    rep(i,N) {
        if(D[i] == 1 && 1600 <= R && R <= 2799) {
            R += A[i];
        }else if(D[i] == 2 && R >= 1200 && R <= 2399){
            R+= A[i];
        }
    }
    //Div 1 1600 above to uner 2799
    //Div 2 1200 above and 2399 below 
    cout << R << endl;

return 0;
}
>>>>>>> e4af8d2 (using namespace std;)
