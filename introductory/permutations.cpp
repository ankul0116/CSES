#include<iostream>
using namespace std;
int main (){
  int n;
   cin>>n;
   if(n==1){
    cout<<n;
    return 0;
   }
   if(n<4){
    cout<<"NO SOLUTION";
    return 0;
   }
  //  int arr[n];

  //  for(int i=0;i<n;i++){
  //   if(i<=n/2-1){
  //     arr[i]=(i+1)*2;

  //   }
  //   else {
  //     arr[i]=a;
  //     a+=2;
  //   }
  //  }
   for(int i=0;i<n/2;i++){
      cout<<(i+1)*2<<" ";
   }
   int a=1;
   for(int i=n/2;i<n;i++){
    cout<<a<<" ";
    a=a+2;
   }
  return 0;
}