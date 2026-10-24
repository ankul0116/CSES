#include <bits/stdc++.h>
using namespace std;

// int main (){
//   const int mod = 1e9 + 7;
//   int n,target;
//   cin>>n>>target;
//   vector<int>coins(n);
//   while(n>0){
//     cin>>coins[n-1];
//     n--;
//   }

//   vector<int>dp(target+1,-1);
//   dp[0]=0;
//   for(int i=1;i<=target;i++){
//     for(int j : coins){
//        if (i - j >= 0) {
//                 dp[i] = (dp[i] + dp[i - j]) % mod;
//             }
//     }
//   }
//   cout<<dp[target];


//   return 0;
// }
const int MOD = 1e9 + 7;
int solve(vector<int> & coins, vector<int>&dp,int target){
if(target ==0){
  return 1;
}
if(target <0){
  return 0;
}
  // for(int x : coins ){

  // }
  if(dp[target] != -1){
    return dp[target];
  }

  int ans=0;
  for(int x : coins){
      ans = (ans + solve(coins, dp, target - x)) % MOD;
  }
  return dp[target]=ans;
}

int main(){
  int n,target;
  cin>>n>>target;
  vector<int>coins(n);
  while(n>0){
    cin>>coins[n-1];
    n--;
  }
  vector<int>dp(target+1,-1);
  cout << solve(coins, dp, target) << endl;
  return 0;

}