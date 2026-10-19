#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

int main() {
    int t;
    cin >> t;

    vector<int> n(t);
    int mx = 0;

    for (int i = 0; i < t; i++) {
        cin >> n[i];
        mx = max(mx, n[i]);
    }

    vector<vector<long long>> dp(mx + 1, vector<long long>(2));

    // Base case
    dp[1][0] = 1;
    dp[1][1] = 1;

    // DP
    for (int i = 2; i <= mx; i++) {
        dp[i][0] = (4 * dp[i - 1][0] + dp[i - 1][1]) % MOD;

        dp[i][1] = (dp[i - 1][0] + 2 * dp[i - 1][1]) % MOD;
    }

    // Answers
    for (int x : n) {
        cout << (dp[x][0] + dp[x][1]) % MOD << '\n';
    }

    return 0;
}