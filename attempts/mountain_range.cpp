#include<bits/stdc++.h>
using namespace std;
int main (){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  vector<int>right(n);
  right[n-1]=n-1;
  //20 15 17 35 25 40 12 19 13 12
  for(int i=n-2;i>=0;i--){
    int mn=arr[i];
    for(int j=i+1;j<n;j++){
      if(arr[j]>mn){
        right[i]=j-1;
      }
      else{
        mn=arr[j];
      }
    }

  }
  for(int i : right){
    cout<<i<<" ";
  }
 
  return 0;
}