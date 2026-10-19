#include<iostream>
#include <cmath>
using namespace std;
int main (){
  long long mod= pow(10,9)+7;
  long long n;
  cin>>n;
  long long ans=1;
  while(n>0){
    ans=(ans*2)%mod;
    n--;
  }
  cout<<ans;
  return 0;
}