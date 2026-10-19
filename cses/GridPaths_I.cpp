#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;
int solve(vector<vector<char>>&arr,vector<vector<int>>&dp,int i,int j){
  if(i<0 || j<0){
    return 0;
  }
  if(arr[i][j]=='*'){
    return 0;
  }
   if (i == 0 && j == 0)
        return 1;

  if (dp[i][j] != -1)
        return dp[i][j];
  
  int up=solve(arr,dp,i-1,j);
  int left = solve(arr,dp,i,j-1);
  return dp[i][j] = (up+left)%MOD;
}
int main(){
  int n;
  cin>>n;
  vector<vector<char>>arr(n,vector<char>(n));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }
  vector<vector<int>>dp(n,vector<int>(n,-1));
  int ans = solve(arr,dp,n-1,n-1);
  cout<<ans;
  return 0;
}