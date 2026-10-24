
#include <bits/stdc++.h>
using namespace std;
int solve(int i ,int j,int n,int m,vector<vector<int>>&dp,vector<int>&arr1,vector<int>&arr2){
  if(i >= n || j >= m){
    return 0;
  }
  if(dp[i][j]!=-1){
    return dp[i][j];
  }
  int ans=INT_MIN;
  if(arr1[i]==arr2[j]){
    ans =max(ans,1 + solve(i+1,j+1,n,m,dp,arr1,arr2) );
  }else{
    int a = solve(i+1,j,n,m,dp,arr1,arr2);
    int b = solve(i,j+1,n,m,dp,arr1,arr2);
    ans=max(a,b);

  }
  return dp[i][j]=ans;
}
int main (){
  int n,m;
  cin>>n>>m;
  vector<int>arr1(n);
  vector<int>arr2(m);
  for(int i=0;i<n;i++){
    cin>>arr1[i];
  }
  for(int i=0;i<m;i++){
    cin>>arr2[i];
  }
  vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
  int ans=solve(0,0,n,m,dp,arr1,arr2);
  cout<<ans<<endl;
  for(int i=0;i<n+1;i++){
    for(int j=0;j<m+1;j++){
      cout<<dp[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}