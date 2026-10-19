#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<long long>v;
  for(int i=0;i<n;i++){
    long long x,y;
    cin>>x>>y;
    v.push_back(x);
    v.push_back(y);
  }
  for(int i=0;i<v.size();i += 2){
    long long x=v[i];
    long long y=v[i+1];
    if(x>y){
      if(x%2==0){
        long long ans =x*x-y+1;
        cout<<ans<<endl;
        

      }
      else{
        long long ans =(x-1)*(x-1)+y;
         cout<<ans<<endl;

      }
    }
    else{
      if(y%2==0){
        long long ans =(y-1)*(y-1)+x;
         cout<<ans<<endl;

      }
      else{
        long long ans =y*y-x+1;
         cout<<ans<<endl;

      }

    }

  }
  return 0;
}