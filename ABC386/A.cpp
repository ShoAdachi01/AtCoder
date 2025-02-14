<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> A(4);
    cin >> A[0] >> A[1] >> A[2] >> A[3];
    sort(A.begin(),A.end());

    if(A[0] == A[1] && A[2] == A[3] && A[0] != A[2]){
        cout << "Yes" << endl;
        return 0;
    }else if(A[0] == A[1] && A[1] == A[2] && A[2] != A[3]){ 
        cout << "Yes" << endl;
        return 0;
    } else if(A[0] != A[1] && A[1] == A[2] && A[2] == A[3]){
        cout << "Yes";
        return 0;
    } else {
        cout << "No";
        return 0;
    }
    return 0;
=======
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> A(4);
    cin >> A[0] >> A[1] >> A[2] >> A[3];
    sort(A.begin(),A.end());

    if(A[0] == A[1] && A[2] == A[3] && A[0] != A[2]){
        cout << "Yes" << endl;
        return 0;
    }else if(A[0] == A[1] && A[1] == A[2] && A[2] != A[3]){ 
        cout << "Yes" << endl;
        return 0;
    } else if(A[0] != A[1] && A[1] == A[2] && A[2] == A[3]){
        cout << "Yes";
        return 0;
    } else {
        cout << "No";
        return 0;
    }
    return 0;
>>>>>>> e4af8d2 (using namespace std;)
}