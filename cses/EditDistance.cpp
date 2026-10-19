#include<bits/stdc++.h>
using namespace std;
int solve(int i,int j,int n,int m,string &x, string &y,vector<vector<int>> &dp){
  if(j==m){
    return n-i;
  }
  if(i==n){
    return m-j;
  }
  if(dp[i][j]!=-1){
    return dp[i][j];
  }
  int ans1,ans2,ans3,ans;
  if(x[i]==y[j]){
   return dp[i][j]= solve(i + 1, j + 1, n, m, x, y, dp);
  }
 
     //1. Add one character to the string.
       ans1 = 1 + solve(i+1,j,n,m,x,y,dp);
     //2.Remove one character from the string.
      ans2 =  1 + solve(i,j+1,n,m,x,y,dp);
     //3.Replace one character in the string
      ans3 =  1 + solve(i+1,j+1,n,m,x,y,dp);
     
  
  return dp[i][j]=min({ans1,ans2,ans3});
    
}
int main(){
  string x,y;// between A–Z
  cin>>x>>y;
  
   int n=x.size();
  int m=y.size();

  vector<vector<int>>dp(n,vector<int>(m,-1));
  cout<<solve(0,0,n,m,x,y,dp);
  

  return 0;
}