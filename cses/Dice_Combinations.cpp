#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    const int mod = 1e9 + 7;

    vector<long long> dp(n + 1, 0);

    // Base case
    dp[0] = 1;

    // Build DP
    for (int i = 1; i <= n; i++) {
        for (int dice = 1; dice <= 6; dice++) {
            if (i - dice >= 0) {
                dp[i] = (dp[i] + dp[i - dice]) % mod;
            }
        }
    }

    cout << dp[n] << endl;

    return 0;
}