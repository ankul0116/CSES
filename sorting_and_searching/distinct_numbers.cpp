#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main (){
   int n;
   cin>>n;
   vector<long long >v;
   for(int i=0;i<n;i++){
    long long a;
    cin>>a;
    v.push_back(a);
   }
   int prev=-1;
   int ans=0;
   sort(v.begin(),v.end());
   for(int i=0;i<n;i++){
    if(v[i] != prev){
      ans++;
    }
    prev=v[i];

   }
   cout<<ans;
  return 0;
}