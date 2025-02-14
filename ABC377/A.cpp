<<<<<<< HEAD
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string S;
    cin >> S;
    sort(S.begin(), S.end());
    if(S == "ABC"){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
    return 0;
=======
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string S;
    cin >> S;
    sort(S.begin(), S.end());
    if(S == "ABC"){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
    return 0;
>>>>>>> e4af8d2 (using namespace std;)
}