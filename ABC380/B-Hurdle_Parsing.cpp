<<<<<<< HEAD
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i,N) for (int i = 0; i < N; ++i)
using namespace std;


vector<string> splitString(const string& str, char delimiter) {
    vector<string> tokens;
    string token;
    stringstream ss(str); // Create a stringstream object from the input string

    while (getline(ss, token, delimiter)) {
        tokens.push_back(token); // Add each token to the vector
    }

    return tokens;
}

int main() {
    string S;
    cin >> S;
    vector<string> dash = splitString(S, '|');

    for (const string& dashnum : dash) {
        if(dashnum.length() != 0)
        cout << dashnum.length() << " ";
    }



return 0;
}
=======
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#define rep(i,N) for (int i = 0; i < N; ++i)
using namespace std;


vector<string> splitString(const string& str, char delimiter) {
    vector<string> tokens;
    string token;
    stringstream ss(str); // Create a stringstream object from the input string

    while (getline(ss, token, delimiter)) {
        tokens.push_back(token); // Add each token to the vector
    }

    return tokens;
}

int main() {
    string S;
    cin >> S;
    vector<string> dash = splitString(S, '|');

    for (const string& dashnum : dash) {
        if(dashnum.length() != 0)
        cout << dashnum.length() << " ";
    }



return 0;
}
>>>>>>> e4af8d2 (using namespace std;)
