#include<iostream>
#include<vector>
#include <algorithm>
#include <set>//for multiset
#include <utility>//for pair
using namespace std;
int main (){
  long long n,total;
  cin>>n>>total;
  vector<pair<int,int>>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i].first;
    v[i].second=i+1;
    
  }
  sort(v.begin(),v.end());
  int i=0,j=n-1;
  while(j>i){
    if(v[i].first+v[j].first==total){
      cout<<v[i].second<<" "<<v[j].second;
      return 0;
    }
    else if (v[i].first+v[j].first > total){
      j--;
    }
    else i++;

  }
  cout<<"IMPOSSIBLE"<<"\n";

  return 0;

}