#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string S;
    cin >> S;
    vector<char> letters(S.begin(), S.end());
    while(true) { 
        for(int i = 97; i <= 122; ++i) {
            char c = (char)i;
            if (find(letters.begin(), letters.end(), c) == letters.end()) {
                cout << c << endl;
                return 0;
            }
        }
    }
    

}