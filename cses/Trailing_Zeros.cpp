#include<iostream>
using namespace std;
int main (){
  long long n;
  int ans=0;
  cin>>n;
  while(n/5 >0){
    ans=ans+n/5;
    n=n/5;
  }
  cout<<ans;
  return 0;

}