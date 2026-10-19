// #include <bits/stdc++.h>
// using namespace std;

// const int MOD = 1e9 + 7;

// int n, m;
// vector<int> a;
// vector<vector<int>> dp;

// int solve(int i, int prev) {

//     if (i == n)
//         return 1;

//     if (dp[i][prev] != -1)
//         return dp[i][prev];

//     long long ans = 0;

//     // Current value is fixed
//     if (a[i] != 0) {

//         if (abs(a[i] - prev) <= 1)
//             ans = solve(i + 1, a[i]);
//     }

//     // Current value is 0
//     else {

//         for (int x = 1; x <= m; x++) {

//             if (abs(x - prev) <= 1)
//                 ans = (ans + solve(i + 1, x)) % MOD;
//         }
//     }

//     return dp[i][prev] = ans;
// }

// int main() {

//     cin >> n >> m;

//     a.resize(n);

//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     dp.assign(n, vector<int>(m + 1, -1));

//     long long ans = 0;

//     // Handle first element separately
//     if (a[0] == 0) {

//         for (int x = 1; x <= m; x++)
//             ans = (ans + solve(1, x)) % MOD;
//     }
//     else {

//         ans = solve(1, a[0]);
//     }

//     cout << ans << '\n';
// }

// #include <bits/stdc++.h>
// using namespace std;

// const int MOD = 1e9 + 7;

// int n, m;
// vector<int> a;
// vector<vector<int>> dp;

// int solve(int i, int prev) {

//     if (i == n)
//         return 1;

//     if (dp[i][prev] != -1)
//         return dp[i][prev];

//     long long ans = 0;

//     if (a[i] != 0) {

//         if (prev == 0 || abs(a[i] - prev) <= 1)
//             ans = solve(i + 1, a[i]);
//     }
//     else {

//         for (int x = 1; x <= m; x++) {

//             if (prev == 0 || abs(x - prev) <= 1)
//                 ans = (ans + solve(i + 1, x)) % MOD;
//         }
//     }

//     return dp[i][prev] = ans;
// }

// int main() {

//     cin >> n >> m;

//     a.resize(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];

//     dp.assign(n, vector<int>(m + 1, -1));

//     cout << solve(0, 0);
// }

# include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int solve(int prev,int idx,vector<vector<int>>&dp,vector<int>&arr,int n ,int m){

    if (idx==n){
        return 1;
    }
    if (dp[idx][prev] != -1) return dp[idx][prev];
   
    if(arr[idx] != 0){
        if(abs(arr[idx]-prev)>1){
             return dp[idx][prev] = 0;
        }
        else{
            return  dp[idx][prev] = solve(arr[idx], idx+1, dp, arr, n, m);
            
        }

    }
    long long ans = 0;

    if(prev > 1)
        ans += solve(prev-1, idx+1, dp, arr, n, m);

    ans += solve(prev, idx+1, dp, arr, n, m);

    if(prev < m)
        ans += solve(prev+1, idx+1, dp, arr, n, m);

    return dp[idx][prev] = ans % MOD;


}
int main (){
     int n,m;
     cin >> n >> m;
     vector<int>arr(n);
     vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
     for (int i = 0; i < n; i++)
          cin >> arr[i];
     int ans=0;
     if(arr[0]==0){
        for(int i=1;i<=m;i++){
             ans=(ans+solve(i,1,dp,arr,n,m)%MOD)%MOD;
             

        }
        cout<<ans;
        return 0;
    }
    ans=solve(arr[0],1,dp,arr,n,m);
     cout<<ans;

    return 0;

}
