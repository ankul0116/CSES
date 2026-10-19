// #include<iostream>
// #include<vector>
// using namespace std;
// int solve(vector<int>&arr,vector<vector<int>>&dp,int i,int target){
// if(target==0){
//   return 0;
// }
// if(target<0){
//   return 1e9;
// }
// if(i==arr.size()){
//   return 1e9;
// }
// if(dp[i][target] != -1){
//   return dp[i][target];
// }
// int pick = 1 + solve(arr,dp,i,target-arr[i]);
// int notPick=solve(arr,dp,i+1,target);
//   return dp[i][target]=min(pick,notPick);
// }
// int main (){

 
//   int n;
//   cin>>n;
  
//   int target;
//   cin>>target;
//   vector<int>arr(n);
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
//   int ans=solve(arr,dp,0,target);
//   if(ans >= 1e9){
//     ans=-1;
//   }
//   cout<<ans;
//   return 0;
// }



#include<iostream>
#include<vector>
using namespace std;
int main (){

 
  int n;
  cin>>n;
  int target;
  cin>>target;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  vector<int>dp(target+1,1e9);
  dp[0]=0;
  for(int i : arr ){
    for(int j= i;j<=target ; j++){
      if(dp[j-i] != 1e9){
        dp[j]=min(dp[j],1+dp[j-i]);
      }
    }
  }
  int ans = dp[target] == 1e9 ? -1 : dp[target];
  cout<<ans;
  return 0;

}


