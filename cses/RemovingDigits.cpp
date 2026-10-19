#include<iostream>
#include<vector>
using namespace std;
int solve(int n, vector<int>& dp) {

    if (n == 0)
        return 0;

    if (n < 10)
        return 1;

    if (dp[n] != 1e9)
        return dp[n];

    int a = n;

    while (a > 0) {
        int digit = a % 10;
        a /= 10;

        if (digit == 0)
            continue;

        dp[n] = min(dp[n], 1 + solve(n - digit, dp));
    }

    return dp[n];
}
int main (){
  int n;
  cin>>n;
  vector<int>dp(n+1,1e9);
  int ans=solve(n,dp);
  cout<<ans<<endl;
  return 0;
}