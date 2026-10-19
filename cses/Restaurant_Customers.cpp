  #include<iostream>
  #include<vector>
  #include <algorithm>
using namespace std;
int main (){
  int n;
  vector<pair<int,int>>v;
  cin>>n;
  for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    v.push_back({a,1});
    v.push_back({b,-1});
  }
  sort(v.begin(),v.end());
  int ans=0;
  int maxi=0;                 
  for(int i=0;i<v.size();i++){
    ans=ans+v[i].second;
    maxi=max(maxi,ans);
  }
  cout<<maxi;
 
  return 0;
   
}