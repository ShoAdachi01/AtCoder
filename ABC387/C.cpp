#include <bits/stdc++.h>
using namespace std;

static long long pows[10][19];

static long long snake_count_by_length[19]; // snake_count_by_length[k] = sum_{d=1..9} d^(k-1).

vector<int> toDigits(long long x) {
    if (x == 0) return {0}; // edge case
    vector<int> digits;
    while (x > 0) {
        digits.push_back(x % 10);
        x /= 10;
    }
    reverse(digits.begin(), digits.end());
    return digits;
}

long long countShorterLengths(int n_digits) {

    long long ans = 0;
    for(int k = 2; k < n_digits; k++){
        ans += snake_count_by_length[k];
    }
    return ans;
}

long long dpRec(int pos, bool started, int leadDigit, bool isTight,
                vector<int> &digits, vector<vector<vector<vector<long long>>>> &memo)
{
    if (pos == (int)digits.size()) {

        return (started ? 1LL : 0LL);
    }

    // If we have a memoized answer, return it.
    int tightIdx = (int)isTight;
    int sIdx = (int)started;
    if (memo[pos][sIdx][leadDigit+1][tightIdx] >= 0) {
        return memo[pos][sIdx][leadDigit+1][tightIdx];
    }

    long long ret = 0;
    int limit = (isTight ? digits[pos] : 9);

    for(int dig = 0; dig <= limit; dig++){
        // If we haven't started, then choosing dig=0 just continues leading zeros.
        if (!started) {
            if (dig == 0) {
                // Still haven't started
                ret += dpRec(pos+1, false, -1, isTight && (dig == limit), digits, memo);
            } else {
                // Start with a nonzero digit => that sets the leading digit
                // Next digits must be < leadDigit
                ret += dpRec(pos+1, true, dig, isTight && (dig == limit), digits, memo);
            }
        } else {
            // We have a leading digit 'leadDigit'; all subsequent digits must be < leadDigit
            if (dig <= leadDigit-1) {
                // possible
                ret += dpRec(pos+1, true, leadDigit, isTight && (dig == limit), digits, memo);
            }
        }
    }

    memo[pos][sIdx][leadDigit+1][tightIdx] = ret;
    return ret;
}

long long countSnakeUpTo(vector<int> &digits) {
    int n = (int)digits.size();
    static const long long UNDEF = -1;
    vector<vector<vector<vector<long long>>>> memo(
        n, vector<vector<vector<long long>>>(2, 
            vector<vector<long long>>(11, vector<long long>(2, -1))));

    long long res = dpRec(0, false, -1, true, digits, memo);
    return res;
}

long long countSnake(long long x) {
    if (x < 10) {
        return 0;
    }
    vector<int> digits = toDigits(x);
    int n = (int)digits.size();

    long long ans = countShorterLengths(n);

    long long ndigitCount = countSnakeUpTo(digits);

    
    long long subtract1digit = 9LL; 
    long long validNDigit = ndigitCount - subtract1digit;
    if (validNDigit < 0) validNDigit = 0; // safety check
    
    ans += validNDigit;
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Precompute powers
    for(int d=0; d<=9; d++){
        long long val = 1;
        pows[d][0] = 1; 
        for(int e=1; e<=18; e++){
            val = val * d;
            pows[d][e] = val;
        }
    }

    for(int k=2; k<=18; k++){
        long long sumd = 0;
        for(int d=1; d<=9; d++){
            sumd += pows[d][k-1];
        }
        snake_count_by_length[k] = sumd;
    }

    long long L, R;
    cin >> L >> R;

    long long ans = countSnake(R) - countSnake(L-1);
    cout << ans << "\n";

    return 0;
}
