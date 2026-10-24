#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,x;
  cin>>n>>x;
  vector<int>price(n);
  vector<int>pages(n);
  for(int i=0; i<n; i++) cin >> price[i];
for(int i=0; i<n; i++) cin >> pages[i];
  vector<int>dp(1+x,0);
  for(int i=0;i<n;i++  ){
    for(int j=x;j>=price[i];j--){
      dp[j]=max(dp[j],pages[i]+dp[j-price[i]]);

    }
  }
  int mx=INT_MIN;
for(int i=0;i<x+1;i++){
  mx=max(dp[i],mx);

}
cout<<mx;

}