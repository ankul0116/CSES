#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
 vector<int>arr(n);
 int sum=0;
 for(int i=0;i<n;i++){
  int num;
  cin>>num;
  sum+=num;
  arr[i]=num;
 }
 int count=0;

 vector<bool>visit(sum+1);
 visit[0]=true;
  for(int i=0;i<n;i++){
    for(int j=sum;j>=0;j--){
      int x=arr[i];
      if(j-x >= 0 && visit[j-x]){
        if(visit[j]==false){
            visit[j]=true;
            count++;
        }
      }
    }
  }
  cout<<count<<endl;
  for(int i=1;i<=sum;i++){
    if(visit[i]){
      cout<<i<<" ";
    }
  }
  return 0;
}