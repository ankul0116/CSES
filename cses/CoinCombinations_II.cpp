// #include<iostream>
// #include<vector>
// using namespace std;
// const int MOD = 1e9+7;
// int solve(vector<int> &coins,vector<vector<int>>&dp,int target,int i){
//   if(target ==0){
//     return 1;
//   }
//   if(target<0 || i==coins.size()){
//     return 0 ;
//   }
//   if(dp[i][target] != -1){
//     return dp[i][target];
//   }
//   int pick = solve(coins,dp,target-coins[i],i);
//   int skip=solve(coins,dp,target,i+1);
//   return dp[i][target]=(pick+skip)%MOD;

// }
// int main (){
//   int n,sum;
//   cin>>n>>sum;
//   vector<int>coins(n);
//   int i=0;
//   while(i<n){
//     cin>>coins[i];
//     i++;
//   }
//   vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
//   int ans=solve(coins,dp,sum,0);
//   cout<<ans;

//   return 0;
// }




#include<iostream>
#include<vector>
using namespace std;
const int MOD = 1e9+7;
int main (){
  int n,sum;
  cin>>n>>sum;
  vector<int>coins(n);
  int i=0;
  while(i<n){
    cin>>coins[i];
    i++;
  }
  vector<int>dp(sum+1,0);
  dp[0]=1;
  for(int i : coins){
    for(int j =0 ;j<=sum;j++){
      if((i+j<=sum) && dp[j] != 0)
       dp[i+j]=  (dp[i+j]+dp[j])%MOD;
    
    }
  }
  cout<<dp[sum];
  return 0;
  
}
