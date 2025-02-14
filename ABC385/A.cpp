<<<<<<< HEAD
#include <iostream>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    if(A == B &&  B == C &&  A == C) {
        cout << "Yes" << endl;
        return 0;
    }else if((A + B + C) % 2 == 0) {
        if(A + B == C || A + C == B){
            cout << "Yes" << endl; 
            return 0;
        }else cout << "No";
    }else {
        cout << "No";
        return 0;
    }
    return 0;
=======
#include <iostream>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    if(A == B &&  B == C &&  A == C) {
        cout << "Yes" << endl;
        return 0;
    }else if((A + B + C) % 2 == 0) {
        if(A + B == C || A + C == B){
            cout << "Yes" << endl; 
            return 0;
        }else cout << "No";
    }else {
        cout << "No";
        return 0;
    }
    return 0;
>>>>>>> e4af8d2 (using namespace std;)
}