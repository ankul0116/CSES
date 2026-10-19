#include <bits/stdc++.h>
using namespace std;
long long solve(int n, int k, int idx, vector<vector<long long>>& dp) {
        if (k == 0)
            return 1;

        if (idx == n)
            return 0;

        if (dp[idx][k] != -1)
            return dp[idx][k];

        long long ans = 0;

        for (int i = idx + 1; i < n; i++) {
            ans += solve(n, k - 1, i, dp);
        }

        ans += solve(n, k, idx + 1, dp);

        return dp[idx][k] = ans;
    }

int main() {
    int n,k;
    cin >> n>>k;
     vector<vector<long long>> dp(n + 1,
                                     vector<long long>(k + 1, -1));

        cout<<solve(n, k, 0, dp);

    return 0;
}